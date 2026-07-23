/*
 * XREFs of MiComparePageFileMemoryExtents @ 0x140711534
 * Callers:
 *     MiFindPageFileMemoryExtent @ 0x1407117E0 (MiFindPageFileMemoryExtent.c)
 *     MiInsertPageFileMemoryExtents @ 0x1407118E8 (MiInsertPageFileMemoryExtents.c)
 *     MiCreatePagefileMemoryExtents @ 0x140884604 (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComparePageFileMemoryExtents(_DWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_DWORD *)(a2 + 28) )
    return (unsigned int)-(*a1 < *(_DWORD *)(a2 + 24));
  else
    return 1LL;
}
