/*
 * XREFs of PipFreeGroupTree @ 0x140CC1878
 * Callers:
 *     PipFreeGroupTree @ 0x140CC1878 (PipFreeGroupTree.c)
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     PipFreeGroupTree @ 0x140CC1878 (PipFreeGroupTree.c)
 */

void __fastcall PipFreeGroupTree(_QWORD *a1)
{
  if ( *a1 )
    PipFreeGroupTree();
  if ( a1[2] )
    PipFreeGroupTree();
  if ( a1[1] )
    PipFreeGroupTree();
  ExFreePoolWithTag(a1, 0);
}
