/*
 * XREFs of ?RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z @ 0x140094A0C
 * Callers:
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140094AD0 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_upload_for_floodfill(
        Win32kRS *this,
        struct REGION_CORE *a2,
        const int *a3,
        __int64 a4,
        int *a5)
{
  struct REGION_CORE *v5; // rdi
  unsigned int v9; // r14d
  char *v10; // rbx
  __int64 v11; // rsi

  v5 = qword_1402A10B0;
  v9 = (unsigned int)a3;
  v10 = (char *)qword_1402A10B0 + 8;
  W32AcquirePushLockSharedEx((struct REGION_CORE *)((char *)qword_1402A10B0 + 8), 2u);
  v11 = *(_QWORD *)v5;
  LODWORD(v5) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, _QWORD, __int64, _DWORD))(*(_QWORD *)v5 + 336LL))(
                  this,
                  a2,
                  v9,
                  a4,
                  (_DWORD)a5);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v11 + 48), this);
  ExReleasePushLockSharedEx(v10, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
