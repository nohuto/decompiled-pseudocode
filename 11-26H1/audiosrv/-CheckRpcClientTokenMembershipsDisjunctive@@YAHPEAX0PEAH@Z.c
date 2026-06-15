/*
 * XREFs of ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x18006A430
 * Callers:
 *     s_mmeNotifyDeviceStateChanged @ 0x18006A170 (s_mmeNotifyDeviceStateChanged.c)
 *     s_mmeNotifyDefaultDeviceChanged @ 0x18006A2D0 (s_mmeNotifyDefaultDeviceChanged.c)
 *     s_mmeNotifyDeviceAdded @ 0x180106C60 (s_mmeNotifyDeviceAdded.c)
 *     s_mmeNotifyDeviceRemoved @ 0x180106D50 (s_mmeNotifyDeviceRemoved.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckRpcClientTokenMembershipsDisjunctive(void *a1, void *a2, int *a3)
{
  PSID v3; // rsi
  PSID v4; // rbp
  unsigned int v6; // ebx

  v3 = AudioEndpointBuilderSid;
  v4 = AudiosrvSid;
  v6 = 0;
  if ( !RpcImpersonateClient(0LL) )
  {
    v6 = CheckTokenMembership(0LL, v4, a3);
    if ( v6 && !*a3 )
      v6 = CheckTokenMembership(0LL, v3, a3);
    RpcRevertToSelf();
  }
  return v6;
}
