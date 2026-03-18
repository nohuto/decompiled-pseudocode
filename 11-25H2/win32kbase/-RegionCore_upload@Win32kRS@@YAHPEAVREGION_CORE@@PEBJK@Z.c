/*
 * XREFs of ?RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z @ 0x14013E95C
 * Callers:
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14017D850 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_upload(Win32kRS *this, struct REGION_CORE *a2, const int *a3)
{
  struct REGION_CORE *v3; // rdi
  unsigned int v6; // ebp
  char *v7; // rbx
  __int64 v8; // rsi

  v3 = qword_1402A10B0;
  v6 = (unsigned int)a3;
  v7 = (char *)qword_1402A10B0 + 8;
  W32AcquirePushLockSharedEx((struct REGION_CORE *)((char *)qword_1402A10B0 + 8), 2u);
  v8 = *(_QWORD *)v3;
  LODWORD(v3) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, _QWORD))(*(_QWORD *)v3 + 328LL))(
                  this,
                  a2,
                  v6);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))(v8 + 48), this);
  ExReleasePushLockSharedEx(v7, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
