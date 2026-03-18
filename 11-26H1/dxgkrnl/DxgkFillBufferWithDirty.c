/*
 * XREFs of DxgkFillBufferWithDirty @ 0x140218690
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?LiveMigrationTransferDirtyContent@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@IW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x140214F24 (-LiveMigrationTransferDirtyContent@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@IW4_D.c)
 */

__int64 __fastcall DxgkFillBufferWithDirty(_QWORD *a1, int a2, struct _LUID *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v9; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+30h] [rbp-28h]

  v7 = (int)ADAPTER_RENDER::LiveMigrationTransferDirtyContent(a1[396], a2, a3, a4, 0, a5);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    LODWORD(v9) = a3->HighPart;
    VgpuTrace(1, v7, a1, L"DxgkFillBufferWithDirty", (wchar_t *)L"LUID: %d %d", v9, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196626,
      -1,
      (__int64)L"DxgkFillBufferWithDirty called with status %1",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v7;
}
