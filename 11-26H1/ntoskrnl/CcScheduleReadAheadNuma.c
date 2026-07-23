/*
 * XREFs of CcScheduleReadAheadNuma @ 0x14021EA88
 * Callers:
 *     CcCopyReadEx @ 0x14021E590 (CcCopyReadEx.c)
 *     CcAsyncCopyRead @ 0x140389580 (CcAsyncCopyRead.c)
 *     CcAsyncReadPrefetch @ 0x14038A7BC (CcAsyncReadPrefetch.c)
 *     CcScheduleReadAheadEx @ 0x1404D3940 (CcScheduleReadAheadEx.c)
 *     CcScheduleReadAhead @ 0x1405B4130 (CcScheduleReadAhead.c)
 * Callees:
 *     IoReferenceIoAttributionFromThread @ 0x14026C040 (IoReferenceIoAttributionFromThread.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     CcCanIWriteStreamEx @ 0x140385C00 (CcCanIWriteStreamEx.c)
 *     CcPostWorkQueue @ 0x1403881A0 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140389900 (CcAllocateWorkQueueEntry.c)
 *     CcDetermineReadPattern @ 0x140471EF8 (CcDetermineReadPattern.c)
 *     CcPerfLogScheduleReadAhead @ 0x140489DDC (CcPerfLogScheduleReadAhead.c)
 *     CcChargeThreadForReadAhead @ 0x1404AF0BC (CcChargeThreadForReadAhead.c)
 *     CcGetCurrentNumaNode @ 0x1404C70F0 (CcGetCurrentNumaNode.c)
 */

