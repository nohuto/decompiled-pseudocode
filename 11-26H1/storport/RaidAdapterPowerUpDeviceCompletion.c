/*
 * XREFs of RaidAdapterPowerUpDeviceCompletion @ 0x14000FDD0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidAdapterSendPowerToMiniport @ 0x14000FFA4 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x140010118 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidPowerPassToMiniPort @ 0x140011518 (RaidPowerPassToMiniPort.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     McTemplateK0zqjdz_EtwWriteTransfer @ 0x14007EC1C (McTemplateK0zqjdz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterPowerUpDeviceCompletion(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  char *DeviceExtension; // rsi
  int Status; // ebx
  char v6; // al
  int v7; // eax
  __int64 v9; // rcx
  _DWORD *v10; // r9
  __int64 v11; // rcx
  _DWORD *v12; // r9
  __int64 v13; // rcx
  _DWORD *v14; // r9
  __int64 v15; // rcx
  _DWORD *v16; // r9
  __int64 v17; // rcx
  _DWORD *v18; // r9
  __int64 v19; // rcx
  _DWORD *v20; // r9
  __int64 v21; // rcx
  _DWORD *v22; // r9
  __int64 v23; // rcx
  _DWORD *v24; // r9
  __int64 v25; // rcx
  _DWORD *v26; // r9
  struct _IO_WORKITEM *WorkItem; // rbp
  _QWORD *Pool; // rax
  void *v29; // r14
  int v30; // edx
  int v31; // ecx
  __int128 v32; // [rsp+40h] [rbp-38h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      30LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      DeviceExtension,
      a2);
  }
  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Status = a2->IoStatus.Status;
  if ( Status < 0 )
    goto LABEL_20;
  if ( (*((_DWORD *)DeviceExtension + 156) & 0x20) != 0 )
    goto LABEL_6;
  *(_QWORD *)(DeviceExtension + 668) = 0LL;
  *(_QWORD *)(DeviceExtension + 676) = 0LL;
  *(_QWORD *)(DeviceExtension + 684) = 0LL;
  *(_QWORD *)(DeviceExtension + 692) = 0LL;
  *((_DWORD *)DeviceExtension + 166) = 19;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(DeviceExtension + 376, 2LL) )
    *v10 = 20;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v9, 3LL) )
    *v12 = 21;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v11, 5LL) )
    *v14 = 22;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v13, 6LL) )
    *v16 = 23;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v15, 7LL) )
    *v18 = 24;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v17, 8LL) )
    *v20 = 25;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v19, 9LL) )
    *v22 = 26;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v21, 10LL) )
    *v24 = 27;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v23, 12LL) )
    *v26 = 28;
  if ( (int)RaCallMiniportAdapterControl(v25) >= 0 )
  {
    *((_DWORD *)DeviceExtension + 156) |= 0x20u;
LABEL_6:
    v6 = DeviceExtension[674];
    goto LABEL_7;
  }
  v6 = 0;
LABEL_7:
  if ( v6 )
  {
    v7 = RaidAdapterSendPowerToMiniport(DeviceExtension, a2);
    Status = v7;
    if ( v7 != -2147483631 )
    {
      if ( v7 >= 0 )
      {
LABEL_10:
        RaidAdapterPowerUpDeviceCompletionLastStep(a2);
        return 3221225494LL;
      }
LABEL_20:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqD(
          WPP_GLOBAL_Control->AttachedDevice,
          31LL,
          &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
          DeviceExtension,
          a2,
          Status);
      }
      goto LABEL_10;
    }
    WorkItem = IoAllocateWorkItem(DeviceObject);
    Pool = (_QWORD *)RaidAllocatePool(64LL, 16LL, 1230463314LL, (__int64)DeviceObject);
    v29 = Pool;
    if ( !WorkItem || !Pool )
    {
      Status = -1073741670;
      if ( WorkItem )
        IoFreeWorkItem(WorkItem);
      if ( v29 )
        ExFreePoolWithTag(v29, 0x49576152u);
      goto LABEL_20;
    }
    *Pool = WorkItem;
    Pool[1] = a2;
    IoQueueWorkItem(WorkItem, RaidAdapterSendPowerToMiniportWorkItemRoutine, NormalWorkQueue, Pool);
    if ( StorEtwLoggingEnabled )
    {
      v32 = 0LL;
      IoGetActivityIdIrp(a2, &v32);
      if ( (byte_140173446 & 0x40) != 0 )
        McTemplateK0zqjdz_EtwWriteTransfer(
          v31,
          v30,
          (unsigned int)&v32,
          *((_QWORD *)DeviceExtension + 598),
          *((_DWORD *)DeviceExtension + 14),
          (__int64)(DeviceExtension + 5128),
          17);
    }
  }
  else
  {
    Status = RaidPowerPassToMiniPort(DeviceObject, a2, RaidAdapterDevicePowerUpSrbComplete);
    if ( Status < 0 )
      goto LABEL_20;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      32LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      DeviceExtension,
      a2,
      Status);
  }
  return 3221225494LL;
}
