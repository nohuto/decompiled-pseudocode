/*
 * XREFs of sub_180033678 @ 0x180033678
 * Callers:
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800385B0 @ 0x1800385B0 (sub_1800385B0.c)
 */

__int64 __fastcall sub_180033678(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v4 = *a2;
  v2 = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  v5 = v2;
  result = sub_1800385B0(a1 + 168, &v4);
  if ( v5 )
    return sub_180010EC8(v5);
  return result;
}
