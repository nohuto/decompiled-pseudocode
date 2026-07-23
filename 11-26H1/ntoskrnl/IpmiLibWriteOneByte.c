/*
 * XREFs of IpmiLibWriteOneByte @ 0x140722080
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x14072263C (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x14072278C (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x1407229B0 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpHandleReadInterrupt @ 0x140722DCC (IpmiLibpHandleReadInterrupt.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibWriteOneByte(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 result; // al
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( LOBYTE(WheapConfigTableLock.RelativeTimerBias) )
  {
    result = a3;
    __outbyte(
      a2 * LOBYTE(WheapConfigTableLock.Queue) + LOWORD(WheapConfigTableLock.WaitBlock[0].WaitListEntry.Flink),
      a3);
  }
  else
  {
    result = WheapConfigTableLock.WaitBlockFill4[0];
    *((_BYTE *)&WheapConfigTableLock.WaitBlock[0].WaitListEntry.Flink->Flink
    + LOBYTE(WheapConfigTableLock.Queue) * (unsigned int)a2) = a3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}
