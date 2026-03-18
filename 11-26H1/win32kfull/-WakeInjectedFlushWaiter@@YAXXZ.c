/*
 * XREFs of ?WakeInjectedFlushWaiter@@YAXXZ @ 0x14020F290
 * Callers:
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1401E2640 (EditionForegroundQAccessibleToMouseProducer.c)
 * Callees:
 *     <none>
 */

void __fastcall WakeInjectedFlushWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax

  if ( (unsigned __int8)IsInputThread(a1, a2, a3) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v4, v3) + 19264) )
    {
      UserSessionState = W32GetUserSessionState(v6, v5);
      KeSetEvent(*(PRKEVENT *)(UserSessionState + 19288), 1, 0);
    }
  }
}
