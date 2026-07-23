/*
 * XREFs of MiDeletePageFileMemoryExtents @ 0x140884944
 * Callers:
 *     MiDeletePagefile @ 0x140871A84 (MiDeletePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x140884604 (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePageFileMemoryExtents(_QWORD *P)
{
  MiFreeContiguousPages(P[4], (unsigned int)(*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1), 0);
  ExFreePoolWithTag(P, 0);
}
