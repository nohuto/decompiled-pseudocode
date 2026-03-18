/*
 * XREFs of ?RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z @ 0x140095BA8
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_set_from_path(
        Win32kRS *this,
        struct REGION_CORE *a2,
        struct EPATHOBJ *a3,
        __int64 a4)
{
  struct REGION_CORE *v4; // rdi
  unsigned int v8; // r14d
  char *v9; // rbx
  __int64 v10; // rsi

  v4 = qword_1402A10B0;
  v8 = (unsigned int)a3;
  v9 = (char *)qword_1402A10B0 + 8;
  W32AcquirePushLockSharedEx((struct REGION_CORE *)((char *)qword_1402A10B0 + 8), 2u);
  v10 = *(_QWORD *)v4;
  LODWORD(v4) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, _QWORD, __int64))(*(_QWORD *)v4 + 200LL))(
                  this,
                  a2,
                  v8,
                  a4);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v10 + 48), this);
  ExReleasePushLockSharedEx(v9, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
