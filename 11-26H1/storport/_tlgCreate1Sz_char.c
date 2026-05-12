/*
 * XREFs of _tlgCreate1Sz_char @ 0x14003F184
 * Callers:
 *     StorpTelemetryMiniportEventAdapter @ 0x140029AA8 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x140029DB8 (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x14003E550 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetryMiniportEventWStr @ 0x14003E924 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportLogError @ 0x14004DE50 (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x14005ABAC (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x14005B190 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1400B9078 (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1400B938C (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogNvmeNamespaceErrorDataCriticalData @ 0x1400BAC78 (StorpTelemetryLogNvmeNamespaceErrorDataCriticalData.c)
 *     StorpTelemetryLogNvmeNamespaceErrorDataMeasures @ 0x1400BAEFC (StorpTelemetryLogNvmeNamespaceErrorDataMeasures.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1400BB180 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1400BB660 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1400BBB48 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1400BBE58 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1400BC1B4 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1400BC6CC (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1400BCB0C (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryNvmeControllerHealthCriticalInfo @ 0x1400BD7B0 (StorpTelemetryNvmeControllerHealthCriticalInfo.c)
 *     StorpTelemetryNvmeControllerHealthInfo @ 0x1400BDA60 (StorpTelemetryNvmeControllerHealthInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1400BDE84 (StorpTelemetryNvmeHealthInfo.c)
 *     StorpTelemetryNvmeLogNamespacePerfDataCriticalData @ 0x1400BE338 (StorpTelemetryNvmeLogNamespacePerfDataCriticalData.c)
 *     StorpTelemetryNvmeLogNamespacePerfDataMeasures @ 0x1400BE67C (StorpTelemetryNvmeLogNamespacePerfDataMeasures.c)
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_char(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &unk_14015304C;
    result = 1LL;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
