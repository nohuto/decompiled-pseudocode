/*
 * XREFs of PerfInfoLogIpiReceive @ 0x14032E720
 * Callers:
 *     KiIpiProcessRequest @ 0x14032E310 (KiIpiProcessRequest.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x14032D7A0 (EtwTraceTimedEvent.c)
 */

__int64 __fastcall PerfInfoLogIpiReceive(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]

  v5 = a2;
  v4 = a3;
  return EtwTraceTimedEvent(3953, 0x40400000u, (__int64)&v4, 12, 5245442, a1);
}
