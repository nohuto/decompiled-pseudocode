/*
 * XREFs of MiTranslateCacheAttribute @ 0x1402EBD60
 * Callers:
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTranslateCacheAttribute(int a1)
{
  __int64 result; // rax

  if ( a1 == 1 )
    return 1LL;
  if ( !a1 )
    return 0LL;
  result = 2LL;
  if ( a1 != 2 )
    return 0xFFFFFFFFLL;
  return result;
}
