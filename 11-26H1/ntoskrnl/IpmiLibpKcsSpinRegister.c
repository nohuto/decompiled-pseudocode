/*
 * XREFs of IpmiLibpKcsSpinRegister @ 0x140722B9C
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x14072263C (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x14072278C (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x1407229B0 (IpmiLibpKcsSendRequestToBMC.c)
 * Callees:
 *     IpmiLibReadOneByte @ 0x140722044 (IpmiLibReadOneByte.c)
 *     IpmiLibpDelay @ 0x1407224F4 (IpmiLibpDelay.c)
 *     IpmiLibpGetTimeout @ 0x14072253C (IpmiLibpGetTimeout.c)
 *     IpmiLibpTimeAfter @ 0x140722C5C (IpmiLibpTimeAfter.c)
 */

__int64 __fastcall IpmiLibpKcsSpinRegister(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int Blink; // ebp
  int v5; // r14d
  int v6; // esi
  __int64 v7; // rcx
  LONGLONG Timeout; // rdi
  unsigned __int8 OneByte; // al
  __int64 v10; // rcx
  __int64 v12; // rcx
  LARGE_INTEGER v13; // rcx
  ULONG Blink_high; // edx

  Blink = (unsigned int)WheapConfigTableLock.Timer.TimerListEntry.Blink;
  v5 = 0;
  v6 = a3;
  Timeout = IpmiLibpGetTimeout(a1, HIDWORD(WheapConfigTableLock.Timer.TimerListEntry.Flink));
  while ( 1 )
  {
    ++v5;
    OneByte = IpmiLibReadOneByte(v7, 1u);
    if ( v6 == 1 )
    {
      if ( (OneByte & 1) != 0 )
        return 0LL;
    }
    else
    {
      if ( v6 != 2 )
        return 3221225485LL;
      if ( (OneByte & 2) == 0 )
        return 0LL;
    }
    if ( (unsigned __int8)IpmiLibpTimeAfter(v10, a2) || (unsigned __int8)IpmiLibpTimeAfter(v12, Timeout) )
      break;
    if ( Blink < 0x32 && v5 == 40 )
      Blink += 100;
    Blink_high = HIDWORD(WheapConfigTableLock.Timer.TimerListEntry.Blink);
    if ( Blink < HIDWORD(WheapConfigTableLock.Timer.TimerListEntry.Blink) )
      Blink_high = Blink;
    IpmiLibpDelay(v13, Blink_high);
  }
  return 258LL;
}
