/*
 * XREFs of ?QueryDriverRecommendedMonitorModes@KernelDriver@@UEBAJXZ @ 0x14027EA40
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1401B0AC4 (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall KernelDriver::QueryDriverRecommendedMonitorModes(KernelDriver *this)
{
  ADAPTER_DISPLAY *v2; // rcx
  __int64 result; // rax
  int v4; // eax
  unsigned int v5; // edi
  _DXGKARG_RECOMMENDMONITORMODES v6; // [rsp+30h] [rbp-28h] BYREF

  v2 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    v6.VideoPresentTargetId = *((_DWORD *)this + 8);
    v6.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)*((_QWORD *)this + 1);
    v6.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
    *(&v6.VideoPresentTargetId + 1) = 0;
    v4 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(v2, &v6);
    v5 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry4(2LL, this, *((unsigned int *)this + 8), *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v4);
      WdLogGlobalForLineNumber = 104;
    }
    return v5;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225664LL;
    WdLogGlobalForLineNumber = 69;
  }
  return result;
}
