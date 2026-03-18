/*
 * XREFs of ObFastDereferenceObjectDeferDelete @ 0x140264A20
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402CFDDC (MiEmptyPageAccessLog.c)
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140389AC8 (CcPerfLogWorkItemEnqueue.c)
 *     MiCreateSystemSection @ 0x14038A4C0 (MiCreateSystemSection.c)
 *     CcFlushCacheOneRange @ 0x14039A180 (CcFlushCacheOneRange.c)
 *     MmFlushSection @ 0x14039AA40 (MmFlushSection.c)
 *     CcGetDirtyPagesHelper @ 0x14039B880 (CcGetDirtyPagesHelper.c)
 *     CcDeleteSharedCacheMap @ 0x14039BBF0 (CcDeleteSharedCacheMap.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiFaultTrimBehind @ 0x140441F5C (MiFaultTrimBehind.c)
 *     MiProtoFaultLog @ 0x140457240 (MiProtoFaultLog.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     CcIsFatalWriteError @ 0x14046DAB0 (CcIsFatalWriteError.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x14048BB40 (MiMakeModifiedSystemCachePteValid.c)
 *     MiGatherMappedPages @ 0x140496CD8 (MiGatherMappedPages.c)
 *     CcPerfLogFlushCache @ 0x1404A36A8 (CcPerfLogFlushCache.c)
 *     CcUnpinRepinnedBcb @ 0x1404AA000 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x1404AA1C8 (CcPerfLogFlushSection.c)
 *     MiFlushSection @ 0x1404ADA20 (MiFlushSection.c)
 *     CcPurgeAndClearCacheSection @ 0x1404B3978 (CcPurgeAndClearCacheSection.c)
 *     MiDeleteCachedSubsection @ 0x1405108F0 (MiDeleteCachedSubsection.c)
 *     CcUnmapVacb @ 0x140AFAAD0 (CcUnmapVacb.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
