/*
 * XREFs of sub_18002FA70 @ 0x18002FA70
 * Callers:
 *     sub_18002ECF8 @ 0x18002ECF8 (sub_18002ECF8.c)
 * Callees:
 *     sub_180011964 @ 0x180011964 (sub_180011964.c)
 *     sub_18002FC44 @ 0x18002FC44 (sub_18002FC44.c)
 */

__int64 __fastcall sub_18002FA70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r9

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    v5 = a1 - a3;
    do
    {
      sub_18002FC44(v5, v3, v5 + v3, v4);
      v3 += 16LL;
      v4 = v6 - 1;
    }
    while ( v4 );
  }
  sub_180011964(v3, v3);
  return v3;
}
