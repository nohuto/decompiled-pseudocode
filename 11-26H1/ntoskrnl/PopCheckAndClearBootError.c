/*
 * XREFs of PopCheckAndClearBootError @ 0x140CCFFDC
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopTraceBootError @ 0x140609AC8 (PopTraceBootError.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlGetSystemBootStatus @ 0x140805960 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x140B0B080 (RtlSetSystemBootStatus.c)
 */

NTSTATUS PopCheckAndClearBootError()
{
  NTSTATUS result; // eax
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v1 = 0LL;
  result = RtlGetSystemBootStatus(13, (__int64)&v1, 20);
  if ( result >= 0 )
  {
    if ( HIDWORD(v1) )
    {
      PopTraceBootError();
      v2 = 0;
      v1 = 0LL;
      return RtlSetSystemBootStatus(13, (__int64)&v1, 20, 0LL);
    }
  }
  return result;
}
