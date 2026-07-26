/*
 * XREFs of wcscmp_0 @ 0x1400EA036
 * Callers:
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14009F1AC (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     ndisDmaTelemetryKnobsUpdateRoutine @ 0x1400CC080 (ndisDmaTelemetryKnobsUpdateRoutine.c)
 *     NdisQueryDiagnosticSetting @ 0x14013B420 (NdisQueryDiagnosticSetting.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
