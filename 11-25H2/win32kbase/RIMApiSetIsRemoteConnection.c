/*
 * XREFs of RIMApiSetIsRemoteConnection @ 0x14012C31C
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x14012C2B0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x14012C380 (RIMDirectStartStopDeviceRead.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMOpenDev @ 0x1401D57E0 (RIMOpenDev.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401F0B64 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMApiSetIsRemoteConnection(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 32) == 1 )
  {
    v6 = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(v3, v2) + 316) || *(_DWORD *)(W32GetUserSessionState(v5, v4) + 356) == 1 )
      return 1;
  }
  else
  {
    return 0;
  }
  return v6;
}
