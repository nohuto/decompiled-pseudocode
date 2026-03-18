/*
 * XREFs of EmonAllocateResources @ 0x140594F44
 * Callers:
 *     EmonReserveProfileResources @ 0x140596360 (EmonReserveProfileResources.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057CE5C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x1405805F8 (HalpPmuReservedResourcesProcessorCallback.c)
 *     EmonReleaseProfileResourcesInternal @ 0x140595FF4 (EmonReleaseProfileResourcesInternal.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall EmonAllocateResources(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int ***a6)
{
  __int32 v10; // esi
  int v11; // ebx
  int ReadOperationCount; // eax
  size_t v13; // rbx
  unsigned int **v14; // rax
  unsigned int **v15; // rdi
  KIRQL v16; // al
  unsigned int *v17; // rcx
  __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+24h] [rbp-44h]
  unsigned int **v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+38h] [rbp-30h]

  v21 = 0;
  *a6 = (unsigned int **)-1LL;
  v10 = 1;
  if ( a4 )
  {
    v10 = _InterlockedExchange(
            (_DWORD *)&IommuInterfaceStateChangeCallbackPushLock.ForegroundDpcStackListEntry.Next + 1,
            1);
    if ( v10 )
      return (unsigned int)-1073741670;
    ReadOperationCount = IommuInterfaceStateChangeCallbackPushLock.ReadOperationCount;
    if ( *(_DWORD *)(a4 + 8) )
      ReadOperationCount = *(_DWORD *)(a4 + 8);
    LODWORD(IommuInterfaceStateChangeCallbackPushLock.GlobalForegroundListEntry.Flink) = ReadOperationCount;
  }
  v13 = 80 * (unsigned int)HalpQueryMaximumRegisteredProcessorCount() + 112;
  v14 = (unsigned int **)HalpMmAllocCtxAlloc(v13, v13);
  v15 = v14;
  if ( !v14 )
  {
    v11 = -1073741801;
LABEL_16:
    if ( a4 && !v10 )
      IommuInterfaceStateChangeCallbackPushLock.GlobalForegroundListEntry.Flink = 0LL;
    return (unsigned int)v11;
  }
  memset_0(v14, 0, v13);
  v15[2] = a2;
  if ( a4 )
    v15[3] = *(unsigned int **)a4;
  v20 = a5;
  v21 = 0;
  v22 = v15;
  v23 = a1;
  v24 = a4;
  v11 = HalpPmuReservedResourcesProcessorCallback(a3, (__int64)EmonMarkCountersReserved, (__int64)&v20, (__int64)v15);
  if ( v11 < 0 )
  {
    EmonReleaseProfileResourcesInternal(v15);
    HalpMmAllocCtxFree(v18, (__int64)v15);
    goto LABEL_16;
  }
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[16]);
  v17 = *(unsigned int **)&IommuInterfaceStateChangeCallbackPushLock.AbCompletedIoQoSBoostCount;
  if ( **(struct _KTHREAD ***)&IommuInterfaceStateChangeCallbackPushLock.AbCompletedIoQoSBoostCount != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary )
    __fastfail(3u);
  *v15 = &IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary;
  v15[1] = v17;
  *(_QWORD *)v17 = v15;
  *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.AbCompletedIoQoSBoostCount = v15;
  KeReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[16], v16);
  *a6 = v15;
  return (unsigned int)v11;
}
