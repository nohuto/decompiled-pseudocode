/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x140911650
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeRundownQueueEx @ 0x1403DF4A8 (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     EtwpSendNoReplyReply @ 0x14082EAE4 (EtwpSendNoReplyReply.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpRundownNotifications @ 0x140914A30 (EtwpRundownNotifications.c)
 *     EtwpUnreferenceDataBlock @ 0x140914C04 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1409BE87C (EtwpReleaseProviderTraitsReference.c)
 *     EtwpReleaseQueueEntry @ 0x140A8BB28 (EtwpReleaseQueueEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 v22; // r8
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  __int64 v25; // rtt
  __int16 v26; // ax
  volatile __int64 *v27; // rbx
  __int64 v28; // rbp
  __int64 *v29; // rdi
  __int64 result; // rax
  AutoBoost *v31; // rax
  void *v32; // rdx
  AutoBoost *v33; // rbx
  __int64 *v34; // rdx
  __int64 **v35; // rax
  void *v36; // rbp
  __int64 v37; // rax
  _QWORD *v38; // rsi
  _QWORD *v39; // rdi
  _QWORD *v40; // rbx

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
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( v6 )
            {
              *(_QWORD *)(v6 + 672) = 0LL;
              _m_prefetchw((const void *)(v6 + 664));
              v23 = *(_QWORD *)(v6 + 664);
              v24 = v23 - 16;
              if ( (v23 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v24 = 0LL;
              if ( (v23 & 2) != 0
                || (v25 = *(_QWORD *)(v6 + 664),
                    v25 != _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 664), v24, v23)) )
              {
                ExfReleasePushLock((_QWORD *)(v6 + 664));
              }
              KeAbPostRelease(v6 + 664);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
            goto LABEL_28;
          }
        }
      }
    }
LABEL_39:
    __fastfail(3u);
  }
  v31 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F03830, 0LL, 0LL, a4);
  v33 = v31;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140F03830, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F03830, v31, (__int64)&stru_140F03830);
  if ( v33 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v33, v32);
    else
      *((_BYTE *)v33 + 10) = 1;
  }
  v34 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 )
    goto LABEL_39;
  v35 = (__int64 **)BugCheckParameter2[1];
  if ( *v35 != BugCheckParameter2 )
    goto LABEL_39;
  *v35 = v34;
  v34[1] = (__int64)v35;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F03830, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F03830.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140F03830);
LABEL_28:
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFFBFu);
  v26 = *((_WORD *)BugCheckParameter2 + 49);
  if ( (v26 & 2) != 0 )
  {
    v27 = BugCheckParameter2 + 6;
    v28 = 4LL;
    do
    {
      v29 = (__int64 *)_InterlockedExchange64(v27, 0LL);
      if ( v29 )
      {
        EtwpSendNoReplyReply(v29[4], (__int128 *)(v4 + 40));
        EtwpReleaseQueueEntry(v29);
      }
      ++v27;
      --v28;
    }
    while ( v28 );
    EtwpRundownNotifications(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference(BugCheckParameter2);
  }
  else
  {
    if ( (v26 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, *((unsigned __int16 *)BugCheckParameter2 + 49), 0LL);
    v36 = (void *)BugCheckParameter2[6];
    v37 = KeRundownQueueEx((__int64)v36, 1, v22);
    v38 = (_QWORD *)v37;
    if ( v37 )
    {
      v39 = (_QWORD *)v37;
      do
      {
        v40 = v39;
        v39 = (_QWORD *)*v39;
        EtwpUnreferenceDataBlock(v40[2]);
        ExFreePoolWithTag(v40, 0);
      }
      while ( v38 != v39 );
    }
    ExFreePoolWithTag(v36, 0);
  }
  result = EtwpUnreferenceGuidEntry(v4);
  if ( v6 )
    return EtwpUnreferenceGuidEntry(v6);
  return result;
}
