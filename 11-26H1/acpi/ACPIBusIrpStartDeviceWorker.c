/*
 * XREFs of ACPIBusIrpStartDeviceWorker @ 0x1400AE0C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     ACPIInternalEvaluateOST @ 0x1400621FC (ACPIInternalEvaluateOST.c)
 *     EnableDisableIPMIRegions @ 0x1400B18A0 (EnableDisableIPMIRegions.c)
 *     ACPIPepInitializeEpmNotificationSupport @ 0x1400B434C (ACPIPepInitializeEpmNotificationSupport.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1400B4674 (ACPIPepInitializePlatformNotificationSupport.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1400C83A4 (IsNsobjPciBus.c)
 */

_UNKNOWN **__fastcall ACPIBusIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  IRP *v3; // rsi
  __int64 v4; // rdi
  char v5; // bl
  int Status; // ebp
  unsigned __int8 MinorFunction; // r12
  __int64 v8; // r14
  bool v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _UNKNOWN **result; // rax
  char *IrpText; // rax
  const char *v15; // r8
  const char *v16; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(IRP **)(a1 + 40);
  v4 = DeviceExtension;
  v5 = 0;
  Status = v3->IoStatus.Status;
  MinorFunction = v3->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    v8 = *(_QWORD *)(DeviceExtension + 1008) & 0x8000LL;
    v9 = (*(_QWORD *)(DeviceExtension + 1008) & 0x8000) != 0;
    if ( (unsigned __int8)IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 760)) || v8 )
    {
      LOBYTE(v11) = v9;
      LOBYTE(v10) = 1;
      EnableDisableRegions(*(_QWORD *)(v4 + 760), v10, v11);
    }
    if ( (*(_DWORD *)(v4 + 8) & 0x1000LL) != 0 )
    {
      LOBYTE(v10) = 1;
      EnableDisableIPMIRegions(*(_QWORD *)(v4 + 760), v10);
    }
    if ( _bittest64((const signed __int64 *)(v4 + 1008), 0x28u) )
    {
      ACPIPepInitializePlatformNotificationSupport((PVOID)v4);
      ACPIPepInitializeEpmNotificationSupport(v4);
    }
  }
  if ( _bittest64((const signed __int64 *)(v4 + 8), 0x25u) && Status < 0 )
    ACPIInternalEvaluateOST(v4, 0, 163);
  *(_QWORD *)(v4 + 1008) &= ~0x10000000000000uLL;
  v3->IoStatus.Status = Status;
  v3->IoStatus.Information = 0LL;
  IofCompleteRequest(v3, 0);
  if ( v4 )
    v5 = v4;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v12, MinorFunction);
    return (_UNKNOWN **)WPP_RECORDER_SF_qsLqss(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          5u,
                          0x3Eu,
                          (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
                          (char)v3,
                          IrpText,
                          Status,
                          v5,
                          v15,
                          v16);
  }
  return result;
}
