/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x14007A494
 * Callers:
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14028A618 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140427548 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_140166660);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140166628);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1401665F0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140166580);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140166548);
  TlgRegisterAggregateProviderEx(&dword_1401665B8);
}
