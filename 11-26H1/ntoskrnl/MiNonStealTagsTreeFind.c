/*
 * XREFs of MiNonStealTagsTreeFind @ 0x140450F54
 * Callers:
 *     MiLogNonStealNonPagedPoolEntries @ 0x140450D60 (MiLogNonStealNonPagedPoolEntries.c)
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
