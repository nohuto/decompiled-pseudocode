/*
 * XREFs of MiPageCombiningActive @ 0x1402A96B0
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1402A8360 (MiSignalLargePageRebuild.c)
 *     MiDeleteDynamicPfns @ 0x1406E81E0 (MiDeleteDynamicPfns.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140E2EA44 != 0;
  if ( *(_DWORD *)(a1 + 17720) )
    return 1;
  return result;
}
