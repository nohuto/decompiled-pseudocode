/*
 * XREFs of PopDirectedDripsUmMarkTestDevices @ 0x1409F88DC
 * Callers:
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1409F8CA4 (PopDirectedDripsIdleResiliencyCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x140781A08 (PopDirectedDripsMarkCandidateDevice.c)
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140B49768 (IoLockUnlockPnpDeviceTree.c)
 */

__int64 __fastcall PopDirectedDripsUmMarkTestDevices(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax
  int v5; // ett
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *i; // rax
  _QWORD *v9; // rax
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
  LODWORD(result) = PopDirectedDripsUmTestDeviceCount;
  do
  {
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, result, result);
  }
  while ( v5 != (_DWORD)result );
  if ( (_DWORD)result )
  {
    PopAcquireRwLockShared(&PopDirectedDripsUmLock, a2, a3, a4);
    v12 = PopWnfCsEnterScenarioId;
    PopDirectedDripsNotify(PopDirectedDripsUmTestPermissive != 0 ? 4 : 2, &v12);
    LOBYTE(v6) = 1;
    IoLockUnlockPnpDeviceTree(v6);
    v7 = IopRootDeviceNode;
    for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
      v7 = i;
    while ( v7 != IopRootDeviceNode )
    {
      if ( v7[10] )
      {
        Buffer[1] = *((unsigned __int16 *)v7 + 20) >> 1;
        v11 = v7[6];
        Buffer[0] = 1;
        if ( RtlLookupElementGenericTableAvl(&PopDirectedDripsUmTestDeviceTable, Buffer) )
          PopDirectedDripsMarkCandidateDevice(v7[10]);
      }
      v9 = (_QWORD *)*v7;
      if ( *v7 )
      {
        do
        {
          v7 = v9;
          v9 = (_QWORD *)v9[1];
        }
        while ( v9 );
      }
      else
      {
        v7 = (_QWORD *)v7[2];
      }
    }
    IoLockUnlockPnpDeviceTree(0LL);
    PopDirectedDripsNotify(PopDirectedDripsUmTestPermissive != 0 ? 5 : 3, &v12);
    return PopReleaseRwLock((struct _KTHREAD *)&PopDirectedDripsUmLock);
  }
  return result;
}
