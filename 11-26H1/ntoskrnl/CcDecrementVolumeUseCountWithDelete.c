/*
 * XREFs of CcDecrementVolumeUseCountWithDelete @ 0x1403861F0
 * Callers:
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcScanLogHandleList @ 0x140387D58 (CcScanLogHandleList.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 *     CcGetDeviceGuidAsync @ 0x1405B5910 (CcGetDeviceGuidAsync.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x1405B5A14 (CcQueueAsyncGetDeviceGuid.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     KiRcuStartGracePeriod @ 0x140526914 (KiRcuStartGracePeriod.c)
 */

int __fastcall CcDecrementVolumeUseCountWithDelete(__int64 a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  int v4; // ebx
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  _m_prefetchw((const void *)(a1 + 8));
  v2 = *(_QWORD *)(a1 + 8);
  while ( v2 - 1 > 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v2 - 1, v2);
    if ( v3 == v2 )
      return v2;
  }
  if ( v2 != 1 )
    __fastfail(0xEu);
  if ( *(_QWORD *)(a1 + 32) )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    if ( *(_QWORD *)(a1 + 32) )
    {
      v5 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v5 + 8) != a1 + 24 || (v6 = *(_QWORD **)(a1 + 32), *v6 != a1 + 24) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v4 = *(_DWORD *)(a1 + 212);
  *(_QWORD *)(a1 + 2712) = 0LL;
  *(_QWORD *)(a1 + 2720) = 0LL;
  *(_QWORD *)(a1 + 2728) = 0LL;
  *(_QWORD *)(a1 + 2736) = 0LL;
  *(_QWORD *)(a1 + 2736) = CcDeleteVolumeCacheMap;
  *(_QWORD *)(a1 + 2744) = a1;
  *(_QWORD *)(a1 + 2752) = 0LL;
  KiRcuStartGracePeriod();
  LODWORD(v2) = DbgPrintEx(
                  0x7Fu,
                  3u,
                  "[%04x:%04x]CcDecrementVolumeUseCountWithDelete: VCM:%p(vid:%2lx) Freed!\n",
                  LODWORD(KeGetCurrentThread()[1].CycleTime),
                  KeGetCurrentThread()[1].CurrentRunTime,
                  (const void *)a1,
                  v4);
  return v2;
}
