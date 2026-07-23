/*
 * XREFs of PopCheckAndClearBootError @ 0x140CD6184
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopTraceBootError @ 0x14060C688 (PopTraceBootError.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlGetSystemBootStatus @ 0x14080B400 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x140B0C7D0 (RtlSetSystemBootStatus.c)
 */

int PopCheckAndClearBootError()
{
  int result; // eax
  __int128 DataBuffer; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  v2 = 0;
  DataBuffer = 0LL;
  result = RtlGetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
  if ( result >= 0 )
  {
    if ( HIDWORD(DataBuffer) )
    {
      PopTraceBootError();
      v2 = 0;
      DataBuffer = 0LL;
      return RtlSetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
    }
  }
  return result;
}
