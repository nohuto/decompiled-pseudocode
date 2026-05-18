/*
 * XREFs of sub_18007F40C @ 0x18007F40C
 * Callers:
 *     sub_18007D524 @ 0x18007D524 (sub_18007D524.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18007AC78 @ 0x18007AC78 (sub_18007AC78.c)
 *     sub_18007ACE8 @ 0x18007ACE8 (sub_18007ACE8.c)
 *     sub_18007D10C @ 0x18007D10C (sub_18007D10C.c)
 */

unsigned __int64 __fastcall sub_18007F40C(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 > 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v3 = sub_18007D10C(a1, a2);
  v4 = *a1;
  v5 = v3;
  if ( *a1 )
  {
    sub_18007ACE8(v4, a1[1]);
    sub_18000E26C((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  v8 = v5;
  v6 = sub_18007AC78(v4, &v8);
  *a1 = v6;
  a1[1] = v6;
  result = v6 + 40 * v5;
  a1[2] = result;
  return result;
}
