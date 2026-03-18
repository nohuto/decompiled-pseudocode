/*
 * XREFs of ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140095AE0
 * Callers:
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x14000FE30 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140010CB0 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x140011960 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x140095278 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x140095344 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140095A28 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x1400DDB7C (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14017D850 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     ?vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C4900 (-vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall REGION_CORE::get_sizeScanAlloc(REGION_CORE *this)
{
  struct REGION_CORE *v1; // rdi
  unsigned int v3; // eax
  char *v4; // rcx
  unsigned int v5; // edi

  v1 = qword_1402A10B0;
  if ( !qword_1402A10B0 )
    return *((unsigned int *)this + 2);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v1 + 8, 2LL);
  v3 = (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)v1 + 224LL))(this);
  v4 = (char *)v1 + 8;
  v5 = v3;
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return v5;
}
