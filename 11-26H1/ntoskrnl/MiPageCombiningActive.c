/*
 * XREFs of MiPageCombiningActive @ 0x1402A8AC0
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1402A7770 (MiSignalLargePageRebuild.c)
 *     MiDeleteDynamicPfns @ 0x1406ECE7C (MiDeleteDynamicPfns.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140E2EBC4 != 0;
  if ( *(_DWORD *)(a1 + 17720) )
    return 1;
  return result;
}
