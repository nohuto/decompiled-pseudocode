/*
 * XREFs of ?UpdateLayout@CBorderSprite@@UEAAJ_N@Z @ 0x18000BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8D8 (-SetRect@CRectangleVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x1800162D0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBorderSprite::UpdateLayout(CBorderSprite *this, bool a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  __int64 *v5; // rcx
  __int64 v6; // rax
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  updated = CContainerVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F1,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)updated,
      v11);
    return v4;
  }
  else
  {
    if ( !(unsigned __int8)std::operator==<CWindowBorder::CCachedBorderBrush>((char *)this + 208) )
    {
      v6 = *v5;
      v7 = (float)*((int *)this + 16) + *(float *)(*v5 + 56);
      LODWORD(v8) = *(_DWORD *)(*v5 + 52) ^ _xmm;
      LODWORD(v11) = *(_DWORD *)(*v5 + 48) ^ _xmm;
      *((float *)&v11 + 1) = v8;
      v9 = (float)*((int *)this + 17);
      *((float *)&v11 + 2) = v7 + *(float *)&v11;
      *((float *)&v11 + 3) = (float)(v9 + *(float *)(v6 + 56)) + v8;
      CRectangleVisual::SetRect((__int64)this, &v11);
    }
    return 0LL;
  }
}
