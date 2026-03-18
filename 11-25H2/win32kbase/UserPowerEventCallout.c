/*
 * XREFs of UserPowerEventCallout @ 0x1400E906C
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     QueuePowerRequest @ 0x1400E9340 (QueuePowerRequest.c)
 */

__int64 __fastcall UserPowerEventCallout(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 2728) && *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
    return QueuePowerRequest(a1, 0LL);
  else
    return 3221225473LL;
}
