/*
 * XREFs of sub_1400F2658 @ 0x1400F2658
 * Callers:
 *     sub_1400D7168 @ 0x1400D7168 (sub_1400D7168.c)
 * Callees:
 *     sub_1400E7D1C @ 0x1400E7D1C (sub_1400E7D1C.c)
 *     sub_1400EA0D4 @ 0x1400EA0D4 (sub_1400EA0D4.c)
 *     sub_1400EE8C0 @ 0x1400EE8C0 (sub_1400EE8C0.c)
 *     sub_1400EE990 @ 0x1400EE990 (sub_1400EE990.c)
 *     sub_1400F0364 @ 0x1400F0364 (sub_1400F0364.c)
 *     sub_1400F604C @ 0x1400F604C (sub_1400F604C.c)
 */

__int64 __fastcall sub_1400F2658(_QWORD *SystemArgument2)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  int v4; // r8d
  __int64 v5; // rdx
  int v6; // r8d

  v2 = sub_1400EE8C0(SystemArgument2);
  sub_1400F0364((__int64)SystemArgument2);
  if ( SystemArgument2[148] )
    sub_1400F604C(SystemArgument2);
  sub_1400EE990((__int64)SystemArgument2, v3, v4);
  sub_1400E7D1C((__int64)SystemArgument2, v5, v6);
  sub_1400EA0D4((__int64)SystemArgument2);
  return v2;
}
