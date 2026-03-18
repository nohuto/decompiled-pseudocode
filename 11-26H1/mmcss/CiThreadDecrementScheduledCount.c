/*
 * XREFs of CiThreadDecrementScheduledCount @ 0x14000F260
 * Callers:
 *     CiProcessSuspend @ 0x140001070 (CiProcessSuspend.c)
 *     CiThreadCleanup @ 0x14000EEF0 (CiThreadCleanup.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x14000F090 (CiSystemAcquirePushLock.c)
 *     CiNdisUpdateThrottleState @ 0x14000F5F0 (CiNdisUpdateThrottleState.c)
 */

__int64 __fastcall CiThreadDecrementScheduledCount(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    CiSystemAcquirePushLock((__int64)&WPP_MAIN_CB.Queue);
    if ( !--LODWORD(WPP_MAIN_CB.DeviceExtension) )
      CiNdisUpdateThrottleState();
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
