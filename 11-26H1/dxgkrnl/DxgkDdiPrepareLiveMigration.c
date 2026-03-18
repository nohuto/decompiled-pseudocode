/*
 * XREFs of DxgkDdiPrepareLiveMigration @ 0x1402176AC
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?PrepareLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU_GPUP_MIGRATION_BUFFER@@PEAI@Z @ 0x140215348 (-PrepareLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_.c)
 */

__int64 __fastcall DxgkDdiPrepareLiveMigration(
        _QWORD *a1,
        int a2,
        struct _LUID *a3,
        int a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 Format; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]

  v6 = a6;
  if ( *a6 >= 2 )
  {
    v10 = a1[396];
    LODWORD(a6) = 0xFFFF;
    HIDWORD(a6) = a4 != 0;
    v11 = (int)ADAPTER_RENDER::PrepareLiveMigration(v10, a2, a3, &a6, a5, (__int64)v6);
    if ( bTracingEnabled )
    {
      v16 = HIDWORD(a6);
      v15 = (int)a6;
      LowPart = a3->LowPart;
      LODWORD(v13) = a3->HighPart;
      VgpuTrace(
        1,
        v11,
        a1,
        L"DxgkDdiPrepareLiveMigration",
        (wchar_t *)L"LUID: %d %d vfIndex: %d MigrationType: %d",
        v13,
        LowPart,
        v15,
        v16);
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196619,
        -1,
        (__int64)L"PrepareLiveMigration called on vf index %1, with status %2",
        (unsigned int)a6,
        v11,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    Format = *v6;
    WdLogGlobalForLineNumber = 1077;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PrepareLiveMigration: pLiveMigrationBuffersInfo is not large enough. LiveMigrationBufferCount: %d",
      Format,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225507LL;
  }
}
