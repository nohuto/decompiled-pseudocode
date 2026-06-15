/*
 * XREFs of sub_140037244 @ 0x140037244
 * Callers:
 *     sub_1400219B0 @ 0x1400219B0 (sub_1400219B0.c)
 *     sub_14005F2B0 @ 0x14005F2B0 (sub_14005F2B0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140037244(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax

  v3 = a1 | 7;
  if ( v3 > a3 )
    return a3;
  v4 = a2 >> 1;
  if ( a2 > a3 - (a2 >> 1) )
    return a3;
  result = v4 + a2;
  if ( v3 >= v4 + a2 )
    return v3;
  return result;
}
