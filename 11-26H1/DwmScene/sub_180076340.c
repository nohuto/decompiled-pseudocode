/*
 * XREFs of sub_180076340 @ 0x180076340
 * Callers:
 *     sub_180078020 @ 0x180078020 (sub_180078020.c)
 *     sub_18007F9A0 @ 0x18007F9A0 (sub_18007F9A0.c)
 *     sub_180080038 @ 0x180080038 (sub_180080038.c)
 *     sub_18008465C @ 0x18008465C (sub_18008465C.c)
 *     sub_180084758 @ 0x180084758 (sub_180084758.c)
 *     sub_180084FD8 @ 0x180084FD8 (sub_180084FD8.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_180076340(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_1800129D0(v3);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
