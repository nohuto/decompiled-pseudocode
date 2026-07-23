/*
 * XREFs of CcAsyncReadWorker @ 0x14038A130
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x14038BDB0 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcFindNextWorkQueueEntry @ 0x1403870A0 (CcFindNextWorkQueueEntry.c)
 *     CcPostWorkQueueAsyncRead @ 0x140389A38 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140389F7C (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcAsyncReadPrefetch @ 0x14038A7BC (CcAsyncReadPrefetch.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14039867C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x1403A05A8 (CcCompleteAsyncRead.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcAsyncReadWorker(_QWORD *StartContext)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  unsigned int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // r12
  int v7; // edi
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  bool v13; // zf
  void *v14; // rax
  unsigned int v15; // esi
  NTSTATUS v16; // eax
  __int64 v17; // r14
  PSLIST_ENTRY v18; // rdi
  _SLIST_ENTRY *v19; // rcx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  unsigned int v22; // edx
  __int64 v23; // rcx
  AutoBoost *v24; // rax
  __int64 v25; // rcx
  AutoBoost *v26; // rdi
  __int64 v27; // rsi
  _QWORD *v28; // r8
  _SLIST_ENTRY *NextWorkQueueEntry; // rdi
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  unsigned __int64 v32; // rtt
  struct _KLOCK_ENTRIES *v33; // r9
  _SLIST_ENTRY **p_Next; // rcx
  _SLIST_ENTRY *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  AutoBoost *v38; // rax
  AutoBoost *v39; // rdi
  signed __int64 v40; // rax
  signed __int64 v41; // rdx
  unsigned __int64 v42; // rtt
  signed __int64 v43; // rax
  signed __int64 v44; // rdx
  unsigned __int64 v45; // rtt
  struct _KLOCK_ENTRIES *v46; // r9
  AutoBoost *v47; // rax
  AutoBoost *v48; // rdi
  __int64 v49; // r8
  struct _KLOCK_ENTRIES *v50; // r9
  _SLIST_ENTRY *Next; // rax
  int v52; // [rsp+40h] [rbp-C0h]
  __int64 v53; // [rsp+48h] [rbp-B8h]
  unsigned int v54; // [rsp+50h] [rbp-B0h]
  unsigned int v55; // [rsp+54h] [rbp-ACh]
  __int64 v56; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h]
  __int64 v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h]
  __int64 v62; // [rsp+88h] [rbp-78h]
  PVOID Object[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A0h] [rbp-60h] BYREF
  PSLIST_ENTRY v66[64]; // [rsp+100h] [rbp+0h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+300h] [rbp+200h] BYREF

  if ( !StartContext )
    return;
  v1 = StartContext[7];
  v2 = StartContext[9];
  v3 = 0;
  v4 = StartContext[8];
  v5 = 0LL;
  v56 = 0LL;
  v7 = 3;
  v60 = v1;
  v54 = *((_DWORD *)StartContext + 10);
  v55 = *((_DWORD *)StartContext + 9);
  v57 = v2;
  v61 = v4;
  memset_0(v66, 0, sizeof(v66));
  memset_0(ListEntry, 0, sizeof(ListEntry));
  v8 = v55;
  v9 = 0LL;
  v10 = *(_QWORD *)(v2 + 272);
  v59 = v55;
  v11 = v10 + 24LL * v55;
  v62 = 3LL * v55;
  v53 = v11;
  v58 = *(_QWORD *)(v2 + 280) + 404LL * v55;
  if ( CcEnablePerVolumeLazyWriter )
    v12 = (unsigned __int64 *)(v4 + 1160);
  else
    v12 = (unsigned __int64 *)(v1 + 1224);
  v13 = *(_DWORD *)(v2 + 4) == 1;
  Object[0] = (PVOID)(v10 + 24LL * v55);
  if ( v13 )
    v14 = (void *)(v1 + 1304);
  else
    v14 = (void *)(v61 + 1176);
  Object[1] = v14;
  while ( 1 )
  {
    if ( v3 < 0x3F && *(_QWORD *)(*(_QWORD *)(v2 + 256) + 16 * v8) != *(_QWORD *)(v2 + 256) + 16 * v8 )
    {
      v52 = 0;
LABEL_30:
      v24 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, v9);
      v26 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(v12, v24, (__int64)v12);
      if ( v26 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          *((_BYTE *)v26 + 33) |= 2u;
        else
          *((_BYTE *)v26 + 10) = 1;
      }
      v27 = 16 * v59;
      while ( 1 )
      {
        v28 = (_QWORD *)(v27 + *(_QWORD *)(v2 + 256));
        if ( (_QWORD *)*v28 == v28 )
        {
LABEL_51:
          _m_prefetchw(v12);
          v40 = *v12;
          v41 = *v12 - 16;
          if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v41 = 0LL;
          if ( (v40 & 2) != 0
            || (v42 = *v12, v42 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v41, v40)) )
          {
            ExfReleasePushLock(v12);
          }
          KeAbPostRelease((unsigned __int64)v12);
          v9 = 0LL;
          if ( v5 )
          {
            *(_DWORD *)(v58 + 4LL * *(unsigned int *)(v5 + 40)) = 0;
            *(_QWORD *)v5 = 0LL;
            ExQueueWorkItemToPartition((_QWORD *)v5, 0, *(_DWORD *)(v2 + 24));
            v9 = 0LL;
            v5 = 0LL;
            v56 = 0LL;
          }
LABEL_57:
          v7 = v52;
LABEL_58:
          v11 = v53;
          goto LABEL_26;
        }
        if ( v3 >= 0x3F )
        {
          _m_prefetchw(v12);
          v43 = *v12;
          v44 = *v12 - 16;
          if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v44 = 0LL;
          if ( (v43 & 2) != 0
            || (v45 = *v12, v45 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v44, v43)) )
          {
            ExfReleasePushLock(v12);
          }
          KeAbPostRelease((unsigned __int64)v12);
          CcShouldSpinAsyncReadWorkerThread(v60, (_QWORD *)v2, &v56, (struct _KLOCK_ENTRIES *)v55);
          v47 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, v46);
          v48 = v47;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
            ExfAcquirePushLockExclusiveEx(v12, v47, (__int64)v12);
          v5 = v56;
          if ( v48 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              *((_BYTE *)v48 + 33) |= 2u;
            else
              *((_BYTE *)v48 + 10) = 1;
          }
          goto LABEL_51;
        }
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v25, v2, v28);
        _m_prefetchw(v12);
        v30 = *v12;
        v31 = *v12 - 16;
        if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v31 = 0LL;
        if ( (v30 & 2) != 0
          || (v32 = *v12, v32 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v31, v30)) )
        {
          ExfReleasePushLock(v12);
        }
        KeAbPostRelease((unsigned __int64)v12);
        if ( !(unsigned __int8)CcAsyncReadPrefetch(NextWorkQueueEntry) )
          break;
        p_Next = &NextWorkQueueEntry[3].Next->Next;
        v35 = *p_Next;
        if ( *p_Next )
        {
          v36 = v58;
          v37 = v3++;
          v66[v37] = v35;
          ListEntry[v37] = NextWorkQueueEntry;
          _InterlockedIncrement((volatile signed __int32 *)(v36 + 4LL * v54));
          if ( v3 >= 0x3F )
            v53 = 0LL;
        }
        else
        {
          ExFreePoolWithTag(p_Next, 0x73416343u);
          Next = NextWorkQueueEntry[1].Next;
          LODWORD(NextWorkQueueEntry[8].Next) = 6;
          NextWorkQueueEntry[3].Next = 0LL;
          if ( LODWORD(Next[33].Next) == 1 && *((_DWORD *)&NextWorkQueueEntry[2].Next + 2) <= 0x20000u )
            break;
          CcPostWorkQueueAsyncRead(NextWorkQueueEntry, 0LL, v49, v50);
        }
LABEL_46:
        v38 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, v33);
        v39 = v38;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v12, v38, (__int64)v12);
        if ( v39 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            *((_BYTE *)v39 + 33) |= 2u;
          else
            *((_BYTE *)v39 + 10) = 1;
        }
      }
      CcCompleteAsyncRead(NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      goto LABEL_46;
    }
    if ( v3 )
    {
      v15 = MmWaitMultipleForCacheManagerPrefetch(v66, v3, v11);
      if ( v15 < v3 )
      {
        v52 = 1;
        v9 = 0LL;
        _mm_lfence();
        v17 = v15;
        v18 = ListEntry[v17];
        if ( !v18 || (v19 = v18[3].Next) == 0LL )
        {
          v2 = v57;
          goto LABEL_57;
        }
        ExFreePoolWithTag(v19, 0x73416343u);
        LODWORD(v18[8].Next) = 6;
        v18[3].Next = 0LL;
        v66[v15] = 0LL;
        ListEntry[v15] = 0LL;
        if ( LODWORD(v18[1].Next[33].Next) == 1 && *((_DWORD *)&v18[2].Next + 2) <= 0x20000u )
        {
          CcCompleteAsyncRead(v18);
          CcFreeWorkQueueEntry(v18);
        }
        else
        {
          CcPostWorkQueueAsyncRead(v18, 0LL, v20, v21);
        }
        v22 = --v3;
        while ( v15 < v22 )
        {
          v66[v17++] = v66[++v15];
          v66[v17 + 63] = ListEntry[v15];
        }
        v23 = v58;
        v9 = 0LL;
        v11 = v53;
        v2 = v57;
        v7 = 1;
        v66[v15] = 0LL;
        ListEntry[v15] = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v23 + 4LL * v54));
        if ( !v53 )
        {
          v11 = *(_QWORD *)(v2 + 272) + 8 * v62;
          v53 = v11;
        }
        goto LABEL_26;
      }
      v52 = 0;
      goto LABEL_30;
    }
    v16 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    v9 = 0LL;
    if ( v16 )
    {
      if ( v16 == 1 )
        v7 = 2;
    }
    else
    {
      v7 = 0;
    }
    v52 = v7;
    if ( !v7 )
      goto LABEL_30;
    if ( v7 == 1 )
      goto LABEL_58;
    v11 = v53;
    if ( v7 == 2 )
      break;
LABEL_26:
    v8 = v59;
    if ( v54 && !v3 )
      return;
  }
  if ( !v54 )
  {
    ExFreePoolWithTag(StartContext, 0x71576343u);
    CcDereferencePartitionAndPrivateVolumeCacheMap(v60, v61);
  }
}
