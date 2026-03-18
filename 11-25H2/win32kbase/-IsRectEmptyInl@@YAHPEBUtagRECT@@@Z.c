/*
 * XREFs of ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400637C8
 * Callers:
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140062BA4 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140063190 (TransformRectBetweenCoordinateSpaces.c)
 *     ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x140129210 (-ProcessEnvironment@CPTPEngine@@MEAAJXZ.c)
 *     ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x140166C10 (-ComputeDominantState@tagWND@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z @ 0x1401C4680 (-bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401D07C0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401D2450 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRectEmptyInl(const struct tagRECT *a1)
{
  return a1->left >= a1->right || a1->top >= a1->bottom;
}
