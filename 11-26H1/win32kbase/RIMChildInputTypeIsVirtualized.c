/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x14018C880
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x140095B60 (RIMDirectStartStopDeviceRead.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401BB0E0 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  _DWORD *i; // rdx

  if ( isChildPartition(a1, a2, a3) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    for ( i = (_DWORD *)(UserSessionState + 276); i != (_DWORD *)(UserSessionState + 316); i += 2 )
    {
      if ( (a1 & i[1]) != 0 && *i )
        return 1;
    }
  }
  return 0;
}
