/*
 * XREFs of ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400E49FC
 * Callers:
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E0F50 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E4500 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400E46C4 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 * Callees:
 *     ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400E4BE4 (-VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVID.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400E6BC0 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        struct VIDMM_WORKER_THREAD **this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        PVOID *a3,
        struct _VIDSCH_SYNC_OBJECT *a4,
        bool a5)
{
  struct VIDMM_WORKER_THREAD *v7; // rcx
  struct VIDMM_PAGING_QUEUE_PACKET *NewPagingQueuePacket; // rbx
  char v11; // si
  __int128 v12; // xmm0
  bool v13; // r14
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v18; // [rsp+B8h] [rbp+58h] BYREF

  v7 = *this;
  v16 = 0;
  NewPagingQueuePacket = VidMmGetNewPagingQueuePacket(v7, (struct VIDMM_PAGING_QUEUE *)a3);
  if ( !a4 || *(_DWORD *)a2 == 118 || *(_DWORD *)a2 == 206 || *((_BYTE *)this + 7041) )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( !NewPagingQueuePacket )
    {
      Object = a3[8];
      v18 = a4;
      VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v18, (const unsigned __int64 *)&Object, 1u, 0LL, 0LL);
      NewPagingQueuePacket = VidMmGetNewPagingQueuePacket(*this, (struct VIDMM_PAGING_QUEUE *)a3);
    }
  }
  *((_BYTE *)NewPagingQueuePacket + 24) = 0;
  *((_BYTE *)NewPagingQueuePacket + 25) = v11;
  v12 = *(_OWORD *)a2;
  Object = 0LL;
  *((_OWORD *)NewPagingQueuePacket + 3) = v12;
  *((_OWORD *)NewPagingQueuePacket + 4) = *((_OWORD *)a2 + 1);
  *((_OWORD *)NewPagingQueuePacket + 5) = *((_OWORD *)a2 + 2);
  *((_OWORD *)NewPagingQueuePacket + 6) = *((_OWORD *)a2 + 3);
  *((_OWORD *)NewPagingQueuePacket + 7) = *((_OWORD *)a2 + 4);
  *((_QWORD *)NewPagingQueuePacket + 16) = *((_QWORD *)a2 + 10);
  memset(&Event, 0, sizeof(Event));
  if ( !v11 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)NewPagingQueuePacket + 7) = &Event;
  }
  v13 = a5;
  if ( a5 )
  {
    v16 = -1073741776;
    *((_QWORD *)NewPagingQueuePacket + 10) = &v16;
  }
  VidMmAppendReadyPacket(*this, (struct VIDMM_PAGING_QUEUE *)a3, NewPagingQueuePacket, (unsigned __int64 *)&Object);
  if ( v13 )
  {
    if ( v11 )
    {
      v18 = a4;
      VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v18, (const unsigned __int64 *)&Object, 1u, 0LL, 0LL);
    }
    else
    {
      Object = &Event;
      KeWaitForMultipleObjects(1u, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    }
  }
  return v16;
}
