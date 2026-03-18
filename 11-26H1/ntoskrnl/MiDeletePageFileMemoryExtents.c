/*
 * XREFs of MiDeletePageFileMemoryExtents @ 0x14087E544
 * Callers:
 *     MiDeletePagefile @ 0x14086B6A4 (MiDeletePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x14087E204 (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x1403C3858 (MiFreeContiguousPages.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePageFileMemoryExtents(_QWORD *P)
{
  MiFreeContiguousPages(P[4], (unsigned int)(*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1), 0);
  ExFreePoolWithTag(P, 0);
}
