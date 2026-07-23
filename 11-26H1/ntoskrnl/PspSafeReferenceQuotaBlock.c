/*
 * XREFs of PspSafeReferenceQuotaBlock @ 0x140ABA778
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x140ABA274 (PspLookupProcessQuotaBlock.c)
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSafeReferenceQuotaBlock(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 512));
  v1 = *(_DWORD *)(a1 + 512);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 512), v1 + 1, v1);
    if ( v2 == v1 )
      return 1LL;
  }
  return 0LL;
}
