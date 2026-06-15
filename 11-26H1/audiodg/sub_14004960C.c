/*
 * XREFs of sub_14004960C @ 0x14004960C
 * Callers:
 *     sub_140049120 @ 0x140049120 (sub_140049120.c)
 * Callees:
 *     sub_140049ED4 @ 0x140049ED4 (sub_140049ED4.c)
 */

char __fastcall sub_14004960C(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_1400E7CD1 || !a2 )
  {
    sub_140049ED4(a1);
    LOBYTE(v3) = v2;
    sub_140049ED4(v3);
  }
  return 1;
}
