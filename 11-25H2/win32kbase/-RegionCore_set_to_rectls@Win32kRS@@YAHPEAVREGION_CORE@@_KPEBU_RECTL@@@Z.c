/*
 * XREFs of ?RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z @ 0x140098984
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140097160 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_set_to_rectls(
        Win32kRS *this,
        struct REGION_CORE *a2,
        __int64 a3,
        const struct _RECTL *a4)
{
  struct REGION_CORE *v4; // rdi
  char *v8; // rbx
  __int64 v9; // rsi

  v4 = qword_1402A10B0;
  v8 = (char *)qword_1402A10B0 + 8;
  W32AcquirePushLockSharedEx((struct REGION_CORE *)((char *)qword_1402A10B0 + 8), 2u);
  v9 = *(_QWORD *)v4;
  LODWORD(v4) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, __int64))(*(_QWORD *)v4 + 168LL))(
                  this,
                  a2,
                  a3);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v9 + 48), this);
  ExReleasePushLockSharedEx(v8, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
