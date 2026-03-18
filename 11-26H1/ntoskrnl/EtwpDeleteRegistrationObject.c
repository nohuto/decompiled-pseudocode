/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x140935AA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeRundownQueueEx @ 0x1403DC2B8 (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     EtwpSendNoReplyReply @ 0x1408288A4 (EtwpSendNoReplyReply.c)
 *     EtwpUnreferenceGuidEntry @ 0x140936B20 (EtwpUnreferenceGuidEntry.c)
 *     EtwpRundownNotifications @ 0x140938E90 (EtwpRundownNotifications.c)
 *     EtwpUnreferenceDataBlock @ 0x140939064 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A851FC (EtwpReleaseProviderTraitsReference.c)
 *     EtwpReleaseQueueEntry @ 0x140A86BA8 (EtwpReleaseQueueEntry.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(
        __int64 *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // r15
  ULONG_PTR v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbx
  struct _KTHREAD *v11; // rax
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rbx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 *v17; // rdx
  __int64 **v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rtt
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r8
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  __int64 v27; // rtt
  __int64 v28; // rdx
  __int64 v29; // r8
  __int16 v30; // ax
  volatile __int64 *v31; // rbx
  __int64 v32; // rbp
  __int64 *v33; // rdi
  __int64 result; // rax
  AutoBoost *v35; // rax
  void *v36; // rdx
  AutoBoost *v37; // rbx
  __int64 *v38; // rdx
  __int64 **v39; // rax
  void *v40; // rbp
  __int64 v41; // rax
  _QWORD *v42; // rsi
  _QWORD *v43; // rdi
  _QWORD *v44; // rbx

  v4 = BugCheckParameter2[4];
  v6 = BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) == 0 )
  {
    if ( v6 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = (AutoBoost *)KeAbPreAcquire(v6 + 664, 0LL, 0LL, a4);
      v10 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 664), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 664), v8, v6 + 664);
      if ( v10 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v10, v9);
        else
          *((_BYTE *)v10 + 10) = 1;
      }
      *(_QWORD *)(v6 + 672) = KeGetCurrentThread();
    }
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = (AutoBoost *)KeAbPreAcquire(v4 + 664, 0LL, 0LL, a4);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 664), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 664), v12, v4 + 664);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    *(_QWORD *)(v4 + 672) = KeGetCurrentThread();
    v15 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) == BugCheckParameter2 )
    {
      v16 = (__int64 **)BugCheckParameter2[1];
      if ( *v16 == BugCheckParameter2 )
      {
        *v16 = v15;
        v15[1] = (__int64)v16;
        v17 = (__int64 *)BugCheckParameter2[2];
        if ( (__int64 *)v17[1] == BugCheckParameter2 + 2 )
        {
          v18 = (__int64 **)BugCheckParameter2[3];
          if ( *v18 == BugCheckParameter2 + 2 )
          {
            *v18 = v17;
            v17[1] = (__int64)v18;
            *(_QWORD *)(v4 + 672) = 0LL;
            _m_prefetchw((const void *)(v4 + 664));
            v19 = *(_QWORD *)(v4 + 664);
            v20 = v19 - 16;
            if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v20 = 0LL;
            if ( (v19 & 2) != 0
              || (v21 = *(_QWORD *)(v4 + 664),
                  v21 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 664), v20, v19)) )
            {
              ExfReleasePushLock((_QWORD *)(v4 + 664));
            }
            KeAbPostRelease(v4 + 664);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23);
            if ( v6 )
            {
              *(_QWORD *)(v6 + 672) = 0LL;
              _m_prefetchw((const void *)(v6 + 664));
              v25 = *(_QWORD *)(v6 + 664);
              v26 = v25 - 16;
              if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v26 = 0LL;
              if ( (v25 & 2) != 0
                || (v27 = *(_QWORD *)(v6 + 664),
                    v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 664), v26, v25)) )
              {
                ExfReleasePushLock((_QWORD *)(v6 + 664));
              }
              KeAbPostRelease(v6 + 664);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29);
            }
            goto LABEL_28;
          }
        }
      }
    }
LABEL_39:
    __fastfail(3u);
  }
  v35 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.1144, 0LL, 0LL, a4);
  v37 = v35;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.1144, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ExpSysDbgLock.1144, v35, (__int64)&ExpSysDbgLock.1144);
  if ( v37 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v37, v36);
    else
      *((_BYTE *)v37 + 10) = 1;
  }
  v38 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 )
    goto LABEL_39;
  v39 = (__int64 **)BugCheckParameter2[1];
  if ( *v39 != BugCheckParameter2 )
    goto LABEL_39;
  *v39 = v38;
  v38[1] = (__int64)v39;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.Spare32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.1144);
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.1144);
LABEL_28:
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFFBFu);
  v30 = *((_WORD *)BugCheckParameter2 + 49);
  if ( (v30 & 2) != 0 )
  {
    v31 = BugCheckParameter2 + 6;
    v32 = 4LL;
    do
    {
      v33 = (__int64 *)_InterlockedExchange64(v31, 0LL);
      if ( v33 )
      {
        EtwpSendNoReplyReply(v33[4], (__int128 *)(v4 + 40));
        EtwpReleaseQueueEntry(v33);
      }
      ++v31;
      --v32;
    }
    while ( v32 );
    EtwpRundownNotifications(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference(BugCheckParameter2);
  }
  else
  {
    if ( (v30 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, *((unsigned __int16 *)BugCheckParameter2 + 49), 0LL);
    v40 = (void *)BugCheckParameter2[6];
    v41 = KeRundownQueueEx((__int64)v40, 1, v24);
    v42 = (_QWORD *)v41;
    if ( v41 )
    {
      v43 = (_QWORD *)v41;
      do
      {
        v44 = v43;
        v43 = (_QWORD *)*v43;
        EtwpUnreferenceDataBlock(v44[2]);
        ExFreePoolWithTag(v44, 0);
      }
      while ( v42 != v43 );
    }
    ExFreePoolWithTag(v40, 0);
  }
  result = EtwpUnreferenceGuidEntry(v4);
  if ( v6 )
    return EtwpUnreferenceGuidEntry(v6);
  return result;
}
