/*
 * XREFs of PnpSetTargetDeviceRemove @ 0x1409B6C04
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x1407AD0C0 (PiDevCfgProcessDeviceCallback.c)
 * Callees:
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 *     PnpAllocateCriticalMemory @ 0x1409B4B74 (PnpAllocateCriticalMemory.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1409B6214 (PnpInitializeTargetDeviceRemoveEvent.c)
 */

__int64 __fastcall PnpSetTargetDeviceRemove(
        _QWORD *Object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        _DWORD *a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14)
{
  __int64 v19; // rcx
  unsigned int v20; // r14d
  char *CriticalMemory; // rax
  __int64 v22; // rbx

  if ( a11 )
    *a11 = 259;
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( Object )
    v19 = *(_QWORD *)(Object[39] + 40LL);
  else
    v19 = 0LL;
  v20 = *(unsigned __int16 *)(v19 + 40) + 202;
  CriticalMemory = (char *)PnpAllocateCriticalMemory(a2 != 0 ? 3 : 0, 0x100uLL);
  v22 = (__int64)CriticalMemory;
  if ( !CriticalMemory )
    return 3221225626LL;
  PnpInitializeTargetDeviceRemoveEvent(CriticalMemory, v20, Object, a2, a3, a4, a5, a6, a7, a8, a11, a12, a13);
  *(_QWORD *)(v22 + 32) = 0LL;
  *(_QWORD *)(v22 + 40) = 0LL;
  if ( a14 )
  {
    *a14 = v22;
    ++*(_DWORD *)(v22 + 64);
  }
  return PnpInsertEventInQueue(v22);
}
