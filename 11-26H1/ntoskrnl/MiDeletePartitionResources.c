/*
 * XREFs of MiDeletePartitionResources @ 0x14086F208
 * Callers:
 *     MiDeletePartition @ 0x14086F1C4 (MiDeletePartition.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiAdjustCachedStacks @ 0x1402A7914 (MiAdjustCachedStacks.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403C4144 (MiCheckAndProcessCcAccessLog.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1404B4AF0 (ExFreeCacheAwareRundownProtection.c)
 *     MiUnlinkWorkingSet @ 0x1404CE3CC (MiUnlinkWorkingSet.c)
 *     KeFlushQueuedDpcs @ 0x1405163E0 (KeFlushQueuedDpcs.c)
 *     MiDeleteUnmappedSystemCacheViews @ 0x1406FA688 (MiDeleteUnmappedSystemCacheViews.c)
 *     ZwWaitForSingleObject @ 0x140728040 (ZwWaitForSingleObject.c)
 *     PfDeletePartition @ 0x1407C9F70 (PfDeletePartition.c)
 *     MiFreePartitionPhysicalPages @ 0x14086F5B8 (MiFreePartitionPhysicalPages.c)
 *     MiDeletePagingFiles @ 0x140871C3C (MiDeletePagingFiles.c)
 *     MiDeletePfnBitMaps @ 0x1408805C0 (MiDeletePfnBitMaps.c)
 *     MiDeletePartitionSlabState @ 0x140881F64 (MiDeletePartitionSlabState.c)
 *     MiDeleteSpecialPurposeMemory @ 0x140884978 (MiDeleteSpecialPurposeMemory.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionResources(__int64 a1)
{
  unsigned int v2; // r11d
  HANDLE *v3; // rbx
  __int64 v4; // rbp
  HANDLE v5; // rsi
  void *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbx
  void *v10; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  KeSetEvent((PRKEVENT)(a1 + 88), 1, 0);
  if ( *(_BYTE *)(a1 + 22300) )
  {
    MiUnlinkWorkingSet(a1 + 22592);
    MiReturnResident(a1, 0x19uLL);
    MiReturnCommit(a1, v2, 0);
  }
  v3 = (HANDLE *)(a1 + 184);
  v4 = 9LL;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      ZwWaitForSingleObject(*v3, 0, 0LL);
      ObCloseHandle(v5, 0);
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( *(_BYTE *)(a1 + 22300) )
    MiDeleteUnmappedSystemCacheViews(a1);
  MiAdjustCachedStacks(a1, 3);
  MiCheckAndProcessCcAccessLog(a1, 0LL, 1LL);
  KeFlushQueuedDpcs();
  v6 = *(void **)(a1 + 18168);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(a1 + 18168) = 0LL;
  }
  PfDeletePartition(*(_QWORD *)(a1 + 256));
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 23448), -MiDeletePagingFiles(a1, &v14));
  MiDeletePartitionSlabState(a1);
  v7 = **(_QWORD **)(*(_QWORD *)(a1 + 256) + 72LL);
  MiRemoveLowestPriorityStandbyPage(a1, 8u, 0);
  MiFreePartitionPhysicalPages(a1, v7);
  MiDeleteSpecialPurposeMemory(a1);
  MiDeletePfnBitMaps(a1);
  v8 = 11LL;
  v9 = a1 + 320;
  do
  {
    v10 = *(void **)(v9 + 88);
    if ( v10 )
      ObCloseHandle(v10, 0);
    if ( *(_QWORD *)v9 != a1 + 280 )
      ObfDereferenceObjectWithTag(*(PVOID *)v9, 0x6F506D4Du);
    v9 += 8LL;
    --v8;
  }
  while ( v8 );
  v11 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 3176);
  if ( v11 )
    ExFreeCacheAwareRundownProtection(v11);
  v12 = *(void **)(a1 + 312);
  if ( v12 )
    ObCloseHandle(v12, 0);
  v13 = *(void **)(a1 + 304);
  if ( v13 )
    ObCloseHandle(v13, 0);
}
