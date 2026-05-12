/*
 * XREFs of RaidSyncAcpiEvalMethod @ 0x140047160
 * Callers:
 *     StorPortpInvokeAcpiMethod @ 0x14005B718 (StorPortpInvokeAcpiMethod.c)
 *     RaidEvaluateDsmLedState @ 0x140093F20 (RaidEvaluateDsmLedState.c)
 *     RaidQueryDlrmSupportStatus @ 0x1400956AC (RaidQueryDlrmSupportStatus.c)
 * Callees:
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidSyncAcpiEvalMethod(
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        _DWORD *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v11; // rax
  NTSTATUS Status; // ebx
  _DWORD *v13; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  AttachedDeviceReference = 0LL;
  IoStatusBlock = 0LL;
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741496;
    goto LABEL_22;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v11 = IoBuildDeviceIoControlRequest(
          0x32C000u,
          AttachedDeviceReference,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v11 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        17LL,
        &WPP_fc235f9cd02a3c4256abef97e62f1829_Traceguids,
        DeviceObject,
        AttachedDeviceReference);
    }
    Status = -1073741670;
LABEL_22:
    v13 = a6;
    if ( !a6 )
      goto LABEL_7;
    goto LABEL_23;
  }
  v11->IoStatus.Status = -1073741637;
  Status = IofCallDriver(AttachedDeviceReference, v11);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 && !IoStatusBlock.Information && OutputBufferLength )
    Status = -1073741823;
  v13 = a6;
  if ( a6 )
  {
    if ( Status >= 0 )
    {
      *a6 = IoStatusBlock.Information;
      goto LABEL_7;
    }
LABEL_23:
    *v13 = 0;
  }
LABEL_7:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
