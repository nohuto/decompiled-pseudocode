/*
 * XREFs of KsepSdbUnmapFromMemory @ 0x1409D5E7C
 * Callers:
 *     KseShimDatabaseClose @ 0x1409D5D2C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x1409D6414 (KseShimDatabaseOpen.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     SdbReleaseDatabase @ 0x1409D5F00 (SdbReleaseDatabase.c)
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
