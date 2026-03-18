/*
 * XREFs of ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1400112F0
 * Callers:
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140094AD0 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x140095278 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x140095344 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14017D850 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4370 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 * Callees:
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 */

void __fastcall REGION_CORE::set_sizeScan(REGION_CORE *this, struct REGION_CORE *a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  if ( qword_1402A10B0 )
  {
    Win32kRS::RegionCore_set_sizeScan(this, a2, a3);
  }
  else
  {
    v3 = (unsigned int)a2;
    v4 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 2) = v3;
    if ( v4 < v3 )
    {
      *((_QWORD *)this + 2) = v4;
      RustOnZeroSizedScanCallback();
    }
  }
}
