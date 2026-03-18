/*
 * XREFs of ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330
 * Callers:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x14000F490 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140010CB0 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1400112F0 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011470 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x140011960 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1400131B0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     GreSetRectRgn @ 0x140014720 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x140014B10 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x140014F50 (SetRectRgnIndirect.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x14001FD84 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kRS::RegionCore_set_sizeScan(Win32kRS *this, struct REGION_CORE *a2)
{
  struct REGION_CORE *v2; // rdi
  unsigned int v3; // esi
  char *v5; // rbx
  __int64 v6; // rdi

  v2 = qword_1402A10B0;
  v3 = (unsigned int)a2;
  v5 = (char *)qword_1402A10B0 + 8;
  W32AcquirePushLockSharedEx((struct REGION_CORE *)((char *)qword_1402A10B0 + 8), 2u);
  v6 = *(_QWORD *)v2;
  (*(void (__fastcall **)(Win32kRS *, _QWORD))(v6 + 232))(this, v3);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v6 + 48), this);
  ExReleasePushLockSharedEx(v5, 2LL);
  KeLeaveCriticalRegion();
}
