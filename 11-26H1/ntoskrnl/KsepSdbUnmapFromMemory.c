/*
 * XREFs of KsepSdbUnmapFromMemory @ 0x1409E6EA4
 * Callers:
 *     KseShimDatabaseOpen @ 0x1409E63D0 (KseShimDatabaseOpen.c)
 *     KseShimDatabaseClose @ 0x1409E6D54 (KseShimDatabaseClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     SdbReleaseDatabase @ 0x1409E6F28 (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbUnmapFromMemory(_QWORD *a1)
{
  ULONG_PTR v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  if ( *a1 )
  {
    SdbReleaseDatabase();
    *a1 = 0LL;
  }
  v2 = a1[1];
  if ( v2 )
  {
    MiRemoveFromSystemSpace(v2);
    a1[1] = 0LL;
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    a1[4] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    ZwClose(v4);
    a1[3] = 0LL;
  }
  v5 = (void *)a1[2];
  if ( v5 )
  {
    ZwClose(v5);
    a1[2] = 0LL;
  }
}
