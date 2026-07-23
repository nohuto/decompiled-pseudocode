/*
 * XREFs of EtwpReferenceUmGuidEntry @ 0x180042BBC
 * Callers:
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 *     EtwpFindGuidEntry @ 0x1800421B0 (EtwpFindGuidEntry.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpReferenceUmGuidEntry(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 52));
  v1 = *(_DWORD *)(a1 + 52);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 52), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
