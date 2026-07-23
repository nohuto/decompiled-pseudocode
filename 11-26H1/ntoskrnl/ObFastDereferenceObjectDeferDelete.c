/*
 * XREFs of ObFastDereferenceObjectDeferDelete @ 0x140263F90
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14038B878 (CcPerfLogWorkItemEnqueue.c)
 *     MiCreateSystemSection @ 0x14038C270 (MiCreateSystemSection.c)
 *     CcFlushCacheOneRange @ 0x14039BEE0 (CcFlushCacheOneRange.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     CcGetDirtyPagesHelper @ 0x14039D5E0 (CcGetDirtyPagesHelper.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiFaultTrimBehind @ 0x14043AA6C (MiFaultTrimBehind.c)
 *     MiProtoFaultLog @ 0x14044EAB0 (MiProtoFaultLog.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     CcIsFatalWriteError @ 0x140467230 (CcIsFatalWriteError.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     CcPerfLogFlushCache @ 0x14049D1B8 (CcPerfLogFlushCache.c)
 *     CcUnpinRepinnedBcb @ 0x1404A3690 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x1404A3858 (CcPerfLogFlushSection.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     CcPurgeAndClearCacheSection @ 0x1404ACF44 (CcPurgeAndClearCacheSection.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     CcUnmapVacb @ 0x140AFCD38 (CcUnmapVacb.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObFastDereferenceObjectDeferDelete(signed __int64 *a1, ULONG_PTR a2, unsigned int a3)
{
  signed __int64 result; // rax
  signed __int64 v5; // rtt
  signed __int64 v6; // rdi
  bool v7; // cc
  signed __int64 BugCheckParameter4; // rdi

  _m_prefetchw(a1);
  result = *a1;
  while ( (a2 ^ result) < 0xF )
  {
    v5 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v5 == result )
    {
      if ( ObpTraceFlags )
        return ObpPushStackInfo(a2 - 48, -1LL, a3);
      return result;
    }
  }
  if ( ObpTraceFlags )
    result = ObpPushStackInfo(a2 - 48, 0xFFFFFFFFLL, a3);
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  BugCheckParameter4 = v6 - 1;
  if ( v7 )
  {
    if ( *(_QWORD *)(a2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)],
        a2,
        3uLL,
        *(_QWORD *)(a2 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 4uLL, BugCheckParameter4);
    return ObpDeferObjectDeletion(a2 - 48);
  }
  return result;
}
