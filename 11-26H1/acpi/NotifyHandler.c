/*
 * XREFs of NotifyHandler @ 0x14001E9B0
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1400530A0 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     OSNotifyDeviceWake @ 0x14001EBC8 (OSNotifyDeviceWake.c)
 *     WPP_RECORDER_SF_iDD @ 0x1400391F8 (WPP_RECORDER_SF_iDD.c)
 *     OSNotifyDeviceCheck @ 0x140041ADC (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x140041DFC (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceEject @ 0x140063D74 (OSNotifyDeviceEject.c)
 */

__int64 __fastcall NotifyHandler(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v6; // rsi
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // rdi
  KIRQL v10; // al
  __int64 v11; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  char v16; // bl

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_iDD(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        OSNotifyDeviceCheck(a3);
        break;
      case 2:
        OSNotifyDeviceWake(a3);
        break;
      case 3:
        OSNotifyDeviceEject(a3);
        break;
    }
  }
  else
  {
    OSNotifyDeviceEnum(a3);
  }
  v6 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v8 = *(_QWORD *)(*(_QWORD *)a3 + 104LL);
  if ( v8 && *(_DWORD *)(v8 + 16) == 1599293264 )
    v6 = v8 + 376;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  if ( v6 )
  {
    v9 = v6 - 376;
    v10 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
    v11 = *(_QWORD *)(v6 + 16);
    KeReleaseSpinLock(&NotifyHandlerLock, v10);
    if ( v11 )
    {
      v13 = ExAllocateFromNPagedLookasideList(&NotificationContextLookAsideList);
      v14 = v13;
      if ( v13 )
      {
        v13[1] = v13;
        *v13 = v13;
        *((_DWORD *)v13 + 4) = a2;
        KeWaitForSingleObject((PVOID)(v9 + 904), Executive, 0, 0, 0LL);
        v15 = *(_QWORD **)(v9 + 872);
        if ( *v15 != v9 + 864 )
          __fastfail(3u);
        *v14 = v9 + 864;
        v14[1] = v15;
        *v15 = v14;
        *(_QWORD *)(v9 + 872) = v14;
        v16 = *(_BYTE *)(v9 + 936);
        if ( !v16 )
          *(_BYTE *)(v9 + 936) = 1;
        KeSetEvent((PRKEVENT)(v9 + 904), 0, 0);
        if ( !v16 )
        {
          ACPIInitReferenceDeviceExtension(v9);
          ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v9 + 928), DelayedWorkQueue);
        }
      }
    }
  }
  return 0LL;
}
