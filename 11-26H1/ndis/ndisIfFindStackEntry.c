/*
 * XREFs of ndisIfFindStackEntry @ 0x14001D510
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x14001D270 (NdisIfAddIfStackEntry.c)
 *     NdisIfDeleteIfStackEntry @ 0x1400CE0B0 (NdisIfDeleteIfStackEntry.c)
 * Callees:
 *     <none>
 */

PVOID *__fastcall ndisIfFindStackEntry(int a1, int a2)
{
  PVOID *result; // rax

  for ( result = (PVOID *)P; result != &P; result = (PVOID *)*result )
  {
    if ( *((_DWORD *)result + 4) == a1 && *((_DWORD *)result + 5) == a2 )
      return result;
  }
  return 0LL;
}
