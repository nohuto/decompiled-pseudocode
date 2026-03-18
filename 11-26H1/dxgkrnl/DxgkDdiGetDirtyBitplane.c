/*
 * XREFs of DxgkDdiGetDirtyBitplane @ 0x140217068
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?LiveMigrationGetDirtyBitplane@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@I@Z @ 0x140214C44 (-LiveMigrationGetDirtyBitplane@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkDdiGetDirtyBitplane(_QWORD *a1, int a2, struct _LUID *a3, __int64 a4)
{
  __int64 DirtyBitplane; // rbx
  LONG HighPart; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+30h] [rbp-28h]

  DirtyBitplane = (int)ADAPTER_RENDER::LiveMigrationGetDirtyBitplane(a1[396], a2, a3, a4);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, DirtyBitplane, a1, L"DxgkDdiGetDirtyBitplane", (wchar_t *)L"LUID: %d %d", HighPart, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196625,
      -1,
      (__int64)L"DxgkDdiGetDirtyBitplane called with status %1",
      DirtyBitplane,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)DirtyBitplane;
}
