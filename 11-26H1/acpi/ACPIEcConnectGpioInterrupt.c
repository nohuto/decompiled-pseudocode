/*
 * XREFs of ACPIEcConnectGpioInterrupt @ 0x1400AEDF0
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x14005FC00 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcConnectInterrupt @ 0x1400AEED8 (ACPIEcConnectInterrupt.c)
 * Callees:
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     memset @ 0x140072740 (memset.c)
 */

NTSTATUS __fastcall ACPIEcConnectGpioInterrupt(char *DeferredContext)
{
  KINTERRUPT_MODE v2; // eax
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  PKDEFERRED_ROUTINE DeferredRoutine; // [rsp+80h] [rbp+10h] BYREF

  DeferredRoutine = 0LL;
  AcpiGetDriverProxyWrappedEndpoint(&DeferredRoutine, (__int64)ACPIEcGpioDpcRoutine);
  KeInitializeDpc((PRKDPC)(DeferredContext + 2232), DeferredRoutine, DeferredContext);
  memset(&Parameters, 0, sizeof(Parameters));
  Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)DeferredContext;
  Parameters.Version = 1;
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeferredContext + 2224);
  AcpiGetDriverProxyWrappedEndpoint(&Parameters.FullySpecified.ServiceRoutine, (__int64)ACPIEcGpioServiceRoutine);
  Parameters.FullySpecified.Vector = *((_DWORD *)DeferredContext + 576);
  Parameters.FullySpecified.Irql = DeferredContext[2300];
  Parameters.FullySpecified.SynchronizeIrql = Parameters.FullySpecified.Irql;
  v2 = DeferredContext[2298] & 1;
  *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)DeferredContext;
  Parameters.FullySpecified.InterruptMode = v2;
  Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)(DeferredContext + 2308);
  Parameters.FullySpecified.ShareVector = DeferredContext[2297];
  return IoConnectInterruptEx(&Parameters);
}
