/*
 * XREFs of PopNotifyDevice @ 0x140C13C14
 * Callers:
 *     PopWakeDeviceList @ 0x1404B2F38 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B3160 (PopSleepDeviceList.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x1403BC828 (PopQueueQuerySetIrp.c)
 *     PopLogNotifyDevice @ 0x1404643C8 (PopLogNotifyDevice.c)
 *     PopMapInternalActionToIrpAction @ 0x1404CE2A4 (PopMapInternalActionToIrpAction.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x1404CEAC8 (PoFxActivateDeviceForSystemTransition.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x140603CFC (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall PopNotifyDevice(__int64 a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY **v2; // r10
  char v5; // r8
  __int64 v6; // rdx
  struct _LIST_ENTRY **v7; // r10
  ULONG v8; // r13d
  int v9; // ebx
  struct _LIST_ENTRY *v10; // r14
  PIRP v11; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  struct _IO_STACK_LOCATION *v13; // rax
  void *DeviceAttachmentBaseRefWithTag; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _LIST_ENTRY *v17; // [rsp+A0h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+10h] BYREF

  v2 = *(struct _LIST_ENTRY ***)(a1 + 56);
  Irp = 0LL;
  v17 = 0LL;
  if ( *(_BYTE *)(a1 + 464) || (v5 = 0, *v2 != a2[4].Flink) )
    v5 = 1;
  v8 = PopMapInternalActionToIrpAction(DWORD2(PopCurrentBroadcast), *(_DWORD *)(a1 + 4), v5);
  if ( v8 == 7 && *v7 == a2[4].Flink && *(_BYTE *)a1 == 2 )
    *v7 = 0LL;
  v9 = *(_DWORD *)(a1 + 4);
  PopAllocateIrp(a2[3].Flink, v6, *(_BYTE *)a1, 0, v9, 1, 0, 0LL, 0LL, &Irp, &v17);
  v10 = v17;
  v17[13].Blink = a2;
  if ( !(unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() )
    LOBYTE(v10[14].Flink) = 0;
  v11 = Irp;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v9;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v8;
  CurrentStackLocation[-1].Parameters.Read.Length = DWORD1(PopCurrentBroadcast);
  v13 = v11->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopSystemIrpCompletion;
  v13[-1].Context = v10;
  v13[-1].Control = -32;
  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
    PopLogNotifyDevice((__int64)a2[3].Flink, (__int64)a2, (__int64)v11);
  if ( (*(_BYTE *)a1 == 2 || *(_BYTE *)a1 == 3) && v9 > 1 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)a2[3].Flink, 0x72496F50u);
    if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() )
    {
      PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, 0LL, v16);
    }
    else
    {
      LOBYTE(v15) = *(_BYTE *)a1 == 2;
      PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, v15, v16);
      LOBYTE(v10[14].Flink) = 1;
    }
  }
  PopQueueQuerySetIrp(v11);
}
