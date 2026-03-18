/*
 * XREFs of ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1400981B0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x14004EF98 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(ADAPTER_DISPLAY *this)
{
  unsigned int v1; // ebx
  DXGADAPTER *v3; // rcx

  v1 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 3168LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7086;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsDisplayOnlyAdapter()",
      7086LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 113) )
    return 1LL;
  v3 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( (*((_DWORD *)v3 + 111) & 0x100) != 0 )
    return 0LL;
  LOBYTE(v1) = !DXGADAPTER::SupportHWVSync(v3);
  return v1;
}
