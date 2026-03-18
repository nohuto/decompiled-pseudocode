/*
 * XREFs of ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400828BC
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14003E960 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14008145C (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x1401A7D20 (-ComputeDominantState@tagWND@@QEAAXXZ.c)
 *     ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1401B1A90 (-ProcessEnvironment@CPTPEngine@@MEAAJXZ.c)
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401FB550 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x140217B84 (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRectEmptyInl(const struct tagRECT *a1)
{
  return a1->left >= a1->right || a1->top >= a1->bottom;
}
