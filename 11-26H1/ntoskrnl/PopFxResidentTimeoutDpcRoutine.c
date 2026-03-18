/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140203110
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140203EF0 (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x14021A008 (PopFxArmResidentTimer.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = ExQueueWorkItemEx(&stru_140F12420.ApcStateFill[40], 1LL, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
  {
    LOBYTE(v1) = 1;
    return PopFxArmResidentTimer(v1);
  }
  return result;
}
