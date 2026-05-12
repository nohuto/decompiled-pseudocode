/*
 * XREFs of sub_140072E4C @ 0x140072E4C
 * Callers:
 *     sub_140072EC4 @ 0x140072EC4 (sub_140072EC4.c)
 *     sub_14007842C @ 0x14007842C (sub_14007842C.c)
 *     sub_14012F368 @ 0x14012F368 (sub_14012F368.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_140072E4C(_DWORD *a1, unsigned int a2)
{
  char *result; // rax
  __int64 v3; // rax

  result = 0LL;
  if ( *a1 == 1 )
  {
    if ( a2 >= a1[2] )
      return result;
    v3 = 32 * (a2 + 1LL);
    return (char *)a1 + v3;
  }
  if ( *a1 == 2 && a2 < a1[2] )
  {
    v3 = 32LL * a2 + 40;
    return (char *)a1 + v3;
  }
  return result;
}
