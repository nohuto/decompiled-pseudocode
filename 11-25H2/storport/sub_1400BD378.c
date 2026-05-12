/*
 * XREFs of sub_1400BD378 @ 0x1400BD378
 * Callers:
 *     sub_1400BD714 @ 0x1400BD714 (sub_1400BD714.c)
 *     sub_1400BD898 @ 0x1400BD898 (sub_1400BD898.c)
 *     sub_1400C52E4 @ 0x1400C52E4 (sub_1400C52E4.c)
 *     sub_1400C55C0 @ 0x1400C55C0 (sub_1400C55C0.c)
 *     sub_1400C5820 @ 0x1400C5820 (sub_1400C5820.c)
 *     sub_1400C5A64 @ 0x1400C5A64 (sub_1400C5A64.c)
 *     sub_1400C5CF4 @ 0x1400C5CF4 (sub_1400C5CF4.c)
 *     sub_1400C5FA8 @ 0x1400C5FA8 (sub_1400C5FA8.c)
 *     sub_1400C62AC @ 0x1400C62AC (sub_1400C62AC.c)
 *     sub_1400C6798 @ 0x1400C6798 (sub_1400C6798.c)
 *     sub_1400C6900 @ 0x1400C6900 (sub_1400C6900.c)
 *     sub_1400C6B94 @ 0x1400C6B94 (sub_1400C6B94.c)
 *     sub_1400C6D60 @ 0x1400C6D60 (sub_1400C6D60.c)
 *     sub_1400C6FB0 @ 0x1400C6FB0 (sub_1400C6FB0.c)
 *     sub_1400C7138 @ 0x1400C7138 (sub_1400C7138.c)
 *     sub_1400C72BC @ 0x1400C72BC (sub_1400C72BC.c)
 *     sub_1400C757C @ 0x1400C757C (sub_1400C757C.c)
 *     sub_1400C772C @ 0x1400C772C (sub_1400C772C.c)
 *     sub_1400C7960 @ 0x1400C7960 (sub_1400C7960.c)
 *     sub_1400C7BB0 @ 0x1400C7BB0 (sub_1400C7BB0.c)
 *     sub_1400C7D1C @ 0x1400C7D1C (sub_1400C7D1C.c)
 *     sub_1400C8170 @ 0x1400C8170 (sub_1400C8170.c)
 *     sub_1400C831C @ 0x1400C831C (sub_1400C831C.c)
 *     sub_1400C85F8 @ 0x1400C85F8 (sub_1400C85F8.c)
 *     sub_1400C880C @ 0x1400C880C (sub_1400C880C.c)
 *     sub_1400C8C34 @ 0x1400C8C34 (sub_1400C8C34.c)
 *     sub_1400C8D5C @ 0x1400C8D5C (sub_1400C8D5C.c)
 *     sub_1400E8EB4 @ 0x1400E8EB4 (sub_1400E8EB4.c)
 *     sub_1400EB850 @ 0x1400EB850 (sub_1400EB850.c)
 *     sub_1400EC648 @ 0x1400EC648 (sub_1400EC648.c)
 *     sub_1400ECAF8 @ 0x1400ECAF8 (sub_1400ECAF8.c)
 *     sub_1400ECCD0 @ 0x1400ECCD0 (sub_1400ECCD0.c)
 *     sub_1400EE400 @ 0x1400EE400 (sub_1400EE400.c)
 *     sub_1400EE640 @ 0x1400EE640 (sub_1400EE640.c)
 *     sub_1400EF52C @ 0x1400EF52C (sub_1400EF52C.c)
 *     sub_1400EF848 @ 0x1400EF848 (sub_1400EF848.c)
 *     sub_1400F60E0 @ 0x1400F60E0 (sub_1400F60E0.c)
 *     sub_1400F6320 @ 0x1400F6320 (sub_1400F6320.c)
 *     sub_1400F6568 @ 0x1400F6568 (sub_1400F6568.c)
 *     sub_1400FBDFC @ 0x1400FBDFC (sub_1400FBDFC.c)
 *     sub_1400FC314 @ 0x1400FC314 (sub_1400FC314.c)
 *     sub_140107670 @ 0x140107670 (sub_140107670.c)
 *     sub_140107CC0 @ 0x140107CC0 (sub_140107CC0.c)
 *     sub_140108D10 @ 0x140108D10 (sub_140108D10.c)
 *     sub_140108F3C @ 0x140108F3C (sub_140108F3C.c)
 *     sub_140109194 @ 0x140109194 (sub_140109194.c)
 *     sub_1401093A0 @ 0x1401093A0 (sub_1401093A0.c)
 *     sub_140109588 @ 0x140109588 (sub_140109588.c)
 *     sub_140109D34 @ 0x140109D34 (sub_140109D34.c)
 *     sub_14019AA60 @ 0x14019AA60 (sub_14019AA60.c)
 * Callees:
 *     sub_1400BDE7C @ 0x1400BDE7C (sub_1400BDE7C.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 */

__int64 __fastcall sub_1400BD378(PVOID SystemArgument2, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x2000u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x10000u;
  result = sub_140122670(SystemArgument2);
  if ( (int)result >= 0 )
    return sub_1400BDE7C(SystemArgument2);
  return result;
}
