/*
 * XREFs of PopNotifyDevice @ 0x140C0DA04
 * Callers:
 *     PopWakeDeviceList @ 0x1404B96A8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B98D0 (PopSleepDeviceList.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopAllocateIrp @ 0x14026F82C (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x1403B2B18 (PopQueueQuerySetIrp.c)
 *     PopLogNotifyDevice @ 0x14046AC48 (PopLogNotifyDevice.c)
 *     PopMapInternalActionToIrpAction @ 0x1404D4A34 (PopMapInternalActionToIrpAction.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x1404D5258 (PoFxActivateDeviceForSystemTransition.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x14060124C (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall PopNotifyDevice(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  char v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // r10
  ULONG v8; // r13d
  int v9; // ebx
  _BYTE *v10; // r14
  PIRP v11; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  struct _IO_STACK_LOCATION *v13; // rax
  void *DeviceAttachmentBaseRefWithTag; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // [rsp+A0h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+10h] BYREF

  v2 = *(_QWORD **)(a1 + 56);
  Irp = 0LL;
  v17 = 0LL;
  if ( *(_BYTE *)(a1 + 464) || (v5 = 0, *v2 != *(_QWORD *)(a2 + 64)) )
    v5 = 1;
  v8 = PopMapInternalActionToIrpAction(DWORD2(xmmword_140F0FAE0), *(_DWORD *)(a1 + 4), v5);
  if ( v8 == 7 && *v7 == *(_QWORD *)(a2 + 64) && *(_BYTE *)a1 == 2 )
    *v7 = 0LL;
  v9 = *(_DWORD *)(a1 + 4);
  PopAllocateIrp(*(void **)(a2 + 48), v6, *(_BYTE *)a1, 0, v9, 1, 0, 0LL, 0LL, &Irp, &v17);
  v10 = (_BYTE *)v17;
  *(_QWORD *)(v17 + 216) = a2;
  if ( !(unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() )
    v10[224] = 0;
  v11 = Irp;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v9;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v8;
  CurrentStackLocation[-1].Parameters.Read.Length = DWORD1(xmmword_140F0FAE0);
  v13 = v11->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopSystemIrpCompletion;
  v13[-1].Context = v10;
  v13[-1].Control = -32;
  if ( (xmmword_140FBFC10 & 0x8000) != 0 )
    PopLogNotifyDevice(*(_QWORD *)(a2 + 48), a2, (__int64)v11);
  if ( (*(_BYTE *)a1 == 2 || *(_BYTE *)a1 == 3) && v9 > 1 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x72496F50u);
    if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() )
    {
      PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, 0LL, v16);
    }
    else
    {
      LOBYTE(v15) = *(_BYTE *)a1 == 2;
      PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, v15, v16);
      v10[224] = 1;
    }
  }
  PopQueueQuerySetIrp(v11);
}
