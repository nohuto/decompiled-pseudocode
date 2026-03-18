/*
 * XREFs of ?GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY@@QEBAHXZ @ 0x140073D58
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverPreferPhysicallyContiguous(ADAPTER_DISPLAY *this)
{
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 3168LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7074;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsDisplayOnlyAdapter()",
      7074LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *((unsigned int *)this + 114);
}
