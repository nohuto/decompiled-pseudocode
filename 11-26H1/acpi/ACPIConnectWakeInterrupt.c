/*
 * XREFs of ACPIConnectWakeInterrupt @ 0x1400A924C
 * Callers:
 *     ACPIAssociateWakeInterrupt @ 0x1400401CC (ACPIAssociateWakeInterrupt.c)
 * Callees:
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     memset @ 0x140072740 (memset.c)
 */

NTSTATUS __fastcall ACPIConnectWakeInterrupt(__int64 a1, __int64 a2)
{
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF

  memset(&Parameters, 0, sizeof(Parameters));
  Parameters.FullySpecified.Vector = *(_DWORD *)(a2 + 32);
  Parameters.Version = 1;
  Parameters.FullySpecified.Irql = 0;
  Parameters.FullySpecified.SynchronizeIrql = 0;
  Parameters.FullySpecified.ShareVector = 1;
  Parameters.FullySpecified.ServiceContext = (PVOID)a2;
  AcpiGetDriverProxyWrappedEndpoint(
    &Parameters.FullySpecified.ServiceRoutine,
    (__int64)ACPIWakeEmulationInterruptServiceRoutine);
  Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(a1 + 784);
  Parameters.FullySpecified.InterruptMode = *(_DWORD *)(a2 + 36);
  Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)(a2 + 40);
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(a2 + 48);
  return IoConnectInterruptEx(&Parameters);
}
