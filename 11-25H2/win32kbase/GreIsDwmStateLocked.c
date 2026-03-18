/*
 * XREFs of GreIsDwmStateLocked @ 0x140057BF0
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x140057B20 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x140057B80 (UserReferenceDwmApiPort.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsDwmStateLocked(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return ExIsResourceAcquiredSharedLite((PERESOURCE)(**(_QWORD **)(SessionState + 88) + 520LL)) != 0;
}
