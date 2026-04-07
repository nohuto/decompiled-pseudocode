/*
 * XREFs of ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z @ 0x18000BAA4
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18000B550 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001007C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?ValidateVisual@CWindowBorder@@UEAAJXZ @ 0x18006F900 (-ValidateVisual@CWindowBorder@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateBorderBrush@CBorderSprite@@QEAAJ$$QEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000BC70 (-UpdateBorderBrush@CBorderSprite@@QEAAJ$$QEAV-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@st.c)
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000C210 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowBorder::CreateAndAttachBorderBrush(CWindowBorder *this, struct CBorderSprite *a2)
{
  int BorderBrush; // edi
  __int64 v4; // rdx
  std::_Ref_count_base *v5; // rbx
  std::_Ref_count_base *v7; // rbx
  int v8; // [rsp+20h] [rbp-28h]
  std::_Ref_count_base *v9[2]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_OWORD *)v9 = 0LL;
  BorderBrush = CWindowBorder::CCachedBorderBrush::GetBorderBrush(
                  (_DWORD)this,
                  *((_DWORD *)this + 63),
                  (int)this + 260,
                  *((_DWORD *)this + 69),
                  *((_DWORD *)this + 64),
                  (__int64)v9);
  if ( BorderBrush < 0 )
  {
    v4 = 65LL;
    goto LABEL_4;
  }
  BorderBrush = CBorderSprite::UpdateBorderBrush(a2, v9);
  if ( BorderBrush < 0 )
  {
    v4 = 66LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)BorderBrush,
      v8);
    v5 = v9[1];
    if ( v9[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9[1] + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(std::_Ref_count_base *))v5)(v5);
        std::_Ref_count_base::_Decwref(v5);
      }
    }
    return (unsigned int)BorderBrush;
  }
  v7 = v9[1];
  if ( v9[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v9[1] + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))v7)(v7);
    std::_Ref_count_base::_Decwref(v7);
  }
  return 0LL;
}
