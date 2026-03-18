/*
 * XREFs of ??0?$CMergedRectBase@$03@@QEAA@_N@Z @ 0x18005A228
 * Callers:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800211E0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ??0?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18005A290 (--0-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 */

__int64 __fastcall CMergedRectBase<4>::CMergedRectBase<4>(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  *(_DWORD *)a1 = 0;
  v2 = (char *)(a1 + 4);
  v3 = 5LL;
  do
  {
    TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>(v2);
    v2 += 16;
    --v3;
  }
  while ( v3 );
  *(_BYTE *)(a1 + 164) = 0;
  result = a1;
  *(_BYTE *)(a1 + 168) = -1;
  return result;
}
