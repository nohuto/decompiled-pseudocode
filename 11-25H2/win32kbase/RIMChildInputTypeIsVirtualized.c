/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x1401504F0
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x14012C380 (RIMDirectStartStopDeviceRead.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401F0B64 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v6; // rax
  _DWORD *v7; // rdx

  v2 = a1;
  if ( isChildPartition(a1, a2) )
  {
    v6 = (_DWORD *)(W32GetUserSessionState(v4, v3) + 276);
    v7 = v6 + 10;
    while ( v6 != v7 )
    {
      if ( (v2 & v6[1]) != 0 && *v6 )
        return 1;
      v6 += 2;
    }
  }
  return 0;
}
