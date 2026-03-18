/*
 * XREFs of ACPICMButtonStartWorker @ 0x14005BE90
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPISetDeviceWorker @ 0x14002AAD4 (ACPISetDeviceWorker.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qss @ 0x14003C56C (WPP_RECORDER_SF_qss.c)
 *     ACPICMLidPowerStateCallBack @ 0x1400442D0 (ACPICMLidPowerStateCallBack.c)
 *     ACPIInternalSetDeviceInterface @ 0x14004E790 (ACPIInternalSetDeviceInterface.c)
 *     ACPIRegisterForDeviceNotifications @ 0x14004F080 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalWaitWakeLoop @ 0x140061C80 (ACPIInternalWaitWakeLoop.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1400623F4 (ACPIInternalRegisterPowerCallBack.c)
 */

void __fastcall ACPICMButtonStartWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // r15
  char v2; // si
  _DWORD *DeviceExtension; // rax
  IRP *v5; // r13
  const char *v6; // r14
  __int64 v7; // rdi
  int Status; // ebx
  unsigned int MinorFunction; // r12d
  KIRQL v10; // al
  POWER_STATE v11; // ebx
  GUID *v12; // rbx
  char *Pool2; // rax
  __int64 v14; // rcx
  const char *v15; // rdx
  const char *v16; // rax
  int v17; // eax
  char v18; // r8
  NTSTATUS v19; // eax
  char v20; // r8
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  const char *v23; // r8
  const char *v24; // rdx
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  const char *v27; // r8
  const char *v28; // rdx
  __int64 v29; // rax
  const char *v30; // rdx
  const char *v31; // rcx
  __int64 v32; // rax
  const char *v33; // rdx
  const char *v34; // rcx
  __int64 v35; // rax
  const char *v36; // rdx
  const char *v37; // rcx
  const char *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+70h] [rbp+7h] BYREF
  signed __int32 v43; // [rsp+D0h] [rbp+67h] BYREF
  ULONG DataSize; // [rsp+D8h] [rbp+6Fh] BYREF
  void *DeviceRegKey; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Data; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v2 = 0;
  DeviceRegKey = 0LL;
  HIDWORD(IoStatus.Pointer) = 0;
  Data = 0LL;
  DestinationString = 0LL;
  DataSize = 0;
  v43 = 0;
  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v5 = *(IRP **)(a1 + 40);
  v6 = byte_140075A82;
  v7 = (__int64)DeviceExtension;
  Status = v5->IoStatus.Status;
  MinorFunction = v5->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    if ( (DeviceExtension[50] & 4) != 0 )
    {
      ACPIInternalRegisterPowerCallBack(DeviceExtension, (PCALLBACK_FUNCTION)ACPICMLidPowerStateCallBack);
      ACPICMLidPowerStateCallBack((PVOID)v7, 0LL, 0LL);
      ACPISetDeviceWorker(v7, 1);
    }
    else
    {
      IoStatus.Status = 0;
      IoStatus.Information = 0LL;
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v11.SystemState = *(_SYSTEM_POWER_STATE *)(v7 + 536);
      KeReleaseSpinLock(&AcpiPowerLock, v10);
      ACPIInternalWaitWakeLoop(v1, 0, v11, 0LL, &IoStatus);
    }
    if ( (*(_DWORD *)(v7 + 8) & 0x2000LL) != 0 )
    {
      v12 = &GUID_DEVICE_APPLICATIONLAUNCH_BUTTON;
      if ( !*(_QWORD *)(v7 + 616) )
      {
        v43 = _InterlockedExchangeAdd(&AcpipExperienceButtonInstanceID, 1u);
        Pool2 = (char *)ExAllocatePool2(64LL, 9LL, 1399874369LL);
        *(_QWORD *)(v7 + 616) = Pool2;
        if ( Pool2 )
        {
          RtlStringCchPrintfA(Pool2, 9uLL, "%d", v43);
        }
        else
        {
          v14 = *(_QWORD *)(v7 + 8);
          v15 = byte_140075A82;
          v16 = byte_140075A82;
          if ( (v14 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v7 + 608);
            if ( (v14 & 0x400000000000LL) != 0 )
              v16 = 0LL;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0xEu,
              (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
              v7,
              v15,
              v16);
        }
      }
      v17 = ACPIGet(v7, 1145653319, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&Data, (__int64)&DataSize);
      v18 = v17;
      if ( v17 < 0 )
      {
        v32 = *(_QWORD *)(v7 + 8);
        v33 = byte_140075A82;
        v34 = byte_140075A82;
        if ( (v32 & 0x200000000000LL) != 0 )
        {
          v33 = *(const char **)(v7 + 608);
          if ( (v32 & 0x400000000000LL) != 0 )
            v34 = *(const char **)(v7 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            5u,
            0x12u,
            (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
            v18,
            v7,
            v33,
            v34);
      }
      else
      {
        v19 = IoOpenDeviceRegistryKey(v1, 1u, 0x20000u, &DeviceRegKey);
        v20 = v19;
        if ( v19 < 0 )
        {
          v29 = *(_QWORD *)(v7 + 8);
          v30 = byte_140075A82;
          v31 = byte_140075A82;
          if ( (v29 & 0x200000000000LL) != 0 )
          {
            v30 = *(const char **)(v7 + 608);
            if ( (v29 & 0x400000000000LL) != 0 )
              v31 = *(const char **)(v7 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0x11u,
              (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
              v20,
              v7,
              v30,
              v31);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"UserHIDBlock");
          v21 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 3u, Data, DataSize);
          if ( v21 < 0 )
          {
            v22 = *(_QWORD *)(v7 + 8);
            v23 = byte_140075A82;
            v24 = byte_140075A82;
            if ( (v22 & 0x200000000000LL) != 0 )
            {
              v23 = *(const char **)(v7 + 608);
              if ( (v22 & 0x400000000000LL) != 0 )
                v24 = *(const char **)(v7 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Lqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                5u,
                0xFu,
                (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
                v21,
                v7,
                v23,
                v24);
          }
          RtlInitUnicodeString(&DestinationString, L"ButtonInstanceID");
          v43 = _strtoui64(*(const char **)(v7 + 616), 0LL, 10);
          v25 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &v43, 4u);
          if ( v25 < 0 )
          {
            v26 = *(_QWORD *)(v7 + 8);
            v27 = byte_140075A82;
            v28 = byte_140075A82;
            if ( (v26 & 0x200000000000LL) != 0 )
            {
              v27 = *(const char **)(v7 + 608);
              if ( (v26 & 0x400000000000LL) != 0 )
                v28 = *(const char **)(v7 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Lqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                5u,
                0x10u,
                (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
                v25,
                v7,
                v27,
                v28);
          }
          ZwClose(DeviceRegKey);
        }
      }
    }
    else
    {
      v12 = &GUID_DEVICE_SYS_BUTTON;
      ACPIRegisterForDeviceNotifications((ULONG_PTR)v1, (__int64)ACPICMButtonNotifyByDeviceObject, (__int64)v1);
    }
    Status = ACPIInternalSetDeviceInterface(v1, v12);
    if ( Status < 0 )
    {
      v35 = *(_QWORD *)(v7 + 8);
      v36 = byte_140075A82;
      v37 = byte_140075A82;
      if ( (v35 & 0x200000000000LL) != 0 )
      {
        v36 = *(const char **)(v7 + 608);
        if ( (v35 & 0x400000000000LL) != 0 )
          v37 = *(const char **)(v7 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x13u,
          (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
          Status,
          v7,
          v36,
          v37);
    }
  }
  v5->IoStatus.Status = Status;
  v5->IoStatus.Information = 0LL;
  IofCompleteRequest(v5, 0);
  v38 = byte_140075A82;
  if ( v7 )
  {
    v39 = *(_QWORD *)(v7 + 8);
    v2 = v7;
    if ( (v39 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(v7 + 608);
      if ( (v39 & 0x400000000000LL) != 0 )
        v38 = *(const char **)(v7 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v40 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v40 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
      (char)v5,
      ACPIDispatchPnpTableNames[v40],
      Status,
      v2,
      v6,
      v38);
  }
}
