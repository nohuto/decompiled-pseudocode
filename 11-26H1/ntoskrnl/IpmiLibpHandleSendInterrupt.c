/*
 * XREFs of IpmiLibpHandleSendInterrupt @ 0x14071E220
 * Callers:
 *     IpmiLibpKcsSendRequestToBMC @ 0x14071DD20 (IpmiLibpKcsSendRequestToBMC.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IpmiLibpHandleSendInterrupt()
{
  __int64 result; // rax

  if ( !WheapConfigTableLock.Timer.Header.WaitListHead.Blink )
    return 3221225485LL;
  result = guard_dispatch_icall_no_overrides(
             (_ULARGE_INTEGER)WheapConfigTableLock.Timer.DueTime.QuadPart,
             &WheapConfigTableLock.SwapListEntry + 1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
