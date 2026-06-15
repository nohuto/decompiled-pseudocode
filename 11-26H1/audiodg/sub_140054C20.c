/*
 * XREFs of sub_140054C20 @ 0x140054C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

int sub_140054C20()
{
  int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = InitOnceBeginInitialize(&stru_1400E84E8, 1u, &v1, &v2);
  if ( result )
  {
    if ( !v1 )
      return sub_1400B6010(v2);
  }
  return result;
}
