/*
 * XREFs of ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1400559D4
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140366154 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayId(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6222;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6222LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(unsigned int *)(4024 * v3 + *((_QWORD *)this + 16) + 624);
}
