/*
 * XREFs of DxgkDdiEndLiveMigration @ 0x140216EE8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?EndLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140214420 (-EndLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z.c)
 */

__int64 __fastcall DxgkDdiEndLiveMigration(_QWORD *a1, int a2, struct _LUID *a3, __int64 a4)
{
  __int64 v6; // rbx
  LONG HighPart; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+30h] [rbp-28h]

  v6 = (int)ADAPTER_RENDER::EndLiveMigration(a1[396], a2, a3, a4);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, v6, a1, L"DxgkDdiEndLiveMigration", (wchar_t *)L"LUID: %d %d", HighPart, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196620,
      -1,
      (__int64)L"EndLiveMigration called with status %1",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v6;
}
