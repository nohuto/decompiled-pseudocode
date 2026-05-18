/*
 * XREFs of sub_18000C214 @ 0x18000C214
 * Callers:
 *     sub_18000BC58 @ 0x18000BC58 (sub_18000BC58.c)
 * Callees:
 *     sub_18000C508 @ 0x18000C508 (sub_18000C508.c)
 *     sub_18000D93C @ 0x18000D93C (sub_18000D93C.c)
 */

char __fastcall sub_18000C214(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  if ( !a1 )
    byte_1801C7DB1 = 1;
  sub_18000C508();
  if ( !(unsigned __int8)sub_18000D93C(v1) )
    return 0;
  if ( !(unsigned __int8)sub_18000D93C(v2) )
  {
    sub_18000D93C(0LL);
    return 0;
  }
  return 1;
}
