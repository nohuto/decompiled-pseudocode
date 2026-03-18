/*
 * XREFs of ?Push@?$CWatermarkStack@VCCornerRects@@$07$01$07@@QEAAJAEBVCCornerRects@@@Z @ 0x1800DEF3C
 * Callers:
 *     ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x1800DED38 (-Push@COccluderClipStack@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$CWatermarkStack@VCCornerRects@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x180237300 (-Grow@-$CWatermarkStack@VCCornerRects@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CWatermarkStack<CCornerRects,8,2,8>::Push(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)a1 + 2) == *((_DWORD *)a1 + 3)
    && (v8 = CWatermarkStack<CCornerRects,8,2,8>::Grow(a1), v9 = v8, v8 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v8);
    return v9;
  }
  else
  {
    v4 = *a1;
    v5 = 68LL * *((unsigned int *)a1 + 2);
    *(_OWORD *)(v5 + v4) = *(_OWORD *)a2;
    *(_OWORD *)(v5 + v4 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v5 + v4 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v5 + v4 + 48) = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(v5 + v4 + 64) = *(_BYTE *)(a2 + 64);
    ++*((_DWORD *)a1 + 2);
    v6 = *((_DWORD *)a1 + 5);
    if ( v6 <= *((_DWORD *)a1 + 2) )
      v6 = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 5) = v6;
    return 0LL;
  }
}
