/*
 * XREFs of DxgkUpdateInterruptMappings @ 0x1402189F8
 * Callers:
 *     ?DpiIovUpdateInterruptMapping@@YAJPEAXU_LUID@@KPEAU_FIOV_MSI@@2@Z @ 0x140092FE0 (-DpiIovUpdateInterruptMapping@@YAJPEAXU_LUID@@KPEAU_FIOV_MSI@@2@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?UpdateInterruptMappings@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@KPEAU_FIOV_MSI@@2@Z @ 0x14021669C (-UpdateInterruptMappings@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@KPEAU_FIOV_MSI@.c)
 */

__int64 __fastcall DxgkUpdateInterruptMappings(
        _QWORD *a1,
        int a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 updated; // rbx
  __int64 v10; // [rsp+28h] [rbp-30h]
  DWORD LowPart; // [rsp+30h] [rbp-28h]

  updated = (int)ADAPTER_RENDER::UpdateInterruptMappings(a1[396], a2, a3, a4, a5, a6);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    LODWORD(v10) = a3->HighPart;
    VgpuTrace(1, updated, a1, L"DxgkUpdateInterruptMappings", (wchar_t *)L"LUID: %d %d", v10, LowPart);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196630,
      -1,
      (__int64)L"UpdateInterruptMappings called with status %1",
      updated,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)updated;
}
