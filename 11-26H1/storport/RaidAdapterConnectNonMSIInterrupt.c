/*
 * XREFs of RaidAdapterConnectNonMSIInterrupt @ 0x14018420C
 * Callers:
 *     RaidAdapterConnectInterrupt @ 0x1400606E4 (RaidAdapterConnectInterrupt.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidAdapterConnectNonMSIInterrupt(
        unsigned __int64 a1,
        ULONG a2,
        KIRQL a3,
        unsigned __int8 a4,
        int a5,
        BOOLEAN a6,
        __int64 a7)
{
  NTSTATUS v11; // ecx
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF

  memset_0(&Parameters, 0, sizeof(Parameters));
  Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(a1 + 32);
  Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)RaidpAdapterInterruptRoutine;
  Parameters.Version = 4;
  Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)a7;
  Parameters.FullySpecified.Group = *(_WORD *)(a7 + 8);
  Parameters.FullySpecified.ShareVector = a6;
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(a1 + 864);
  *(_OWORD *)&Parameters.MessageBased.ServiceContext = a1;
  Parameters.FullySpecified.Vector = a2;
  Parameters.FullySpecified.Irql = a3;
  *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = a4;
  Parameters.FullySpecified.InterruptMode = LevelSensitive;
  v11 = IoConnectInterruptEx(&Parameters);
  if ( v11 >= 0 )
    *(_DWORD *)(a1 + 876) = Parameters.Version;
  else
    *(_QWORD *)(a1 + 864) = 0LL;
  return (unsigned int)v11;
}
