/*
 * XREFs of EmonReleaseProfileResources @ 0x1405986E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpPmuGetNumberOfReservedCounters @ 0x140582A80 (HalpPmuGetNumberOfReservedCounters.c)
 *     EmonReleaseProfileResourcesInternal @ 0x140598774 (EmonReleaseProfileResourcesInternal.c)
 */

__int64 __fastcall EmonReleaseProfileResources(_QWORD *a1, _DWORD *a2)
{
  int NumberOfReservedCounters; // ebp
  int v5; // edi
  KIRQL v6; // al
  __int64 v7; // r8
  _QWORD *v8; // rdx
  __int64 v9; // rcx

  NumberOfReservedCounters = HalpPmuGetNumberOfReservedCounters((__int64)a1);
  v5 = EmonReleaseProfileResourcesInternal(a1);
  if ( v5 >= 0 )
  {
    *a2 = NumberOfReservedCounters;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[16]);
    v7 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v8 = (_QWORD *)a1[1], (_QWORD *)*v8 != a1) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    KeReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[16], v6);
    HalpMmAllocCtxFree(v9, (__int64)a1);
  }
  return (unsigned int)v5;
}
