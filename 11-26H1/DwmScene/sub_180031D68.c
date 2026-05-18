/*
 * XREFs of sub_180031D68 @ 0x180031D68
 * Callers:
 *     sub_180037C40 @ 0x180037C40 (sub_180037C40.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 */

__int64 __fastcall sub_180031D68(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[18];
  if ( v2 )
    result = sub_180010EC8(v2);
  v4 = a1[3];
  if ( v4 )
  {
    sub_1800130CC(v4, a1[4]);
    result = sub_18000E26C((void *)a1[3], (a1[5] - a1[3]) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  if ( *a1 )
  {
    sub_1800130CC(*a1, a1[1]);
    result = sub_18000E26C((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
