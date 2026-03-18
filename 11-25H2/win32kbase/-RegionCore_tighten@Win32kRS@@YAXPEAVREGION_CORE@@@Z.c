/*
 * XREFs of ?RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140096B54
 * Callers:
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x140095EA0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kRS::RegionCore_tighten(Win32kRS *this, struct REGION_CORE *a2)
{
  struct REGION_CORE *v2; // rdi
  char *v4; // rbx
  __int64 v5; // rdi

  v2 = qword_1402A10B0;
  v4 = (char *)qword_1402A10B0 + 8;
  W32AcquirePushLockSharedEx((struct REGION_CORE *)((char *)qword_1402A10B0 + 8), 2u);
  v5 = *(_QWORD *)v2;
  (*(void (__fastcall **)(Win32kRS *))(v5 + 304))(this);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v5 + 48), this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
}
