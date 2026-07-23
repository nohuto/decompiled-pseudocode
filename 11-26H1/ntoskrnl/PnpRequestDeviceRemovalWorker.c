/*
 * XREFs of PnpRequestDeviceRemovalWorker @ 0x14096F560
 * Callers:
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14096F560 (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PiListEntryToDependencyEdge @ 0x14050F9B0 (PiListEntryToDependencyEdge.c)
 *     PipIsDevNodeDNStarted @ 0x140516374 (PipIsDevNodeDNStarted.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14096F560 (PnpRequestDeviceRemovalWorker.c)
 *     PipDeviceRemovalCheckDeviceNodeState @ 0x14096F670 (PipDeviceRemovalCheckDeviceNodeState.c)
 */

_QWORD *__fastcall PnpRequestDeviceRemovalWorker(int a1, __int64 a2, char a3, int a4, char a5)
{
  _QWORD *result; // rax
  int v10; // r8d
  _QWORD *i; // rdi
  __int64 v12; // rbx
  __int64 *v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx

  if ( a4 == 2 || a5 )
    result = (_QWORD *)PipDeviceRemovalCheckDeviceNodeState(a2);
  else
    result = (_QWORD *)PipIsDevNodeDNStarted(a2);
  if ( (_BYTE)result )
  {
    PipSetDevNodeState(a2, 785 - (a3 != 0));
    for ( i = *(_QWORD **)(a2 + 8); i; i = (_QWORD *)*i )
    {
      LOBYTE(v10) = 1;
      PnpRequestDeviceRemovalWorker(a1, (_DWORD)i, v10, a4, 1);
    }
    result = *(_QWORD **)(a2 + 32);
    if ( result && (result = (_QWORD *)result[39], (v12 = result[10]) != 0) )
      v13 = (__int64 *)(v12 + 32);
    else
      v13 = &PiDependencyNodeEmptyList;
    v14 = (__int64 *)*v13;
    while ( v14 != v13 )
    {
      v15 = PiListEntryToDependencyEdge((__int64)v14, 1);
      v14 = (__int64 *)*v14;
      result = *(_QWORD **)(v15 + 40);
      v16 = result[6];
      if ( v16 )
        result = (_QWORD *)PnpRequestDeviceRemovalWorker(a1, *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL), 0, 1, 0);
    }
  }
  return result;
}
