/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x180016B50
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpFreeHeapSlow @ 0x180080730 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x180080A04 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18008FE38 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackRemove @ 0x180120B5C (RtlStackDbStackRemove.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014F6F8 (RtlpHpStackTraceAllocRemove.c)
 */

void __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, __int64 a2)
{
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // eax
  char *v6; // r8
  __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v6 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v6 )
      {
        if ( v6 )
          *(_QWORD *)v6 = &RtlpHpStackTrackingContext;
        break;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpHpStackTrackingContext, 17LL, 0LL) )
    RtlpAcquireSRWLockSharedContended(&RtlpHpStackTrackingContext);
  if ( (dword_1801C68A8 & 1) != 0
    && (dword_1801C68A8 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 0LL, &v8) >= 0 )
  {
    v7 = RtlpHpStackTraceAllocRemove(v8, a2);
    if ( v7 )
      RtlStackDbStackRemove(&qword_1801C68B0, v7);
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
