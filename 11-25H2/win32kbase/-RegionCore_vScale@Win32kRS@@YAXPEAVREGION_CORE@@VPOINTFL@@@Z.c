/*
 * XREFs of ?RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z @ 0x140092664
 * Callers:
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x140092140 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kRS::RegionCore_vScale(const struct REGION_CORE *a1, __int64 a2)
{
  struct REGION_CORE *v2; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  v2 = qword_1402A10B0;
  v5 = (char *)qword_1402A10B0 + 8;
  W32AcquirePushLockSharedEx((struct REGION_CORE *)((char *)qword_1402A10B0 + 8), 2u);
  v6 = *(_QWORD *)v2;
  (*(void (__fastcall **)(const struct REGION_CORE *, __int64))(v6 + 320))(a1, a2);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v6 + 48), a1);
  ExReleasePushLockSharedEx(v5, 2LL);
  KeLeaveCriticalRegion();
}
