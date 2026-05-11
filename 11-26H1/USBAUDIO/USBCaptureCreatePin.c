/*
 * XREFs of USBCaptureCreatePin @ 0x14003E8D0
 * Callers:
 *     <none>
 * Callees:
 *     KsGateTurnInputOff @ 0x140003BC0 (KsGateTurnInputOff.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005060 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008644 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     USBCapturePinFormatChange @ 0x14002E2C4 (USBCapturePinFormatChange.c)
 */

__int64 __fastcall USBCaptureCreatePin(struct _KSPIN *PointerToPointerToItem)
{
  _QWORD *Context; // r13
  NTSTATUS v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // rsi
  int v10; // r12d
  __int64 v11; // r9
  char v12; // bp
  _QWORD *v13; // rsi
  unsigned int v14; // r14d
  __int64 v15; // rax
  PIRP Irp; // rax
  struct _KSGATE *v17; // rax
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v19; // rax
  void *v20; // rdx
  int v22; // [rsp+90h] [rbp+8h]

  Context = PointerToPointerToItem->Context;
  v3 = -1073741637;
  v4 = Context[19];
  v5 = Context[18];
  v6 = *(_QWORD *)(Context[2] + 16LL);
  v7 = v4 + 976;
  v8 = *(_DWORD *)(v5 + 220);
  v22 = v8;
  v9 = *(_QWORD *)(v6 + 72);
  v10 = 12 * *(_DWORD *)(v9 + 208) + 152;
  v11 = v4 + 976 + (unsigned int)(12 * v10);
  v12 = 1;
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
    v11 = v4 + 976 + (unsigned int)(12 * v10);
    v7 = v4 + 976;
    v8 = v22;
  }
  *(_DWORD *)(v4 + 124) = *(_DWORD *)(v9 + 208);
  *(_BYTE *)(v4 + 128) = *(_BYTE *)(v9 + 212);
  if ( (*(_DWORD *)(v5 + 216) & 0xF000) == 0 )
  {
    v3 = 0;
    v13 = (_QWORD *)(v4 + 352);
    v14 = 0;
    while ( v3 >= 0 )
    {
      *(v13 - 1) = PointerToPointerToItem;
      v15 = *(_DWORD *)(v4 + 124) * v8 * v14;
      *(v13 - 3) = v7 + v10 * v14;
      *v13 = v11 + v15;
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(Context[2] + 40LL) + 76LL), 0);
      *(v13 - 4) = Irp;
      if ( Irp )
      {
        v3 = KsAddItemToObjectBag(PointerToPointerToItem->Bag, Irp, (PFNKSFREE)IoFreeIrp);
        if ( v3 < 0 )
          IoFreeIrp((PIRP)*(v13 - 4));
      }
      else
      {
        v3 = -1073741670;
      }
      v11 = v4 + 976 + (unsigned int)(12 * v10);
      v7 = v4 + 976;
      v8 = v22;
      ++v14;
      v13 += 7;
      if ( v14 >= 0xC )
      {
        if ( v3 >= 0 )
        {
          v3 = USBCapturePinFormatChange((PVOID *)PointerToPointerToItem);
          if ( v3 >= 0 )
          {
            *(_QWORD *)(v4 + 160) = v4 + 152;
            *(_QWORD *)(v4 + 152) = v4 + 152;
            *(_QWORD *)(v4 + 144) = v4 + 136;
            *(_QWORD *)(v4 + 136) = v4 + 136;
            KeInitializeMutex((PRKMUTEX)(v4 + 168), 0);
            KeInitializeEvent((PRKEVENT)(v4 + 272), NotificationEvent, 0);
            KeInitializeEvent((PRKEVENT)(v4 + 232), NotificationEvent, 0);
            v17 = KsPinGetAndGate(PointerToPointerToItem);
            KsGateTurnInputOff(v17);
            WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
            *(_QWORD *)(v4 + 256) = WorkItem;
            if ( WorkItem )
            {
              v19 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
              *(_QWORD *)(v4 + 296) = v19;
              if ( v19 )
                return (unsigned int)v3;
              IoFreeWorkItem(*(PIO_WORKITEM *)(v4 + 256));
            }
            v3 = -1073741670;
          }
        }
        break;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v12 = 0;
  }
  if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v20 = &WPP_f8dfd6848d2138a27d5dceb541a753eb_Traceguids;
    LOBYTE(v20) = v12;
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v20,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v3;
}
