/*
 * XREFs of MiNonStealTagsTreeFind @ 0x1404596D4
 * Callers:
 *     MiLogNonStealNonPagedPoolEntries @ 0x1404594E0 (MiLogNonStealNonPagedPoolEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNonStealTagsTreeFind(_DWORD *a1, __int64 a2)
{
  if ( *a1 > *(_DWORD *)(a2 + 24) )
    return 1LL;
  else
    return (unsigned int)-(*a1 < *(_DWORD *)(a2 + 24));
}
