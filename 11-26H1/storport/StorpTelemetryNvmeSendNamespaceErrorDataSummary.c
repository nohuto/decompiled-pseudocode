/*
 * XREFs of StorpTelemetryNvmeSendNamespaceErrorDataSummary @ 0x1400BE9FC
 * Callers:
 *     StorpIterateAndLogNvmeNamespaceStatistics @ 0x1400B8378 (StorpIterateAndLogNvmeNamespaceStatistics.c)
 * Callees:
 *     McTemplateK0qjzshqusssjqqqqqhuhuuqqqqqiqbr27qbr29_EtwWriteTransfer @ 0x1400B2EE4 (McTemplateK0qjzshqusssjqqqqqhuhuuqqqqqiqbr27qbr29_EtwWriteTransfer.c)
 *     StorpNvmeAreTelemetryErrorsEqual @ 0x1400B98FC (StorpNvmeAreTelemetryErrorsEqual.c)
 *     StorpTelemetryLogNvmeNamespaceErrorDataCriticalData @ 0x1400BAC78 (StorpTelemetryLogNvmeNamespaceErrorDataCriticalData.c)
 *     StorpTelemetryLogNvmeNamespaceErrorDataMeasures @ 0x1400BAEFC (StorpTelemetryLogNvmeNamespaceErrorDataMeasures.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorpTelemetryNvmeSendNamespaceErrorDataSummary(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned __int16 v5; // si
  unsigned __int8 i; // di
  __int64 v7; // r15
  const char *v8; // r12
  __int64 v9; // rsi
  unsigned __int16 v10; // r11
  __int64 v11; // r9
  __int64 v12; // [rsp+68h] [rbp-128h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+110h] [rbp-80h] BYREF
  _BYTE v14[176]; // [rsp+130h] [rbp-60h] BYREF
  unsigned __int16 v16; // [rsp+1F8h] [rbp+68h]
  unsigned __int16 v17; // [rsp+1FAh] [rbp+6Ah]

  result = 0LL;
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 608);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(v3 + 112) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 104), &LockHandle);
    v4 = *(_QWORD *)(v2 + 608);
    v16 = *(_WORD *)(v4 + 112) - 1;
    if ( v16 >= 0xAu )
      v16 = 10;
    v5 = 0;
    for ( i = 0; i < 0xAu; ++i )
    {
      memset_0(v14, 0, 0x68uLL);
      if ( StorpNvmeAreTelemetryErrorsEqual(v4 + 104LL * i + 1264, (__int64)v14) )
        break;
      ++v5;
    }
    v17 = v5;
    if ( (g_StorpTraceLoggingCriticalEventEnabledSetByRegistry != 1 || g_StorpTraceLoggingCriticalEventEnabled)
      && g_StorpTraceLoggingCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum
      && g_StorpTraceLoggingCriticalEventEnabled )
    {
      StorpTelemetryLogNvmeNamespaceErrorDataCriticalData(v2);
    }
    else
    {
      StorpTelemetryLogNvmeNamespaceErrorDataMeasures(v2);
    }
    if ( (byte_14017344A & 0x20) != 0 )
    {
      v7 = *(_QWORD *)(v2 + 608);
      v8 = (const char *)&dword_140154ADC;
      v9 = *(_QWORD *)(v2 + 16);
      if ( *(_QWORD *)(v9 + 752) )
        v8 = *(const char **)(v9 + 752);
      v12 = v2 + 160;
      v2 = a1;
      v11 = *(_QWORD *)(v9 + 128);
      v10 = *(_WORD *)(v7 + 198);
      McTemplateK0qjzshqusssjqqqqqhuhuuqqqqqiqbr27qbr29_EtwWriteTransfer(
        v9,
        104 * (unsigned int)v17,
        v7 + 224,
        *(_DWORD *)(v11 + 56),
        v11 + 1048,
        *(const wchar_t **)(v11 + 1032),
        *(const char **)(v9 + 792),
        *(_WORD *)(v9 + 4),
        *(_DWORD *)(a1 + 56),
        *(_BYTE *)(v9 + 744),
        v8,
        (const char *)(v9 + 800),
        (const char *)(v9 + 841),
        v12,
        (*(_BYTE *)(v9 + 136) & 2) != 0 ? 20 : 17,
        *(_DWORD *)(v7 + 112),
        *(_DWORD *)(v7 + 116),
        *(_DWORD *)(v7 + 204),
        *(_DWORD *)(v7 + 208),
        *(_WORD *)(v7 + 194),
        *(_BYTE *)(v7 + 120),
        *(_WORD *)(v7 + 122),
        v10 >> 1,
        (v10 >> 9) & 7,
        *(_DWORD *)(v7 + 184),
        *(_DWORD *)(v7 + 188),
        *(_DWORD *)(v7 + 192),
        *(_DWORD *)(v7 + 196),
        *(_DWORD *)(v7 + 200),
        *(_QWORD *)(v7 + 216),
        104 * v16,
        v7 + 224,
        104 * v17,
        v7 + 1264);
    }
    memset_0((void *)(*(_QWORD *)(v2 + 608) + 112LL), 0, 0x480uLL);
    memset_0((void *)(*(_QWORD *)(v2 + 608) + 1264LL), 0, 0x410uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
