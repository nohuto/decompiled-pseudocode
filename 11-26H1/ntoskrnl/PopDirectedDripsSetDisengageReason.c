/*
 * XREFs of PopDirectedDripsSetDisengageReason @ 0x1404833B0
 * Callers:
 *     PnpRequestDeviceAction @ 0x140482588 (PnpRequestDeviceAction.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140603B60 (PopDirectedDripsStartDisengageTimer.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1407DE0A0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDirectedDripsNotify @ 0x140B08694 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x140483414 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsSetDisengageReason(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ett

  v1 = 1 << a1;
  _m_prefetchw(dword_140F12B58);
  v2 = _InterlockedOr(dword_140F12B58, 1 << a1);
  _m_prefetchw(dword_140F12AC0);
  LODWORD(result) = dword_140F12AC0[0];
  do
  {
    v4 = (unsigned int)result;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange(dword_140F12AC0, result, result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) != 0 && (v2 & v1) == 0 )
    return PopQueueDirectedDripsWork(v4, 2LL);
  return result;
}
