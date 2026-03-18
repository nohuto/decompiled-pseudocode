/*
 * XREFs of UserGetDelayedSwitchAction @ 0x1401EA6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetDelayedSwitchAction(__int64 a1)
{
  return *(unsigned int *)(W32GetUserGdiSessionState(a1) + 16);
}
