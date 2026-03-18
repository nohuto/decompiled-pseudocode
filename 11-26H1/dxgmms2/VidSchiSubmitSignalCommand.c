/*
 * XREFs of VidSchiSubmitSignalCommand @ 0x14000DC50
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400E8F40 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A150 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiCompleteSignalCommmand @ 0x140012020 (VidSchiCompleteSignalCommmand.c)
 */

void __fastcall VidSchiSubmitSignalCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  __int64 v3; // r14
  __int64 *v4; // r8
  int v5; // edx
  __int64 *v6; // rsi
  int v7; // ecx
  int v8; // edi
  char v9; // dl
  int v10; // eax
  __int64 *v11; // rcx
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rax
  __int64 v19; // rax
  __int64 **v20; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-18h]
  char v25; // [rsp+50h] [rbp-10h]
  int v26; // [rsp+54h] [rbp-Ch]

  v1 = *((_QWORD *)a1 + 11);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 2016), &LockHandle);
  v22 = v3;
  v25 = 0;
  v4 = &v23;
  v5 = 1;
  v6 = &v23;
  v24 = &v23;
  v23 = (__int64)&v23;
  v26 = 1;
  if ( *((_QWORD *)v2 + 5) == v1 + 672 )
  {
    v8 = 1;
    goto LABEL_9;
  }
  v7 = *((_DWORD *)v2 + 20);
  if ( (*((_DWORD *)v2 + 70) & 1) != 0 )
  {
    if ( (v7 & 4) == 0 )
    {
      VidSchiCompleteSignalCommmand(&v22, v2, 1LL);
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 1044));
      v5 = v26;
      v4 = v24;
      v6 = (__int64 *)v23;
    }
    v7 = *((_DWORD *)v2 + 20) | 8;
  }
  v8 = 0;
  *((_DWORD *)v2 + 20) = v7 | 1;
  if ( v5 == 1 )
  {
LABEL_9:
    v9 = 0;
    v10 = *(_DWORD *)(v22 + 312);
    if ( v10 == 1 )
    {
      if ( v6 == &v23 )
        goto LABEL_4;
      v15 = v22 + 288;
      if ( *(_QWORD *)(*(_QWORD *)(v22 + 288) + 8LL) != v22 + 288 )
        goto LABEL_24;
      v16 = *(__int64 **)(v22 + 296);
      if ( *v16 != v15 )
        goto LABEL_24;
      if ( (__int64 *)v6[1] != &v23 )
        goto LABEL_24;
      if ( (__int64 *)*v4 != &v23 )
        goto LABEL_24;
      *v16 = (__int64)&v23;
      *(_QWORD *)(v15 + 8) = v24;
      *v24 = v15;
      v17 = v23;
      v24 = v16;
      if ( *(__int64 **)(v23 + 8) != &v23 || (__int64 *)*v16 != &v23 )
        goto LABEL_24;
      *v16 = v23;
      *(_QWORD *)(v17 + 8) = v16;
      v24 = &v23;
      v23 = (__int64)&v23;
    }
    else
    {
      if ( v10 != 2 || v6 == &v23 )
        goto LABEL_4;
      do
      {
        v11 = (__int64 *)*v6;
        if ( *((_BYTE *)v6 - 29) )
        {
          if ( (__int64 *)v11[1] != v6 )
            goto LABEL_24;
          v18 = (__int64 **)v6[1];
          if ( *v18 != v6 )
            goto LABEL_24;
          *v18 = v11;
          v11[1] = (__int64)v18;
          v19 = v22 + 288;
          v20 = *(__int64 ***)(v22 + 296);
          if ( *v20 != (__int64 *)(v22 + 288) )
            goto LABEL_24;
          v6[1] = (__int64)v20;
          *v6 = v19;
          *v20 = v6;
          v9 = 1;
          *(_QWORD *)(v19 + 8) = v6;
        }
        v6 = v11;
      }
      while ( v11 != &v23 );
      if ( !v9 )
      {
LABEL_15:
        v6 = (__int64 *)v23;
        goto LABEL_4;
      }
    }
    *(_BYTE *)(v22 + 304) = 0;
    *(_QWORD *)(v22 + 1496) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v22 + 1464), 0, 0);
    goto LABEL_15;
  }
LABEL_4:
  if ( v6 != &v23 )
  {
    v12 = v6;
    while ( 1 )
    {
      HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)&v22, (struct VIDSCH_HW_QUEUE *)(v12 - 22), 0LL);
      v13 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 )
        break;
      v14 = (__int64 **)v6[1];
      if ( *v14 != v6 )
        break;
      *v14 = v13;
      v13[1] = (__int64)v14;
      *v6 = 0LL;
      v6[1] = 0LL;
      v6 = (__int64 *)v23;
      v12 = (__int64 *)v23;
      if ( (__int64 *)v23 == &v23 )
        goto LABEL_5;
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_5:
  v25 = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v22);
}
