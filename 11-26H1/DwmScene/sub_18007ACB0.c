/*
 * XREFs of sub_18007ACB0 @ 0x18007ACB0
 * Callers:
 *     sub_18007B1DC @ 0x18007B1DC (sub_18007B1DC.c)
 *     sub_18007B6B8 @ 0x18007B6B8 (sub_18007B6B8.c)
 *     sub_18007B82C @ 0x18007B82C (sub_18007B82C.c)
 *     sub_18007D154 @ 0x18007D154 (sub_18007D154.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_18007ACB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_1800129D0(v3);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
