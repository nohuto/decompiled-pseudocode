/*
 * XREFs of PopLogDisabledSleepReason @ 0x14094512C
 * Callers:
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1409450A8 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x140945880 (PopLogSleepDisabled.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 PopLogDisabledSleepReason()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  unsigned int v2; // esi
  _KSCB *QueuedScb; // rax
  __int64 v5; // rbp
  __int64 Pool2; // rax
  void *v7; // rsi
  _KSCB *v8; // rcx
  _DWORD *v9; // r8

  v0 = 0;
  v1 = 0;
  v2 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)stru_140F12420.TracingPrivate);
  PopRemoveReasonRecordByReasonCode(13LL);
  QueuedScb = stru_140F12420.QueuedScb;
  if ( (_KSCB **)stru_140F12420.QueuedScb != &stru_140F12420.QueuedScb )
  {
    do
    {
      v1 |= HIDWORD(QueuedScb->MaxQuotaCycleTarget);
      ++v2;
      QueuedScb = (_KSCB *)QueuedScb->GenerationCycles;
    }
    while ( QueuedScb != (_KSCB *)&stru_140F12420.QueuedScb );
    if ( v1 )
    {
      v5 = 8LL * v2;
      Pool2 = ExAllocatePool2(0x100uLL);
      v7 = (void *)Pool2;
      if ( Pool2 )
      {
        v8 = stru_140F12420.QueuedScb;
        v9 = (_DWORD *)Pool2;
        while ( v8 != (_KSCB *)&stru_140F12420.QueuedScb )
        {
          *v9 = v8->MaxQuotaCycleTarget;
          v9 += 2;
          *(v9 - 1) = HIDWORD(v8->MaxQuotaCycleTarget);
          v8 = (_KSCB *)v8->GenerationCycles;
        }
        v0 = PopLogSleepDisabled(13LL, v1, Pool2, v5);
        ExFreePoolWithTag(v7, 0x66756263u);
      }
      else
      {
        v0 = -1073741670;
      }
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)stru_140F12420.TracingPrivate);
  return v0;
}
