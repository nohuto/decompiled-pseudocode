/*
 * XREFs of sub_1400E9608 @ 0x1400E9608
 * Callers:
 *     sub_1400CD79C @ 0x1400CD79C (sub_1400CD79C.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_1400E9608(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v4; // rax

  if ( a1[89] || a1[107] )
    return 3221225701LL;
  v2 = sub_1400143E0(64LL, 192LL, 1363763538LL, *(_QWORD *)(a1[16] + 8LL));
  a1[89] = v2;
  if ( !v2 )
    return 3221225626LL;
  v4 = sub_1400143E0(64LL, 192LL, 1363763538LL, *(_QWORD *)(a1[16] + 8LL));
  a1[107] = v4;
  return v4 != 0 ? 0 : 0xC000009A;
}
