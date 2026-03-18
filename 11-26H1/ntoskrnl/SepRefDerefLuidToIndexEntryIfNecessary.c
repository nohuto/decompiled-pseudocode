/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x140A7AAA0
 * Callers:
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 * Callees:
 *     SepReferenceLuidToIndexEntry @ 0x1404834D0 (SepReferenceLuidToIndexEntry.c)
 *     SepDereferenceLuidToIndexEntry @ 0x1404F8D10 (SepDereferenceLuidToIndexEntry.c)
 */

signed __int64 __fastcall SepRefDerefLuidToIndexEntryIfNecessary(__int64 a1, char a2)
{
  __int64 v2; // rcx
  signed __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1136);
  if ( v2 )
  {
    if ( a2 )
      return SepDereferenceLuidToIndexEntry(v2);
    else
      return SepReferenceLuidToIndexEntry(v2);
  }
  return result;
}
