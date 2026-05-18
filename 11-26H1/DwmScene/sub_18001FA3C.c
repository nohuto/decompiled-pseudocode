/*
 * XREFs of sub_18001FA3C @ 0x18001FA3C
 * Callers:
 *     sub_1800898E0 @ 0x1800898E0 (sub_1800898E0.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001F094 @ 0x18001F094 (sub_18001F094.c)
 */

__int64 __fastcall sub_18001FA3C(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  const __m128i *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  const __m128i *v6; // r9

  sub_1800148EC(a2);
  v3 = (const __m128i *)sub_1800148EC(v2);
  return sub_18001F094(v3, *(_QWORD *)(v5 + 16), v5, v6, *(_QWORD *)(v4 + 16));
}
