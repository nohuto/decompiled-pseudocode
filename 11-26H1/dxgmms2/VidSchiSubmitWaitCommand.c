/*
 * XREFs of VidSchiSubmitWaitCommand @ 0x14000D880
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400E8F40 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A150 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiCompleteRewindPacket @ 0x14000BE70 (VidSchiCompleteRewindPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiSubmitWaitCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r15
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  __int64 v3; // rdi
  int v4; // r14d
  __int64 v5; // rsi
  _DWORD *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // eax
  char v10; // dl
  int v11; // eax
  __int64 *v12; // rcx
  _QWORD *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 *v18; // r8
  _QWORD *v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 **v22; // rax
  __int64 v23; // rax
  __int64 **v24; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  __int128 v26; // [rsp+38h] [rbp-38h]
  __int64 v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 *v30; // [rsp+60h] [rbp-10h]
  char v31; // [rsp+68h] [rbp-8h]
  int v32; // [rsp+6Ch] [rbp-4h]

  v1 = *((_QWORD *)a1 + 11);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 104);
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 2016), &LockHandle);
  v28 = v5;
  v31 = 0;
  v30 = &v29;
  v29 = (__int64)&v29;
  v32 = 1;
  if ( (*(_BYTE *)(v5 + 3284) & 1) != 0
    || *(_DWORD *)(v5 + 3260)
    || *(_BYTE *)(v3 + 212)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 208), 0, 0) )
  {
    v6 = (_DWORD *)((char *)v2 + 280);
    v14 = *((_DWORD *)v2 + 70);
    if ( (v14 & 1) == 0 )
    {
      if ( (v14 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket((HwQueueStagingList *)&v28);
      else
        VidSchiUnwaitWaitQueuePacket((HwQueueStagingList *)&v28);
    }
  }
  else
  {
    v6 = (_DWORD *)((char *)v2 + 280);
  }
  if ( (*v6 & 1) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v7 = *((_QWORD *)v2 + 11);
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 96) + 24LL);
    v27 = 0LL;
    v26 = 0LL;
    if ( (*(_DWORD *)(v7 + 192) & 4) == 0 )
    {
      WdLogSingleEntry3(4LL, v8, v7, *((unsigned int *)v2 + 28));
      WdLogGlobalForLineNumber = 16168;
      v9 = *(_DWORD *)(v7 + 192) | 4;
      *(_QWORD *)(v7 + 664) = v2;
      *(_DWORD *)(v7 + 192) = v9;
    }
    VidSchiCompleteRewindPacket(v7, 1);
    VidSchiUpdateContextStatus(v1, 4LL, 26716LL);
  }
  if ( v32 == 1 )
  {
    v10 = 0;
    v11 = *(_DWORD *)(v28 + 312);
    if ( v11 == 1 )
    {
      if ( (__int64 *)v29 != &v29 )
      {
        v19 = (_QWORD *)(v28 + 288);
        if ( *(_QWORD *)(*(_QWORD *)(v28 + 288) + 8LL) != v28 + 288 )
          goto LABEL_31;
        v20 = *(__int64 **)(v28 + 296);
        if ( (_QWORD *)*v20 != v19 )
          goto LABEL_31;
        if ( *(__int64 **)(v29 + 8) != &v29 )
          goto LABEL_31;
        if ( (__int64 *)*v30 != &v29 )
          goto LABEL_31;
        *v20 = (__int64)&v29;
        v19[1] = v30;
        *v30 = (__int64)v19;
        v21 = v29;
        v30 = v20;
        if ( *(__int64 **)(v29 + 8) != &v29 || (__int64 *)*v20 != &v29 )
          goto LABEL_31;
        *v20 = v29;
        *(_QWORD *)(v21 + 8) = v20;
        v30 = &v29;
        v29 = (__int64)&v29;
        goto LABEL_30;
      }
    }
    else if ( v11 == 2 )
    {
      v12 = (__int64 *)v29;
      if ( (__int64 *)v29 != &v29 )
      {
        do
        {
          v18 = (__int64 *)*v12;
          if ( *((_BYTE *)v12 - 29) )
          {
            if ( (__int64 *)v18[1] != v12 )
              goto LABEL_31;
            v22 = (__int64 **)v12[1];
            if ( *v22 != v12 )
              goto LABEL_31;
            *v22 = v18;
            v18[1] = (__int64)v22;
            v23 = v28 + 288;
            v24 = *(__int64 ***)(v28 + 296);
            if ( *v24 != (__int64 *)(v28 + 288) )
              goto LABEL_31;
            v12[1] = (__int64)v24;
            *v12 = v23;
            *v24 = v12;
            v10 = 1;
            *(_QWORD *)(v23 + 8) = v12;
          }
          v12 = v18;
        }
        while ( v18 != &v29 );
        if ( v10 )
        {
LABEL_30:
          *(_BYTE *)(v28 + 304) = 0;
          *(_QWORD *)(v28 + 1496) = MEMORY[0xFFFFF78000000320];
          KeSetEvent((PRKEVENT)(v28 + 1464), 0, 0);
        }
      }
    }
  }
  v13 = (_QWORD *)v29;
  if ( (__int64 *)v29 != &v29 )
  {
    v15 = v29;
    while ( 1 )
    {
      HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)&v28, (struct VIDSCH_HW_QUEUE *)(v15 - 176), 0LL);
      v16 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 )
        break;
      v17 = (_QWORD *)v13[1];
      if ( (_QWORD *)*v17 != v13 )
        break;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v13 = 0LL;
      v13[1] = 0LL;
      v13 = (_QWORD *)v29;
      v15 = v29;
      if ( (__int64 *)v29 == &v29 )
        goto LABEL_15;
    }
LABEL_31:
    __fastfail(3u);
  }
LABEL_15:
  v31 = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v28);
}
