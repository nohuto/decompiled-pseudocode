/*
 * XREFs of IpmiLibReadOneByte @ 0x140722044
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x14072263C (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x14072278C (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x1407229B0 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpKcsSpinRegister @ 0x140722B9C (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibReadOneByte(__int64 a1, unsigned __int8 a2)
{
  if ( LOBYTE(WheapConfigTableLock.RelativeTimerBias) )
    return __inbyte(a2 * LOBYTE(WheapConfigTableLock.Queue) + LOWORD(WheapConfigTableLock.WaitBlock[0].WaitListEntry.Flink));
  else
    return *((_BYTE *)&WheapConfigTableLock.WaitBlock[0].WaitListEntry.Flink->Flink
           + a2 * (unsigned int)LOBYTE(WheapConfigTableLock.Queue));
}
