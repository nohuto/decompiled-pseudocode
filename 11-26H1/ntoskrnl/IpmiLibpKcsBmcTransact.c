/*
 * XREFs of IpmiLibpKcsBmcTransact @ 0x14071D904
 * Callers:
 *     IpmiLibpKcsRequestAndReceive @ 0x14071DC74 (IpmiLibpKcsRequestAndReceive.c)
 * Callees:
 *     IpmiLibpKcsHandleError @ 0x14071D9AC (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x14071DAFC (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x14071DD20 (IpmiLibpKcsSendRequestToBMC.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IpmiLibpKcsBmcTransact(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // rcx
  int v7; // edi
  _WORD *v8; // r8
  __int64 v9; // rdx

  v4 = *a2;
  if ( (unsigned __int16)v4 >= 0x122u )
    v4 = 290LL;
  v7 = IpmiLibpKcsSendRequestToBMC(a1, (char *)a2 + 5, v4, a3);
  if ( !v7 )
  {
    v8 = a2 + 1;
    if ( a2[1] > 0x122u )
      *v8 = 290;
    v7 = IpmiLibpKcsReceiveResponseFromBmc(v6, (char *)a2 + 295, v8, a3);
  }
  if ( v7 < 0 )
  {
    v7 = IpmiLibpKcsHandleError(v6, a3);
    if ( v7 < 0 )
    {
      if ( WheapConfigTableLock.Timer.Header.WaitListHead.Flink )
        guard_dispatch_icall_no_overrides((_ULARGE_INTEGER)WheapConfigTableLock.Timer.DueTime.QuadPart, v9);
    }
  }
  return (unsigned int)v7;
}
