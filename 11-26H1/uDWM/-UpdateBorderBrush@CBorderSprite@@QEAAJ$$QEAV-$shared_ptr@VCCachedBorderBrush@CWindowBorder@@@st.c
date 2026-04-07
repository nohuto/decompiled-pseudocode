/*
 * XREFs of ?UpdateBorderBrush@CBorderSprite@@QEAAJ$$QEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000BC70
 * Callers:
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z @ 0x18000BAA4 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z.c)
 *     ?OnGraphicsDeviceLost@CWindowBorder@@UEAAXXZ @ 0x1800DE660 (-OnGraphicsDeviceLost@CWindowBorder@@UEAAXXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8D8 (-SetRect@CRectangleVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000BD84 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ??$SetBrush@PEAUICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x18000D204 (--$SetBrush@PEAUICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionB.c)
 *     ??$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z @ 0x180082BF4 (--$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBorderSprite::UpdateBorderBrush(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1 + 208;
  std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(a1 + 208);
  if ( (unsigned __int8)std::operator==<CWindowBorder::CCachedBorderBrush>(v1) )
  {
    v3 = CSpriteVisual::SetBrush<std::nullptr_t>(a1);
    v4 = v3;
    if ( v3 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x308,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v3,
      v12);
    return v4;
  }
  else
  {
    v6 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionBrush *>(a1, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = *(_QWORD *)v1;
      v9 = (float)*(int *)(a1 + 64) + *(float *)(*(_QWORD *)v1 + 56LL);
      LODWORD(v10) = *(_DWORD *)(*(_QWORD *)v1 + 52LL) ^ _xmm;
      LODWORD(v12) = *(_DWORD *)(*(_QWORD *)v1 + 48LL) ^ _xmm;
      *((float *)&v12 + 1) = v10;
      v11 = (float)*(int *)(a1 + 68);
      *((float *)&v12 + 2) = v9 + *(float *)&v12;
      *((float *)&v12 + 3) = (float)(v11 + *(float *)(v8 + 56)) + v10;
      CRectangleVisual::SetRect(a1, &v12);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x303,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v6,
      v12);
    return v7;
  }
}
