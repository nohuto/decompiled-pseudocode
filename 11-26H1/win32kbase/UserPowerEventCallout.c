/*
 * XREFs of UserPowerEventCallout @ 0x140111CEC
 * Callers:
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 * Callees:
 *     QueuePowerRequest @ 0x140111D40 (QueuePowerRequest.c)
 */

__int64 __fastcall UserPowerEventCallout(__int64 a1, int a2, int a3)
{
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 2728) && *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
    return QueuePowerRequest(a1, 0LL);
  else
    return 3221225473LL;
}
