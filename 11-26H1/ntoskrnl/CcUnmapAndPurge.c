/*
 * XREFs of CcUnmapAndPurge @ 0x14039BE28
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039CB54 (CcReferenceSharedCacheMapFileObject.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 */

void __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // r9d
  __int64 v6; // rsi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  v4 = CcReferenceSharedCacheMapFileObject(a1);
  LOBYTE(v5) = a2;
  v6 = v4;
  CcUnmapVacbArray(a1, 0, 0, v5, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v6 + 40), 0LL, 0, 2u);
  _m_prefetchw((const void *)(a1 + 96));
  v7 = *(_QWORD *)(a1 + 96);
  do
  {
    if ( (v6 ^ (unsigned __int64)v7) >= 0xF )
    {
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v6, 0x63536343u);
      return;
    }
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v7 + 1, v7);
  }
  while ( v8 != v7 );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v6 - 48, -1, 0x63536343u);
}
