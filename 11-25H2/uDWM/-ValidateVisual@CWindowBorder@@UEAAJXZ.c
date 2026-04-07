/*
 * XREFs of ?ValidateVisual@CWindowBorder@@UEAAJXZ @ 0x180078FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18000B780 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003BAB0 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003D79C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x18003E108 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowBorder::ValidateVisual(
        __int64 (__fastcall ****this)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))
{
  int v2; // ebx
  __int64 v4; // rdx
  std::_Ref_count_base *v5; // rbx
  __int64 (__fastcall ***v6)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rdx
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CVisual::ValidateVisual((CVisual *)this);
  if ( v2 < 0 )
  {
    v4 = 40LL;
  }
  else
  {
    if ( ((_DWORD)this[4] & 0x1000) == 0 )
      return 0LL;
    *(_OWORD *)v7 = 0LL;
    std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(this + 30, (__int64 *)v7);
    if ( v7[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v7[1] + 2, 0xFFFFFFFF) == 1 )
    {
      v5 = v7[1];
      (**(void (__fastcall ***)(std::_Ref_count_base *))v7[1])(v7[1]);
      std::_Ref_count_base::_Decwref(v5);
    }
    v6 = this[29];
    if ( !v6 || (v2 = CWindowBorder::CreateAndAttachBorderBrush((CWindowBorder *)this, v6), v2 >= 0) )
    {
      *((_DWORD *)this + 8) &= ~0x1000u;
      return 0LL;
    }
    v4 = 48LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v2,
    (int)v7[0]);
  return (unsigned int)v2;
}
