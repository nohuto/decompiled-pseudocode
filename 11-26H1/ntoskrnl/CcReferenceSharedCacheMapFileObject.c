/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x14039ADF4
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140389AC8 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnmapAndPurge @ 0x14039A0C8 (CcUnmapAndPurge.c)
 *     CcFlushCacheOneRange @ 0x14039A180 (CcFlushCacheOneRange.c)
 *     CcGetDirtyPagesHelper @ 0x14039B880 (CcGetDirtyPagesHelper.c)
 *     CcIsFatalWriteError @ 0x14046DAB0 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1404A36A8 (CcPerfLogFlushCache.c)
 *     CcUnpinRepinnedBcb @ 0x1404AA000 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x1404AA1C8 (CcPerfLogFlushSection.c)
 *     CcPurgeAndClearCacheSection @ 0x1404B3978 (CcPurgeAndClearCacheSection.c)
 *     CcUnmapVacb @ 0x140AFAAD0 (CcUnmapVacb.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14039B7C4 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  signed __int64 v2; // rdx
  signed __int64 v3; // rax
  signed __int64 v4; // rbx
  unsigned int v5; // edx
  ULONG_PTR v6; // rbx
  __int64 v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  _m_prefetchw((const void *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 96);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 <= 1 )
  {
    if ( !v5 )
      return CcSlowReferenceSharedCacheMapFileObject(a1);
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFuLL);
    if ( v8 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v6, 0x10uLL, v8 + 15);
    _m_prefetchw((const void *)(a1 + 96));
    v9 = *(_QWORD *)(a1 + 96);
    while ( (unsigned __int64)(v9 & 0xF) + 15 <= 0xF && v6 == (v9 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v9 + 15, v9);
      if ( v10 == v9 )
        goto LABEL_4;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFF1uLL);
  }
LABEL_4:
  ObpTraceObjectReferenceIfActive(v6 - 48, 1, 0x63536343u);
  if ( v6 )
    return v6;
  return CcSlowReferenceSharedCacheMapFileObject(a1);
}
