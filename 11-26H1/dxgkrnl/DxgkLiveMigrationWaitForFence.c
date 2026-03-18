/*
 * XREFs of DxgkLiveMigrationWaitForFence @ 0x14021885C
 * Callers:
 *     DpiLiveMigrationWaitForFence @ 0x14008697C (DpiLiveMigrationWaitForFence.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?LiveMigrationWaitForFence@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@_KPEAU_KEVENT@@W4_DXGK_GPUP_MIGRATIONTYPE@@@Z @ 0x1402150A4 (-LiveMigrationWaitForFence@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@_KPEAU_KEVENT.c)
 */

__int64 __fastcall DxgkLiveMigrationWaitForFence(
        _QWORD *a1,
        int a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v8; // rbx
  __int64 v10; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+30h] [rbp-28h]

  v8 = (int)ADAPTER_RENDER::LiveMigrationWaitForFence(a1[396], a2, a3, a4, a5, a6);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    LODWORD(v10) = a3->HighPart;
    VgpuTrace(1, v8, a1, L"DxgkLiveMigrationWaitForFence", (wchar_t *)L"LUID: %d %d", v10, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196626,
      -1,
      (__int64)L"DxgkLiveMigrationWaitForFence called with status %1",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v8;
}
