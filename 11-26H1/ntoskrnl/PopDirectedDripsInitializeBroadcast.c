/*
 * XREFs of PopDirectedDripsInitializeBroadcast @ 0x140AC7158
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140AC6E74 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1404CA9FC (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     IoControlPnpDeviceActionQueue @ 0x1404D0F4C (IoControlPnpDeviceActionQueue.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1404FE0D4 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1407E7900 (PopDirectedDripsBuildBroadcastTreePartial.c)
 *     PopPowerAggregatorHandleIntent @ 0x1409FAB24 (PopPowerAggregatorHandleIntent.c)
 *     PopDirectedDripsInitializeDeviceTree @ 0x140AC73C8 (PopDirectedDripsInitializeDeviceTree.c)
 *     PoInitializeBroadcast @ 0x140AC752C (PoInitializeBroadcast.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopDirectedDripsInitializeBroadcast(volatile signed __int32 *a1)
{
  char v2; // r15
  unsigned __int32 v3; // eax
  unsigned __int32 v4; // ett
  int v5; // r14d
  int v6; // r12d
  int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 ***v13; // rdi
  int v14; // ebp
  char v15; // al
  PVOID v16; // rcx
  _QWORD *i; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30[7]; // [rsp+20h] [rbp-38h] BYREF
  int v31; // [rsp+60h] [rbp+8h] BYREF

  *(_OWORD *)v30 = 0LL;
  _InterlockedOr(a1, 0);
  v2 = 0;
  _m_prefetchw(&PopDirectedDripsState);
  v3 = PopDirectedDripsState;
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(&PopDirectedDripsState, v3, v3);
  }
  while ( v4 != v3 );
  v5 = (v3 >> 10) & 1 | 2;
  if ( (v3 & 0x800) == 0 )
    v5 = (v3 >> 10) & 1;
  v6 = (v3 >> 12) & 1 | 2;
  if ( (v3 & 0x2000) == 0 )
    v6 = (v3 >> 12) & 1;
  v7 = dword_140F12E30 & 1 | 2;
  if ( (dword_140F12E30 & 2) == 0 )
    v7 = dword_140F12E30 & 1;
  v8 = v5 | v7 & v6;
  if ( v8 )
  {
    IoControlPnpDeviceActionQueue(1);
    PopDirectedDripsInitializeDeviceTree();
    PopFxBuildDirectedDripsCandidateDeviceList(v30, v9, v10, v11);
    v13 = (__int64 ***)v30[0];
    v14 = 0;
    v31 = 0;
    while ( v13 != (__int64 ***)v30 )
    {
      v24 = PopDirectedDripsBuildBroadcastTreePartial(*(v13 - 108), v8, &v31, v12);
      v20 = v24;
      if ( v24 < 0 )
      {
        if ( v24 != -1073741637 )
          goto LABEL_31;
      }
      else
      {
        ++v14;
      }
      v13 = (__int64 ***)*v13;
    }
    if ( v14 && (v15 = v31, v31) )
    {
      if ( (v31 & 1) != 0 && (v5 & 1) == 0 )
        _InterlockedOr(a1, 0x400u);
      if ( (v15 & 2) == 0 || (v5 & 2) != 0 )
      {
        v16 = IopRootDeviceNode;
        for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
          v16 = i;
        while ( v16 != IopRootDeviceNode )
        {
          if ( (*((_DWORD *)v16 + 190) & 0x30000) != 0 )
          {
            if ( (*((_DWORD *)v16 + 190) & 0x20000) != 0 )
            {
              v18 = *((_QWORD *)v16 + 97);
              if ( v18 )
                ++*(_DWORD *)(v18 + 160);
            }
            else if ( (*((_DWORD *)v16 + 190) & 0x10000) != 0 )
            {
              v25 = *((_QWORD *)v16 + 97);
              if ( v25 )
                ++*(_DWORD *)(v25 + 156);
            }
            _InterlockedOr((volatile signed __int32 *)v16 + 74, 0x100u);
          }
          v19 = *(_QWORD **)v16;
          if ( *(_QWORD *)v16 )
          {
            do
            {
              v16 = v19;
              v19 = (_QWORD *)v19[1];
            }
            while ( v19 );
          }
          else
          {
            v16 = (PVOID)*((_QWORD *)v16 + 2);
          }
        }
        v20 = PoInitializeBroadcast(1LL);
      }
      else
      {
        v2 = 1;
        v20 = -1073741267;
      }
    }
    else
    {
      v20 = -1073741823;
    }
LABEL_31:
    PopFxDestroyDirectedDripsCandidateDeviceList((_QWORD **)v30);
    if ( v20 < 0 )
      IoControlPnpDeviceActionQueue(0);
    if ( v2 )
    {
      PopAcquirePolicyLock(v22, v21);
      PopPowerAggregatorHandleIntent(4u, 0LL, 0LL, (struct _KLOCK_ENTRIES *)0x2A);
      PopReleasePolicyLock(v27, v26, v28, v29, v30[0]);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v20;
}
