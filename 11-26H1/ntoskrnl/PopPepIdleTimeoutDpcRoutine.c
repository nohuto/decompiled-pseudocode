/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x140202E70
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140203EF0 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x14021A6DC (PopPepArmIdleTimer.c)
 */

__int64 PopPepIdleTimeoutDpcRoutine()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = ExQueueWorkItemEx(&qword_140F0B080, 1LL, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
  {
    LOBYTE(v1) = 1;
    return PopPepArmIdleTimer(v1);
  }
  return result;
}
