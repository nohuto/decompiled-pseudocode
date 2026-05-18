/*
 * XREFs of sub_18003157C @ 0x18003157C
 * Callers:
 *     sub_18002DF50 @ 0x18002DF50 (sub_18002DF50.c)
 * Callees:
 *     sub_1800317A0 @ 0x1800317A0 (sub_1800317A0.c)
 */

__int64 __fastcall sub_18003157C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800317A0(v2 + 32);
  return sub_1800313A0(a1);
}
