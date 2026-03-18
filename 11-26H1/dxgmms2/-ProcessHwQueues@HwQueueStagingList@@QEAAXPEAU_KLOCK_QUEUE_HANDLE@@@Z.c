/*
 * XREFs of ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D028
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x140049E60 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A150 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 */

void __fastcall HwQueueStagingList::ProcessHwQueues(struct _KEVENT **this, struct _KLOCK_QUEUE_HANDLE *a2)
{
  struct _KEVENT *v4; // r8
  char v5; // r9
  volatile LONG Lock; // eax
  char *v7; // rdx
  __int64 *v8; // rcx
  _QWORD **v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  struct _LIST_ENTRY *v14; // rcx
  struct _KEVENT *v15; // r8
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v17; // rax
  __int64 **v18; // rax
  __int64 v19; // rax
  struct _LIST_ENTRY *v20; // r9

  if ( *((_DWORD *)this + 7) != 1 )
    goto LABEL_5;
  v4 = *this;
  v5 = 0;
  Lock = (*this)[13].Header.Lock;
  if ( Lock == 1 )
  {
    v14 = (struct _LIST_ENTRY *)(this + 1);
    if ( v14->Flink == v14 )
      goto LABEL_5;
    v15 = v4 + 12;
    if ( *(struct _KEVENT **)(*(_QWORD *)&v15->Header.Lock + 8LL) != v15
      || (Flink = v15->Header.WaitListHead.Flink, (struct _KEVENT *)Flink->Flink != v15)
      || v14->Flink->Blink != v14
      || v14->Blink->Flink != v14
      || (Flink->Flink = v14,
          v15->Header.WaitListHead.Flink = v14->Blink,
          v14->Blink->Flink = (struct _LIST_ENTRY *)v15,
          v14->Blink = Flink,
          v17 = v14->Flink,
          v14->Flink->Blink != v14)
      || Flink->Flink != v14 )
    {
LABEL_15:
      __fastfail(3u);
    }
    Flink->Flink = v17;
    v17->Blink = Flink;
    v14->Blink = v14;
    v14->Flink = v14;
    goto LABEL_14;
  }
  if ( Lock == 2 )
  {
    v7 = (char *)(this + 1);
    v8 = (__int64 *)this[1];
    if ( v8 != (__int64 *)v7 )
    {
      do
      {
        v13 = *v8;
        if ( *((_BYTE *)v8 - 29) )
        {
          if ( *(__int64 **)(v13 + 8) != v8 )
            goto LABEL_15;
          v18 = (__int64 **)v8[1];
          if ( *v18 != v8 )
            goto LABEL_15;
          *v18 = (__int64 *)v13;
          *(_QWORD *)(v13 + 8) = v18;
          v19 = (__int64)&(*this)[12];
          v20 = (*this)[12].Header.WaitListHead.Flink;
          if ( v20->Flink != (struct _LIST_ENTRY *)v19 )
            goto LABEL_15;
          v8[1] = (__int64)v20;
          *v8 = v19;
          v20->Flink = (struct _LIST_ENTRY *)v8;
          v5 = 1;
          *(_QWORD *)(v19 + 8) = v8;
        }
        v8 = (__int64 *)v13;
      }
      while ( (char *)v13 != v7 );
      if ( v5 )
      {
LABEL_14:
        LOBYTE((*this)[12].Header.WaitListHead.Blink) = 0;
        (*this)[62].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
        KeSetEvent(*this + 61, 0, 0);
      }
    }
  }
LABEL_5:
  v9 = (_QWORD **)(this + 1);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
      break;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)this, (struct VIDSCH_HW_QUEUE *)(v10 - 22), a2);
    v11 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 )
      goto LABEL_15;
    v12 = (_QWORD *)v10[1];
    if ( (_QWORD *)*v12 != v10 )
      goto LABEL_15;
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = 0LL;
    v10[1] = 0LL;
  }
  *((_BYTE *)this + 24) = 1;
}
