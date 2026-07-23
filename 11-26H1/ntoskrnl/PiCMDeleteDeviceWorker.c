/*
 * XREFs of PiCMDeleteDeviceWorker @ 0x1407B38B4
 * Callers:
 *     PiCMDeleteDevice @ 0x140776A24 (PiCMDeleteDevice.c)
 *     PiSwIrpCleanup @ 0x140A8C048 (PiSwIrpCleanup.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1404BC6F8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     ZwPlugPlayControl @ 0x14072A780 (ZwPlugPlayControl.c)
 *     _CmDeleteDevice @ 0x14089CD0C (_CmDeleteDevice.c)
 *     _CmValidateDeviceName @ 0x14094D660 (_CmValidateDeviceName.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     _CmGetDeviceStatus @ 0x140955C8C (_CmGetDeviceStatus.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PpDeviceRegistration @ 0x1409B4D7C (PpDeviceRegistration.c)
 *     _CmIsRootEnumeratedDevice @ 0x140A19290 (_CmIsRootEnumeratedDevice.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     PiQueueDeviceRequest @ 0x140B63610 (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiCMDeleteDeviceWorker(PCWSTR SourceString)
{
  NTSTATUS inited; // ebx
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r9
  struct _KTHREAD *v6; // rax
  __int64 v7; // r9
  PVOID P; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  UNICODE_STRING v11; // [rsp+58h] [rbp+Fh] BYREF
  UNICODE_STRING PnPControlData; // [rsp+68h] [rbp+1Fh] BYREF
  __int128 v13; // [rsp+78h] [rbp+2Fh]
  __int64 v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+B8h] [rbp+6Fh] BYREF
  int v16; // [rsp+C0h] [rbp+77h] BYREF
  int v17; // [rsp+C8h] [rbp+7Fh] BYREF

  v15 = 0;
  v17 = 0;
  v14 = 0LL;
  DestinationString = 0LL;
  P = 0LL;
  PnPControlData = 0LL;
  v16 = 0;
  v13 = 0LL;
  v11 = 0LL;
  inited = CmValidateDeviceName(SourceString, SourceString);
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( (unsigned __int8)CmIsRootDevice(SourceString) )
    return (unsigned int)-1073741811;
  inited = PiPnpRtlBeginOperation(&P, v3);
  if ( inited >= 0 )
  {
    if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, (_DWORD)SourceString, 0, (unsigned int)&v15, (__int64)&v17, (__int64)&v16) >= 0
      && (v15 & 2) != 0 )
    {
      if ( (v15 & 0x2001) == 1 )
      {
        inited = -1073741808;
        goto LABEL_20;
      }
      inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
      if ( inited >= 0 )
      {
        PpDevNodeLockTree(3LL);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        LOBYTE(v5) = 1;
        PpDeviceRegistration(&DestinationString, 0LL, 0LL, v5);
        inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString, 0LL);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        PpDevNodeUnlockTree(3LL);
        if ( inited >= 0 )
        {
          if ( RtlInitUnicodeStringEx(&PnPControlData, SourceString) >= 0 )
          {
            *(_QWORD *)&v13 = 0x4000000000001LL;
            ZwPlugPlayControl(PlugPlayControlDeviceStatus, &PnPControlData, 0x28u);
          }
LABEL_18:
          if ( RtlInitUnicodeStringEx(&v11, SourceString) >= 0 )
            PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&v11.Length);
        }
      }
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
      if ( inited >= 0 )
      {
        PpDevNodeLockTree(3LL);
        v6 = KeGetCurrentThread();
        --v6->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        LOBYTE(v7) = 1;
        PpDeviceRegistration(&DestinationString, 0LL, 0LL, v7);
        inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString, 0LL);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        PpDevNodeUnlockTree(3LL);
        if ( inited >= 0 )
        {
          if ( (unsigned __int8)CmIsRootEnumeratedDevice(SourceString)
            && RtlInitUnicodeStringEx(&DestinationString, L"HTREE\\ROOT\\0") >= 0 )
          {
            PiQueueDeviceRequest(&DestinationString, 8LL, 1LL);
          }
          goto LABEL_18;
        }
      }
    }
  }
LABEL_20:
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)inited;
}
