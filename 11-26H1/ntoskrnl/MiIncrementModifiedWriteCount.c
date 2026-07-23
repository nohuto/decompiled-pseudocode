/*
 * XREFs of MiIncrementModifiedWriteCount @ 0x1404EF980
 * Callers:
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x1404CB310 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x1404EF8B8 (MiPreventControlAreaDeletion.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x1402EDD50 (MiRemoveUnusedSegment.c)
 */

__int64 __fastcall MiIncrementModifiedWriteCount(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 *v2; // r8

  v1 = *(__int64 **)(a1 + 80);
  if ( v1 )
  {
    do
    {
      v2 = (__int64 *)*v1;
      if ( (v1[1] & 4) != 0 )
        *((_DWORD *)v1 + 3) = 1;
      v1 = v2;
    }
    while ( v2 );
  }
  ++*(_DWORD *)(a1 + 76);
  MiRemoveUnusedSegment(a1);
  return 0LL;
}
