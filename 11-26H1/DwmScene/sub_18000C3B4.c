/*
 * XREFs of sub_18000C3B4 @ 0x18000C3B4
 * Callers:
 *     sub_18000BD70 @ 0x18000BD70 (sub_18000BD70.c)
 * Callees:
 *     sub_18000D93C @ 0x18000D93C (sub_18000D93C.c)
 */

char __fastcall sub_18000C3B4(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_1801C7DB1 || !a2 )
  {
    sub_18000D93C(a1);
    LOBYTE(v3) = v2;
    sub_18000D93C(v3);
  }
  return 1;
}
