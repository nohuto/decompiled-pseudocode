/*
 * XREFs of EtwpCovSampLookasideGrow @ 0x1406C8AEC
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x14083075C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140830C70 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampLookasideGrow(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  struct _SLIST_ENTRY *v6; // rdi
  KIRQL v7; // r14
  _SLIST_ENTRY *v8; // rax
  _SLIST_ENTRY *v9; // rcx

  v2 = *(_QWORD *)(a2 + 32);
  KeGetCurrentIrql();
  if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
  {
    v6 = (struct _SLIST_ENTRY *)guard_dispatch_icall_no_overrides(a1, a2);
    if ( v6 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 632));
      if ( *(_DWORD *)(a2 + 40) && *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
        ++*(_DWORD *)(v2 + 72);
        v8 = *(_SLIST_ENTRY **)(v2 + 40);
        v9 = (struct _SLIST_ENTRY *)((char *)v6 + 24);
        if ( v8->Next != (_SLIST_ENTRY *)(v2 + 32) )
          __fastfail(3u);
        v9->Next = (_SLIST_ENTRY *)(v2 + 32);
        v6[2].Next = v8;
        v8->Next = v9;
        *(_QWORD *)(v2 + 40) = v9;
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, v6);
        v6 = 0LL;
        v5 = 0;
      }
      else
      {
        v5 = 255;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 632), v7);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x56777445u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 255;
  }
  return v5;
}
