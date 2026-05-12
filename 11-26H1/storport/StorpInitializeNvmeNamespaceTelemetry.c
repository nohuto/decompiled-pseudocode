/*
 * XREFs of StorpInitializeNvmeNamespaceTelemetry @ 0x1400B7678
 * Callers:
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A9E6C (NvmeNamespaceStartDeviceIrp.c)
 * Callees:
 *     StorEtwNvmeNamespaceEvent @ 0x1400B2058 (StorEtwNvmeNamespaceEvent.c)
 *     Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline @ 0x1400B2790 (Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline.c)
 *     StorpUninitializeNvmePerNamespacePerfTelemetry @ 0x1400C4328 (StorpUninitializeNvmePerNamespacePerfTelemetry.c)
 *     StorpInitializeNvmePerNamespacePerfTelemetry @ 0x14018FD08 (StorpInitializeNvmePerNamespacePerfTelemetry.c)
 */

__int64 __fastcall StorpInitializeNvmeNamespaceTelemetry(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // eax

  v2 = a1 + 608;
  if ( !(unsigned int)Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline()
    || !*(_QWORD *)v2
    || (result = *(unsigned int *)(*(_QWORD *)v2 + 4LL), (result & 1) == 0) )
  {
    if ( g_StorpTraceLoggingPerformanceEnabled )
    {
      v4 = StorpInitializeNvmePerNamespacePerfTelemetry(a1);
      if ( !v4 )
      {
        *(_DWORD *)(*(_QWORD *)v2 + 4LL) |= 1u;
        goto LABEL_8;
      }
      StorEtwNvmeNamespaceEvent(
        a1,
        1,
        3,
        (__int64)L"Initializing performance telemetry failed.",
        L"NtStatus",
        v4,
        0LL,
        0);
      StorpUninitializeNvmePerNamespacePerfTelemetry(a1);
    }
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~1u;
LABEL_8:
    result = (g_StorpTraceLoggingErrorDataEnabled != 0 ? 2 : 0) | *(_DWORD *)(*(_QWORD *)v2 + 4LL) & 0xFFFFFFFD;
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) = result;
  }
  return result;
}
