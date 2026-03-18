/*
 * XREFs of ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A150
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x14000D880 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x14000DC50 (VidSchiSubmitSignalCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D028 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000A3C0 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AC8C (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AD98 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14002C71C (-AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall HwQueueStagingList::ProcessHwQueue(
        HwQueueStagingList *this,
        struct VIDSCH_HW_QUEUE *a2,
        struct _KLOCK_QUEUE_HANDLE *a3)
{
  _QWORD *v3; // rsi
  _DWORD *v6; // r15
  __int64 v7; // r13
  struct VIDSCH_HW_QUEUE *i; // r9
  __int64 v9; // rbx
  bool v10; // al
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rdi
  _QWORD *v16; // rcx
  __int64 v17; // r9
  __int64 *v18; // r9
  __int64 v19; // rax
  __int64 **v20; // rcx
  __int64 v21; // rcx
  __int64 **v22; // rax
  struct VIDSCH_HW_QUEUE *v23; // [rsp+68h] [rbp+10h] BYREF
  struct _KLOCK_QUEUE_HANDLE *v24; // [rsp+70h] [rbp+18h]
  __int64 v25; // [rsp+78h] [rbp+20h]

  v24 = a3;
  v3 = (_QWORD *)((char *)a2 + 160);
  v25 = *((_QWORD *)a2 + 5);
  v23 = 0LL;
  v6 = (_DWORD *)((char *)a2 + 124);
  v7 = *(_QWORD *)(v25 + 16);
  for ( i = 0LL; ; i = v23 )
  {
    v9 = *((_QWORD *)a2 + 26);
    if ( (_QWORD *)v9 == v3 )
    {
      if ( (_QWORD *)*v3 == v3 )
      {
        if ( *v6 )
        {
          if ( *v6 == 1 && !*(_BYTE *)(*((_QWORD *)a2 + 5) + 152LL) )
            VidSchiNotifyReadyQueueRemoved(a2);
          *v6 = 0;
        }
      }
      else if ( *((_DWORD *)a2 + 31) != 1 )
      {
        if ( !*(_BYTE *)(*((_QWORD *)a2 + 5) + 152LL) )
          VidSchiNotifyReadyQueueAdded(a2);
        *((_DWORD *)a2 + 31) = 1;
      }
      return;
    }
    if ( i )
    {
      HwQueueStagingList::AddHwQueue(this, a2);
      v18 = (__int64 *)(v17 + 176);
      v19 = *v18;
      if ( *v18 )
      {
        if ( *(__int64 **)(v19 + 8) != v18 )
          goto LABEL_35;
        v20 = (__int64 **)v18[1];
        if ( *v20 != v18 )
          goto LABEL_35;
        *v20 = (__int64 *)v19;
        *(_QWORD *)(v19 + 8) = v20;
      }
      v21 = *((_QWORD *)this + 1);
      v22 = (__int64 **)((char *)this + 8);
      if ( *(HwQueueStagingList **)(v21 + 8) == (HwQueueStagingList *)((char *)this + 8) )
      {
        *v18 = v21;
        v18[1] = (__int64)v22;
        *(_QWORD *)(v21 + 8) = v18;
        *v22 = v18;
        *((_BYTE *)this + 24) = 0;
        return;
      }
LABEL_35:
      __fastfail(3u);
    }
    v6 = (_DWORD *)((char *)a2 + 124);
    v10 = VidSchiPacketBlockedOnWaitCondition((struct _VIDSCH_QUEUE_PACKET *)(v9 - 32));
    v11 = *((_DWORD *)a2 + 31);
    if ( v10 )
    {
      if ( *v3 == v9 )
      {
        if ( v11 != 2 )
        {
          if ( v11 == 1 && !*(_BYTE *)(*((_QWORD *)a2 + 5) + 152LL) )
            VidSchiNotifyReadyQueueRemoved(a2);
          *v6 = 2;
        }
      }
      else if ( v11 != 1 )
      {
        if ( !*(_BYTE *)(*((_QWORD *)a2 + 5) + 152LL) )
          VidSchiNotifyReadyQueueAdded(a2);
        *v6 = 1;
      }
      return;
    }
    if ( v11 != 1 )
    {
      if ( !*(_BYTE *)(*((_QWORD *)a2 + 5) + 152LL) )
        VidSchiNotifyReadyQueueAdded(a2);
      *v6 = 1;
    }
    if ( !*(_BYTE *)(v7 + 16524) )
    {
      v12 = *(_QWORD *)(v7 + 24);
      v13 = *(_QWORD *)(v25 + 8);
      if ( (*(_BYTE *)(v12 + 3284) & 1) == 0
        && !*(_DWORD *)(v12 + 3260)
        && !*(_BYTE *)(v13 + 212)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 208), 0, 0) )
      {
        v14 = *(_DWORD *)(v9 + 16);
        if ( v14 == 8 || !v14 )
          break;
      }
    }
    VidSchiReleasePacketToGpu(this, (struct _VIDSCH_QUEUE_PACKET *)(v9 - 32), &v23, v24);
  }
  v15 = (_QWORD *)((char *)a2 + 192);
  if ( !*v15 )
  {
    v16 = *(_QWORD **)(v7 + 2768);
    if ( *v16 != v7 + 2760 )
      goto LABEL_35;
    *v15 = v7 + 2760;
    v15[1] = v16;
    *v16 = v15;
    *(_QWORD *)(v7 + 2768) = v15;
  }
}
