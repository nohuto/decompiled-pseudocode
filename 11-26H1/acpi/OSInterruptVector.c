/*
 * XREFs of OSInterruptVector @ 0x1400D959C
 * Callers:
 *     ACPIInterruptInitialize @ 0x1400A94DC (ACPIInterruptInitialize.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     memset @ 0x140072740 (memset.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400BBB64 (AcpiIrqLibSetupSciInterrupt.c)
 */

__int64 __fastcall OSInterruptVector(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rbx
  int v3; // eax
  int v4; // edx
  unsigned int v5; // edi
  NTSTATUS v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+30h] [rbp-58h] BYREF

  memset(&Parameters, 0, 0x4CuLL);
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  KeInitializeDpc(
    (PRKDPC)(DeviceExtension + 96),
    (PKDEFERRED_ROUTINE)ACPIInterruptServiceRoutineDPC,
    (PVOID)DeviceExtension);
  v3 = AcpiIrqLibSetupSciInterrupt(
         *(_WORD *)(*((_QWORD *)AcpiInformation + 1) + 46LL),
         *(void **)(DeviceExtension + 784));
  v5 = v3;
  if ( v3 >= 0 )
  {
    Parameters.Version = 2;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeviceExtension + 80);
    Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(DeviceExtension + 784);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ACPIInterruptServiceRoutine;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)DeviceExtension;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    v7 = IoConnectInterruptEx(&Parameters);
    v9 = v7;
    if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        22,
        11,
        (__int64)&WPP_4c655a2938a836836194307c42e4bf2d_Traceguids,
        v7);
    }
    return v9;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        22,
        10,
        (__int64)&WPP_4c655a2938a836836194307c42e4bf2d_Traceguids,
        v3);
    }
    return v5;
  }
}
