/*
 * XREFs of sub_14002079C @ 0x14002079C
 * Callers:
 *     sub_140003700 @ 0x140003700 (sub_140003700.c)
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_14000B750 @ 0x14000B750 (sub_14000B750.c)
 *     sub_14000BA00 @ 0x14000BA00 (sub_14000BA00.c)
 *     sub_14001FB24 @ 0x14001FB24 (sub_14001FB24.c)
 * Callees:
 *     sub_140004670 @ 0x140004670 (sub_140004670.c)
 */

__int64 __fastcall sub_14002079C(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v7; // rcx

  v3 = a2;
  sub_140004670(a1, a2, a3, 1);
  result = *(_QWORD *)(a1 + 264);
  if ( !*(_QWORD *)(result + 72 * v3 + 64) )
  {
    if ( !*(_QWORD *)(result + 72 * v3 + 56) )
      sub_140004670(a1, v3, a3, 0);
    v7 = *(_QWORD *)(a1 + 264);
    result = *(_QWORD *)(v7 + 72 * v3 + 56);
    *(_QWORD *)(v7 + 72 * v3 + 64) = result;
  }
  return result;
}
