/*
 * XREFs of RIMApiSetIsRemoteConnection @ 0x1401C45C8
 * Callers:
 *     RIMOpenDev @ 0x1400944B4 (RIMOpenDev.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x140095B10 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x140095B60 (RIMDirectStartStopDeviceRead.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401BB0E0 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMApiSetIsRemoteConnection(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // ebx

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 32) == 1 )
  {
    v9 = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 316)
      || *(_DWORD *)(W32GetUserSessionState(v7, v6, v8) + 356) == 1 )
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v9;
}
