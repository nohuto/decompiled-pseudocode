/*
 * XREFs of ?ReportingDevicePowerAvailable@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1400711D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevicePwrRequirementMachine::ReportingDevicePowerAvailable(FxDevicePwrRequirementMachine *This)
{
  PoFxReportDevicePoweredOn(This->m_PoxInterface->m_PoHandle);
  return 2LL;
}
