/*
 * XREFs of ndisLwfSortPredicate @ 0x14014EA04
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EA5C (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

bool __fastcall ndisLwfSortPredicate(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  bool v5; // cf
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // dx

  v3 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a1 + 48) != v3 )
    return *(_DWORD *)(a1 + 48) > v3;
  v5 = *(_DWORD *)a2 < *(_DWORD *)a1;
  if ( *(_DWORD *)a2 == *(_DWORD *)a1
    && (v6 = *(_WORD *)(a1 + 4), v5 = *(_WORD *)(a2 + 4) < v6, *(_WORD *)(a2 + 4) == v6)
    && (v7 = *(_WORD *)(a1 + 6), v5 = *(_WORD *)(a2 + 6) < v7, *(_WORD *)(a2 + 6) == v7) )
  {
    return memcmp((const void *)(a2 + 8), (const void *)(a1 + 8), 8uLL) < 0;
  }
  else
  {
    return v5;
  }
}
