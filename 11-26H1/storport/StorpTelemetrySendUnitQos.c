/*
 * XREFs of StorpTelemetrySendUnitQos @ 0x1400C308C
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x140046F34 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer @ 0x1400B6CD4 (McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1400BC1B4 (StorpTelemetryLogUnitQosDataMeasures.c)
 */

__int64 __fastcall StorpTelemetrySendUnitQos(__int64 a1)
{
  __int64 v1; // rax
  int v3; // edi
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax
  char v7; // [rsp+B8h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
    v3 = *(_DWORD *)(v1 + 5412);
  else
    LOBYTE(v3) = 0;
  v4 = *(_QWORD *)(a1 + 3408) / 0x989680uLL;
  if ( v4 > 0xFF )
    LOBYTE(v4) = -1;
  v7 = v4;
  if ( *(_QWORD *)(a1 + 2248) || *(_QWORD *)(a1 + 2256) || *(_DWORD *)(a1 + 2264) || (*(_BYTE *)(a1 + 506) & 2) != 0 )
  {
    if ( (g_StorpTraceLoggingCriticalEventEnabledSetByRegistry != 1 || g_StorpTraceLoggingCriticalEventEnabled)
      && g_StorpTraceLoggingCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( *(_BYTE *)(a1 + 2124) )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
    }
    StorpTelemetryLogUnitQosDataMeasures(a1);
    if ( (byte_140173444 & 4) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 24);
      McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer(
        a1 + 242,
        a1 + 177,
        a1 + 168,
        *(const wchar_t **)(v5 + 4784),
        *(_DWORD *)(v5 + 56),
        v5 + 5128,
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        a1 + 2104,
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        *(_QWORD *)(a1 + 2232),
        *(_QWORD *)(a1 + 2240),
        v7,
        *(_QWORD *)(a1 + 2256),
        *(_QWORD *)(a1 + 2248),
        *(_DWORD *)(a1 + 2264),
        *(_DWORD *)(a1 + 2268),
        v3);
    }
  }
  *(_QWORD *)(a1 + 2232) = 0LL;
  result = 0LL;
  *(_QWORD *)(a1 + 2240) = 0LL;
  *(_QWORD *)(a1 + 2248) = 0LL;
  *(_QWORD *)(a1 + 2256) = 0LL;
  *(_DWORD *)(a1 + 2268) = 0;
  return result;
}
