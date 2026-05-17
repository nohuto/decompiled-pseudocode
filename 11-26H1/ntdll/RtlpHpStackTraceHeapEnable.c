/*
 * XREFs of RtlpHpStackTraceHeapEnable @ 0x1800FCAB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapEnable(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( !a2
      && ((RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext, 0LL), (dword_1801C7858 & 1) == 0)
       || (dword_1801C7858 & 2) == 0)
      || (_InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x40u), !a2) )
    {
      RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
    }
  }
  return 0LL;
}
