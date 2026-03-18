/*
 * XREFs of ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x1801CC674
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18005E6F4 (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall ClipPlaneIterator::ResetToStart(ClipPlaneIterator *this)
{
  char *v2; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 1) = 0;
  *(_BYTE *)this = 0;
  v2 = (char *)this + 56;
  *((_DWORD *)v2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v2, 4u);
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 24, 0x10u);
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 88, 4u);
  *((_QWORD *)this + 15) = 0LL;
}
