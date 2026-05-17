/*
 * XREFs of EtwpReferenceUmGuidEntry @ 0x18005863C
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     EtwpFindGuidEntry @ 0x180057C30 (EtwpFindGuidEntry.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
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
