/*
 * XREFs of sub_14012B2E0 @ 0x14012B2E0
 * Callers:
 *     sub_1400C8170 @ 0x1400C8170 (sub_1400C8170.c)
 *     sub_1400EFBBC @ 0x1400EFBBC (sub_1400EFBBC.c)
 *     sub_14012B334 @ 0x14012B334 (sub_14012B334.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14012B2E0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 592);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}
