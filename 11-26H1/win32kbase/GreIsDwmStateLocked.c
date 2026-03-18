/*
 * XREFs of GreIsDwmStateLocked @ 0x1400B3030
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1400B2E60 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1400B2FC0 (UserReferenceDwmApiPort.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsDwmStateLocked(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return ExIsResourceAcquiredSharedLite((PERESOURCE)(**(_QWORD **)(SessionState + 88) + 520LL)) != 0;
}
