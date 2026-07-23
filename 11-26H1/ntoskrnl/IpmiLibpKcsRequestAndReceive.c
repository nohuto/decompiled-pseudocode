/*
 * XREFs of IpmiLibpKcsRequestAndReceive @ 0x140722904
 * Callers:
 *     IpmiLibRequestReceive @ 0x1407224CC (IpmiLibRequestReceive.c)
 * Callees:
 *     IpmiLibpGetTimeout @ 0x14072253C (IpmiLibpGetTimeout.c)
 *     IpmiLibpKcsBmcTransact @ 0x140722594 (IpmiLibpKcsBmcTransact.c)
 *     IpmiLibKcsIpmiMessageUnpack @ 0x140722C9C (IpmiLibKcsIpmiMessageUnpack.c)
 *     IpmiLibpKcsIpmiMessagePack @ 0x140722D14 (IpmiLibpKcsIpmiMessagePack.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IpmiLibpKcsRequestAndReceive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  LONGLONG Timeout; // rbx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int16 v9[296]; // [rsp+20h] [rbp-268h] BYREF

  memset_0(v9, 0, 0x24AuLL);
  Timeout = IpmiLibpGetTimeout(v5, (unsigned int)WheapConfigTableLock.Timer.TimerListEntry.Flink);
  result = IpmiLibpKcsIpmiMessagePack(v9, a2);
  if ( (int)result >= 0 )
  {
    result = IpmiLibpKcsBmcTransact(v8, v9, Timeout);
    if ( (int)result >= 0 && (_DWORD)result != 258 )
      return IpmiLibKcsIpmiMessageUnpack(a3, v9);
  }
  return result;
}
