/*
 * XREFs of RtlAbPreAcquire @ 0x1800BD6D0
 * Callers:
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlTryAcquireSRWLockShared @ 0x180050CE0 (RtlTryAcquireSRWLockShared.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlAbPreAcquire(__int64 a1, _QWORD *a2)
{
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int i; // eax
  _QWORD *result; // rax

  if ( a2 )
    return a2;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        a2 = &SchedulerSharedDataSlot[i];
        break;
      }
    }
  }
  result = a2;
  if ( a2 )
    *a2 = a1;
  return result;
}
