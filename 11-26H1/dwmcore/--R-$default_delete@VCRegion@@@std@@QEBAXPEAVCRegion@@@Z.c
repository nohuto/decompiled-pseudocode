/*
 * XREFs of ??R?$default_delete@VCRegion@@@std@@QEBAXPEAVCRegion@@@Z @ 0x1801B31E4
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18001A2B4 (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18009CCB0 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x18014B068 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x1801C9A10 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CRegion>::operator()(__int64 a1, FastRegion::CRegion **a2)
{
  if ( a2 )
  {
    FastRegion::CRegion::FreeMemory(a2);
    operator delete(a2, 0x48uLL);
  }
}
