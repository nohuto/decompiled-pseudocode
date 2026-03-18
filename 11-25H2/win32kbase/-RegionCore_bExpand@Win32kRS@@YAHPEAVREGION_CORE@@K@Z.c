/*
 * XREFs of ?RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z @ 0x14019C64C
 * Callers:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x140094980 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_bExpand(Win32kRS *this, struct REGION_CORE *a2)
{
  struct REGION_CORE *v2; // rdi
  unsigned int v3; // ebp
  char *v5; // rbx
  __int64 v6; // rsi

  v2 = qword_1402A10B0;
  v3 = (unsigned int)a2;
  v5 = (char *)qword_1402A10B0 + 8;
  W32AcquirePushLockSharedEx((struct REGION_CORE *)((char *)qword_1402A10B0 + 8), 2u);
  v6 = *(_QWORD *)v2;
  LODWORD(v2) = (*(__int64 (__fastcall **)(Win32kRS *, _QWORD))(*(_QWORD *)v2 + 104LL))(this, v3);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))(v6 + 48), this);
  ExReleasePushLockSharedEx(v5, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
