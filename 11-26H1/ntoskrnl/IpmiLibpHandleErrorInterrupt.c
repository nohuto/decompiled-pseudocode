/*
 * XREFs of IpmiLibpHandleErrorInterrupt @ 0x140722D68
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x14072263C (IpmiLibpKcsHandleError.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IpmiLibpHandleErrorInterrupt()
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( (WheapConfigTableLock.Timer.Header.Type & 1) == 0 )
    return 3221225474LL;
  if ( !WheapConfigTableLock.Timer.Header.WaitListHead.Blink )
    return 3221225485LL;
  v1 = guard_dispatch_icall_no_overrides(
         (_ULARGE_INTEGER)WheapConfigTableLock.Timer.DueTime.QuadPart,
         &WheapConfigTableLock.SwapListEntry + 1);
  v2 = -1073741811;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
