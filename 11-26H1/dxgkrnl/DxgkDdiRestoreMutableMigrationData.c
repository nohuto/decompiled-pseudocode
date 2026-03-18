/*
 * XREFs of DxgkDdiRestoreMutableMigrationData @ 0x140217F60
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?RestoreMutableMigrationData@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_RESTORE_MUTABLE_MIGRATION_DATA@@@Z @ 0x140215F50 (-RestoreMutableMigrationData@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKAR.c)
 */

__int64 __fastcall DxgkDdiRestoreMutableMigrationData(_QWORD *a1, int a2, struct _LUID *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v8; // rbx
  LONG HighPart; // [rsp+28h] [rbp-50h]
  DWORD LowPart; // [rsp+30h] [rbp-48h]
  _QWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF

  v6 = a1[396];
  v12[2] = a4;
  v12[1] = a5;
  v12[0] = 0xFFFFLL;
  v8 = (int)ADAPTER_RENDER::RestoreMutableMigrationData(v6, a2, a3, v12);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, v8, a1, L"DxgkDdiRestoreMutableMigrationData", (wchar_t *)L"LUID: %d %d", HighPart, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196624,
      -1,
      (__int64)L"DxgkDdiRestoreImmutableMigrationData called with status %1",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v8;
}
