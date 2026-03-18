/*
 * XREFs of Bulk_EP_IsMappingStoppedOrPaused @ 0x14004DA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Bulk_EP_IsMappingStoppedOrPaused(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  int v4; // eax
  char v5; // dl

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1004LL) == 1 )
  {
    _m_prefetchw((const void *)(a1 + 108));
    v1 = *(_DWORD *)(a1 + 108);
    do
    {
      v2 = v1;
      v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), v1, v1);
    }
    while ( v2 != v1 );
    return (v1 & 0xFFFFFFFD) == 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 108);
    if ( v4 == 2 )
      return 1;
    v5 = 0;
    if ( !v4 )
      return 1;
    return v5;
  }
}
