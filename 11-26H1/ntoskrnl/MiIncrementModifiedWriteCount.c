/*
 * XREFs of MiIncrementModifiedWriteCount @ 0x1404F6374
 * Callers:
 *     MiTrimSharedPage @ 0x140478A54 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x1404D1764 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x1404F62AC (MiPreventControlAreaDeletion.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x14030BCD0 (MiRemoveUnusedSegment.c)
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