void __fastcall CcScheduleReadAheadNuma(_QWORD *Object, _QWORD *a2, __int64 a3, struct _KTHREAD *a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 CurrentNumaNode; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // r14
  __int64 v11; // rsi
  int IoPriorityThread; // eax
  int v13; // r10d
  int v14; // r11d
  __int64 v15; // rbx
  unsigned int v16; // r12d
  int Pattern; // eax
  _QWORD *v18; // r11
  int v19; // r14d
  KIRQL v20; // dl
  KSPIN_LOCK *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // r8d
  signed __int64 v24; // rcx
  int v25; // r8d
  unsigned int v26; // ecx
  __int64 v27; // rax
  int v28; // edx
  int v29; // r8d
  KIRQL v30; // al
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  __int64 v36; // [rsp+40h] [rbp-88h]
  __int64 v37; // [rsp+40h] [rbp-88h]
  __int64 v38; // [rsp+40h] [rbp-88h]
  __int64 v39; // [rsp+48h] [rbp-80h]
  __int64 v40; // [rsp+50h] [rbp-78h]
  __int64 v41; // [rsp+58h] [rbp-70h] BYREF
  KSPIN_LOCK *v42; // [rsp+60h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-60h] BYREF
  KIRQL NewIrql; // [rsp+D0h] [rbp+8h]
  int v46; // [rsp+E0h] [rbp+18h]
  int v47; // [rsp+E8h] [rbp+20h]

  v46 = a3;
  v5 = Object[6];
  CurrentNumaNode = a5;
  v41 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = a4;
  v9 = (unsigned int)a3;
  v47 = 0;
  v39 = 0LL;
  v11 = *(_QWORD *)(Object[5] + 8LL);
  v40 = 0LL;
  if ( v11 )
  {
    v39 = *(_QWORD *)(v11 + 536);
    v40 = *(_QWORD *)(v11 + 600);
    if ( !a5 )
      CurrentNumaNode = CcGetCurrentNumaNode(*(_QWORD *)(v11 + 536), v11);
  }
  if ( !a4 )
    CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread, a2, a3, a4);
  if ( v5
    && v11
    && (*(_DWORD *)(v11 + 152) & 1) == 0
    && (Object[10] & 0x100000) == 0
    && IoPriorityThread >= 2
    && (unsigned __int8)CcCanIWriteStreamEx(v13, v14, (_DWORD)Object, 0x1000000, 0, 4, 0LL)
    && !*(_BYTE *)(CurrentNumaNode + 196) )
  {
    v36 = v9;
    v15 = v9 + *a2;
    v16 = ~*(_DWORD *)(v5 + 4) & (*(_DWORD *)(v5 + 4) + v9);
    v42 = (KSPIN_LOCK *)(v5 + 80);
    NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 80));
    if ( (*(_DWORD *)v5 & 0x20000) == 0 )
      *(_DWORD *)v5 |= 0x20000u;
    Pattern = CcDetermineReadPattern(v5, a2);
    v19 = Pattern;
    if ( !Pattern )
    {
      *(_DWORD *)(v5 + 48) = 0;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_QWORD *)(v5 + 72) = 0LL;
      goto LABEL_15;
    }
    if ( Pattern == 1 || Pattern == 2 )
    {
      v24 = *(_QWORD *)(v5 + 64);
      LODWORD(v22) = 2 * v16;
      if ( v15 + v36 + 2 * v16 < v24 )
        goto LABEL_15;
      v38 = *(_QWORD *)(v5 + 64);
      *(_QWORD *)(v5 + 56) = v15 & 0xFFFFFFFFFFFFF000uLL;
      if ( (__int64)(v15 & 0xFFFFFFFFFFFFF000uLL) >= v24 )
        v38 = -(__int64)v16 & (v16 + v15 - 1);
      v25 = v16;
      v26 = *(_DWORD *)(v5 + 48) + 1;
      *(_DWORD *)(v5 + 48) = v26;
      if ( v26 >= 3 || Pattern == 1 )
        v25 = 2 * v16;
      v23 = v38 - *(_DWORD *)(v5 + 56) + v25;
      if ( v26 >= 3 )
      {
        v27 = *(unsigned int *)(v5 + 92);
        if ( (_DWORD)v27 )
        {
          v34 = v27 * v46 * v26;
          v22 = (v34 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
          v35 = v34 / 0x64;
          if ( v35 > 0xFFFFFFFF )
            v35 = 0xFFFFFFFFLL;
          if ( v35 > v23 )
            v23 = v35;
        }
      }
    }
    else
    {
      if ( Pattern != 3 || (v37 = 2LL * *v18 - *(_QWORD *)(v5 + 32), v37 < 0) )
      {
LABEL_15:
        if ( (xmmword_140FC0C10 & 0x20000) != 0 )
          CcPerfLogScheduleReadAhead(0, (_DWORD)Object, (_DWORD)v18, v46, v16, v19, v47);
        v20 = NewIrql;
        v21 = v42;
        goto LABEL_35;
      }
      LODWORD(v22) = (v37 & 0xFFF) + v46;
      LODWORD(v37) = v37 & 0xFFFFF000;
      v46 = v22;
      *(_QWORD *)(v5 + 56) = v37;
      v23 = (v22 + 4095) & 0xFFFFF000;
    }
    v47 = 1;
    *(_DWORD *)(v5 + 52) = v23;
    if ( (*(_DWORD *)v5 & 0x10000) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
      {
        CcChargeThreadForReadAhead((_DWORD)Object, v22, v23, v19, (__int64)CurrentThread);
        LODWORD(v18) = (_DWORD)a2;
      }
      goto LABEL_15;
    }
    *(_DWORD *)v5 |= 0x10000u;
    *(_DWORD *)v5 ^= (*(_DWORD *)v5 ^ ((unsigned int)PsGetPagePriorityThread(KeGetCurrentThread()) << 18)) & 0x1C0000;
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 80), NewIrql);
    if ( (int)CcAllocateWorkQueueEntry(v39, v40, CurrentNumaNode, &v41) < 0 )
    {
      v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 80));
      *(_DWORD *)v5 &= ~0x10000u;
      v20 = v30;
      v21 = (KSPIN_LOCK *)(v5 + 80);
LABEL_35:
      KeReleaseSpinLock(v21, v20);
      return;
    }
    v31 = v41;
    if ( (xmmword_140FC0C10 & 0x20000) != 0 )
      CcPerfLogScheduleReadAhead(v41, (_DWORD)Object, (_DWORD)a2, v46, v16, v19, 1);
    if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
      CcChargeThreadForReadAhead((_DWORD)Object, v28, v29, v19, (__int64)CurrentThread);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v39 + 768), &LockHandle);
    ++*(_DWORD *)(v11 + 4);
    ++*(_DWORD *)(v11 + 544);
    *(_DWORD *)(v11 + 152) |= 0x4000u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(v5 + 112) = v31;
    *(_DWORD *)(v31 + 128) = 1;
    *(_QWORD *)(v31 + 16) = Object;
    *(_QWORD *)(v31 + 24) = 0LL;
    IoReferenceIoAttributionFromThread(CurrentThread, v31 + 24, v32, v33);
    CcPostWorkQueue(v31, CurrentNumaNode + 88);
  }
}
