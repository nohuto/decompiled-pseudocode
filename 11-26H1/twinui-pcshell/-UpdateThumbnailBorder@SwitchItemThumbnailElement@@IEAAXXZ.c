/*
 * XREFs of ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804D3DA0
 * Callers:
 *     ?SetFocused@SwitchItemThumbnailElement@@UEAAX_N@Z @ 0x1804D3A50 (-SetFocused@SwitchItemThumbnailElement@@UEAAX_N@Z.c)
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804D4090 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 *     ?v_SetRenderMode@SwitchItemThumbnailElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x1804D4290 (-v_SetRenderMode@SwitchItemThumbnailElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElem.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1801E0D10 (-IsHighContrast@@YAHXZ.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1804CF028 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D3594 (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D35EC (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SwitchItemThumbnailElement::UpdateThumbnailBorder(SwitchItemThumbnailElement *this)
{
  int v2; // eax
  bool v3; // bl
  __int64 *v4; // rsi
  __int64 v5; // rbp
  __int64 OuterBorderInfo; // rbx
  __int64 InnerBorderInfo; // rax
  int v8; // eax
  _BYTE v9[12]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[28]; // [rsp+2Ch] [rbp-1Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 74) )
  {
    LOBYTE(v2) = CMultitaskingViewButtonElement::_CalcButtonRenderMode((__int64)this);
    v3 = 1;
    if ( (unsigned int)(v2 - 1) > 1 )
      v3 = (unsigned int)IsHighContrast() != 0;
    v4 = (__int64 *)*((_QWORD *)this + 74);
    v5 = *v4;
    if ( v3 )
    {
      OuterBorderInfo = SwitchItemThumbnailElement::GetOuterBorderInfo((__int64)this, (__int64)v9);
      InnerBorderInfo = SwitchItemThumbnailElement::GetInnerBorderInfo((__int64)this, (__int64)v10);
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v5 + 216))(v4, InnerBorderInfo, OuterBorderInfo);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF6,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
          (const char *)(unsigned int)v8);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(v5 + 224))(*((_QWORD *)this + 74));
    }
  }
}
