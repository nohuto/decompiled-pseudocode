/*
 * XREFs of IpmiLibReadOneByte @ 0x14071D3B4
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x14071D9AC (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x14071DAFC (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x14071DD20 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpKcsSpinRegister @ 0x14071DF0C (IpmiLibpKcsSpinRegister.c)
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
