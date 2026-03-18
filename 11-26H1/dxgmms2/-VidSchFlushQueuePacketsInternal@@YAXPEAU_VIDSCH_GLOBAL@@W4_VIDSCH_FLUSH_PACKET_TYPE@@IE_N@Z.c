/*
 * XREFs of ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x140003F60
 * Callers:
 *     VidSchFlushQueuePackets @ 0x140003F40 (VidSchFlushQueuePackets.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x140106C20 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     VidSchiClearFlipDevice @ 0x140003564 (VidSchiClearFlipDevice.c)
 *     ?VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z @ 0x1400045FC (-VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiAcceptsIncomingWork @ 0x140004660 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x140016178 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushQueuePacket @ 0x14004626C (VidSchiFlushQueuePacket.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchFlushQueuePacketsInternal(KSPIN_LOCK *a1, int a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 j; // rsi
  volatile PKSPIN_LOCK *v6; // rbx
  KSPIN_LOCK *v7; // rdi
  int v8; // edx
  struct _KSPIN_LOCK_QUEUE *v9; // rcx
  KSPIN_LOCK *v10; // r13
  volatile PKSPIN_LOCK *p_Lock; // r15
  int v12; // r14d
  volatile PKSPIN_LOCK *v13; // rcx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  volatile PKSPIN_LOCK v16; // rax
  volatile PKSPIN_LOCK **v17; // rdx
  volatile PKSPIN_LOCK **v18; // rax
  volatile PKSPIN_LOCK *v19; // r14
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  char v22; // r13
  unsigned int v23; // r8d
  __int64 v24; // rdx
  _QWORD *v25; // r9
  _QWORD *v26; // r11
  unsigned int i; // r8d
  _QWORD *v28; // rdi
  _QWORD *v29; // rsi
  _QWORD *v30; // rdi
  _QWORD *v31; // r11
  _QWORD *v32; // r9
  KSPIN_LOCK *v33; // rcx
  volatile PKSPIN_LOCK **v34; // rax
  _QWORD *v35; // rdi
  _QWORD *k; // r12
  volatile PKSPIN_LOCK *v37; // rcx
  volatile PKSPIN_LOCK **v38; // rcx
  volatile PKSPIN_LOCK v39; // rcx
  volatile PKSPIN_LOCK **v40; // rax
  _QWORD *v41; // rdx
  KSPIN_LOCK *m; // r14
  _QWORD *n; // rdi
  _QWORD *ii; // rsi
  struct _VIDSCH_GLOBAL *v45; // rcx
  volatile PKSPIN_LOCK **v46; // [rsp+40h] [rbp-51h] BYREF
  volatile PKSPIN_LOCK *v47; // [rsp+48h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+50h] [rbp-41h] BYREF
  char v49; // [rsp+68h] [rbp-29h]
  int v50; // [rsp+6Ch] [rbp-25h]
  unsigned int v51; // [rsp+70h] [rbp-21h]
  volatile PKSPIN_LOCK *v52; // [rsp+78h] [rbp-19h]
  volatile PKSPIN_LOCK *v53; // [rsp+80h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-9h] BYREF
  __int16 v55; // [rsp+A8h] [rbp+17h]
  struct _VIDSCH_GLOBAL *jj; // [rsp+F0h] [rbp+5Fh]
  int v58; // [rsp+100h] [rbp+6Fh]
  unsigned int v59; // [rsp+108h] [rbp+77h]

  j = 0xFFFFFFFFLL;
  LODWORD(v6) = a2;
  v7 = a1;
  if ( a3 < *((_DWORD *)a1 + 12) )
    j = a3;
  v59 = j;
  if ( !(unsigned __int8)VidSchiAcceptsIncomingWork() )
    return;
  v10 = (KSPIN_LOCK *)&v9[126];
  p_Lock = &v9[22].Lock;
  v53 = &v9[22].Lock;
  if ( v8 != 1 )
  {
    LockHandle.LockQueue.Next = v9 + 126;
    v55 = 0;
    AcquireSpinLock::Acquire((AcquireSpinLock *)&LockHandle);
    v20 = (unsigned __int64)*p_Lock;
    v48.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)v7;
    v49 = 0;
    v50 = 2;
    *(_QWORD *)&v48.OldIrql = &v48.LockQueue.Lock;
    v48.LockQueue.Lock = (volatile PKSPIN_LOCK)&v48.LockQueue.Lock;
    if ( (volatile PKSPIN_LOCK *)v20 != p_Lock )
      goto LABEL_59;
LABEL_65:
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v48);
    AcquireSpinLock::Release((AcquireSpinLock *)&LockHandle);
    return;
  }
  v47 = (volatile PKSPIN_LOCK *)&v46;
  v12 = 0;
  v46 = (volatile PKSPIN_LOCK **)&v46;
  v58 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v9[126], &LockHandle);
  v13 = (volatile PKSPIN_LOCK *)*p_Lock;
  v6 = p_Lock;
  if ( *(volatile PKSPIN_LOCK **)p_Lock != p_Lock )
  {
    do
    {
      _m_prefetchw((const void *)(v13 - 10));
      v14 = *((_QWORD *)v13 - 10);
      while ( v14 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 - 10, v14 + 1, v14);
        if ( v15 == v14 )
        {
          v58 = ++v12;
          goto LABEL_85;
        }
      }
      v16 = *v13;
      if ( *((volatile PKSPIN_LOCK **)*v13 + 1) != v13
        || (v17 = (volatile PKSPIN_LOCK **)*((_QWORD *)v13 + 1), *v17 != v13)
        || (*v17 = (volatile PKSPIN_LOCK *)v16,
            v16[1] = (KSPIN_LOCK)v17,
            v18 = (volatile PKSPIN_LOCK **)v47,
            *(volatile PKSPIN_LOCK ****)v47 != &v46) )
      {
LABEL_13:
        __fastfail(3u);
      }
      *((_QWORD *)v13 + 1) = v47;
      *v13 = (volatile PKSPIN_LOCK)&v46;
      *v18 = v13;
      v47 = v13;
LABEL_85:
      v13 = (volatile PKSPIN_LOCK *)*v13;
    }
    while ( v13 != p_Lock );
    v6 = (volatile PKSPIN_LOCK *)(v7 + 45);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v19 = (volatile PKSPIN_LOCK *)*p_Lock;
  v20 = 0LL;
  if ( *(volatile PKSPIN_LOCK **)p_Lock != p_Lock )
  {
    do
    {
      v52 = v19;
      v21 = (__int64)(v19 - 14);
      v19 = (volatile PKSPIN_LOCK *)*v19;
      v20 = (unsigned int)(v20 + 1);
      v22 = 0;
      KeAcquireInStackQueuedSpinLock(v7 + 252, &LockHandle);
      v23 = *((_DWORD *)v7 + 12);
      v24 = 0LL;
      j = v59;
      v51 = v20;
      while ( (unsigned int)v24 < v23 )
      {
        if ( (v59 == -1 || v59 == (_DWORD)v24) && *(_QWORD *)(v7[v24 + 431] + 16) == v21 )
        {
          v22 = 1;
          break;
        }
        v24 = (unsigned int)(v24 + 1);
      }
      v25 = *(_QWORD **)(v21 + 80);
      v26 = (_QWORD *)(v21 + 80);
      for ( i = v59; v25 != v26; v25 = (_QWORD *)*v25 )
      {
        v28 = v25 + 81;
        v29 = (_QWORD *)v25[81];
        if ( v29 != v25 + 81 )
        {
          do
          {
            VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(v29 - 4), (struct _VIDSCH_DEVICE *)v21, i);
            v29 = (_QWORD *)*v29;
          }
          while ( v29 != v28 );
        }
        v30 = v25 + 83;
        j = v25[83];
        if ( (_QWORD *)j != v25 + 83 )
        {
          do
          {
            VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(j - 32), (struct _VIDSCH_DEVICE *)v21, i);
            j = *(_QWORD *)j;
          }
          while ( (_QWORD *)j != v30 );
        }
      }
      v31 = *(_QWORD **)(v21 + 96);
      v32 = (_QWORD *)(v21 + 96);
      if ( v31 != (_QWORD *)(v21 + 96) )
      {
        do
        {
          v35 = (_QWORD *)v31[4];
          for ( j = (__int64)(v31 + 4); v35 != (_QWORD *)j; v35 = (_QWORD *)*v35 )
          {
            for ( k = (_QWORD *)v35[19]; k != v35 + 19; k = (_QWORD *)*k )
              VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(k - 4), (struct _VIDSCH_DEVICE *)v21, i);
          }
          v31 = (_QWORD *)*v31;
        }
        while ( v31 != v32 );
        p_Lock = v53;
        v20 = v51;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v7 = a1;
      if ( v22 )
      {
        j = v59;
        if ( v59 == -1 )
          VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)a1, v21, 6, 0xFFFFFFFD, 0);
        else
          VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)a1, 6, 0, a5);
      }
      v33 = (KSPIN_LOCK *)(*(_QWORD *)(v21 + 40) + 2016LL);
      memset(&v48, 0, sizeof(v48));
      KeAcquireInStackQueuedSpinLock(v33, &v48);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v39 = *v52;
        if ( *((volatile PKSPIN_LOCK **)*v52 + 1) != v52 )
          goto LABEL_13;
        v40 = (volatile PKSPIN_LOCK **)*((_QWORD *)v52 + 1);
        if ( *v40 != v52 )
          goto LABEL_13;
        *v40 = (volatile PKSPIN_LOCK *)v39;
        v39[1] = (KSPIN_LOCK)v40;
        KeReleaseInStackQueuedSpinLock(&v48);
        ExFreePoolWithTag((PVOID)v21, 0);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&v48);
      }
    }
    while ( v19 != p_Lock );
    v10 = a1 + 252;
    v6 = (volatile PKSPIN_LOCK *)(a1 + 45);
  }
  if ( (_DWORD)v20 != v58 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2304LL, v58, (int)v20, v7);
    WdLogGlobalForLineNumber = 916;
    do
    {
LABEL_88:
      VidSchiFlushQueuePacket(&v48, v41, v19 - 4, (unsigned int)v6);
      v19 = (volatile PKSPIN_LOCK *)*v19;
    }
    while ( v19 != (volatile PKSPIN_LOCK *)j );
    while ( 1 )
    {
      v7 = (KSPIN_LOCK *)*v7;
      if ( v7 == (KSPIN_LOCK *)p_Lock )
        break;
LABEL_60:
      for ( m = (KSPIN_LOCK *)v7[81]; m != v7 + 81; m = (KSPIN_LOCK *)*m )
      {
        if ( !(_DWORD)v6 && (m[5] & 0x40080) != 0 && m[16] )
        {
          VidSchiSubmitPresentHistoryToken((unsigned int)&v48, (_DWORD)m - 32, 0, 0, 0LL);
          m[16] = 0LL;
        }
      }
      j = (__int64)(v7 + 83);
      v19 = (volatile PKSPIN_LOCK *)v7[83];
      if ( v19 != (volatile PKSPIN_LOCK *)(v7 + 83) )
        goto LABEL_88;
    }
    while ( 1 )
    {
      for ( n = *(_QWORD **)(v20 - 16); n != (_QWORD *)(v20 - 16); n = (_QWORD *)*n )
      {
        for ( ii = (_QWORD *)n[4]; ii != n + 4; ii = (_QWORD *)*ii )
        {
          v45 = (struct _VIDSCH_GLOBAL *)ii[19];
          for ( jj = v45; v45 != (struct _VIDSCH_GLOBAL *)(ii + 19); jj = v45 )
          {
            v41 = (_QWORD *)((char *)v45 - 32);
            v52 = (volatile PKSPIN_LOCK *)((char *)v45 - 32);
            if ( !(_DWORD)v6 && (v41[9] & 0x40080) != 0 && v41[20] )
            {
              VidSchiSubmitPresentHistoryToken((unsigned int)&v48, (_DWORD)v41, 0, 0, 0LL);
              v45 = jj;
              *((_QWORD *)v52 + 20) = 0LL;
            }
            v45 = *(struct _VIDSCH_GLOBAL **)v45;
          }
        }
      }
      v20 = *(_QWORD *)v20;
      if ( (volatile PKSPIN_LOCK *)v20 == v53 )
        goto LABEL_65;
LABEL_59:
      v7 = *(KSPIN_LOCK **)(v20 - 32);
      p_Lock = (volatile PKSPIN_LOCK *)(v20 - 32);
      if ( v7 != (KSPIN_LOCK *)(v20 - 32) )
        goto LABEL_60;
    }
  }
  KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
  while ( 1 )
  {
    v34 = v46;
    if ( v46 == (volatile PKSPIN_LOCK **)&v46 )
      break;
    if ( v46[1] != (volatile PKSPIN_LOCK *)&v46 )
      goto LABEL_13;
    v37 = *v46;
    if ( *((volatile PKSPIN_LOCK ***)*v46 + 1) != v46 )
      goto LABEL_13;
    v46 = (volatile PKSPIN_LOCK **)*v46;
    *((_QWORD *)v37 + 1) = &v46;
    v38 = (volatile PKSPIN_LOCK **)*((_QWORD *)v6 + 1);
    if ( *v38 != v6 )
      goto LABEL_13;
    *v34 = v6;
    v34[1] = (volatile PKSPIN_LOCK *)v38;
    *v38 = (volatile PKSPIN_LOCK *)v34;
    *((_QWORD *)v6 + 1) = v34;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
