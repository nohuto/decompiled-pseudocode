/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x18002BA50
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x1800185E0 (RtlpFreeNTHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpFreeHeapSlow @ 0x180089330 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x1800B0E90 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18006F9E8 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackRemove @ 0x180120DAC (RtlStackDbStackRemove.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014F848 (RtlpHpStackTraceAllocRemove.c)
 */

__int64 __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, __int64 a2)
{
  char *v4; // rdx
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // eax
  char *v7; // r8
  signed __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v7 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v7 )
      {
        v4 = &SchedulerSharedDataSlot[8 * i];
        if ( v7 )
          *(_QWORD *)v7 = &RtlpHpStackTrackingContext;
        break;
      }
    }
  }
  v8 = _InterlockedCompareExchange64(&RtlpHpStackTrackingContext, 17LL, 0LL);
  if ( v8 )
    RtlpAcquireSRWLockSharedContended(&RtlpHpStackTrackingContext, v4, v8);
  if ( (dword_1801C7858 & 1) != 0
    && (dword_1801C7858 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 0LL, &v11) >= 0 )
  {
    v10 = RtlpHpStackTraceAllocRemove(v11, a2);
    if ( v10 )
      RtlStackDbStackRemove(&qword_1801C7860, v10);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
