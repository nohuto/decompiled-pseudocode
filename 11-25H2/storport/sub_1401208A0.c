/*
 * XREFs of sub_1401208A0 @ 0x1401208A0
 * Callers:
 *     sub_1400ED960 @ 0x1400ED960 (sub_1400ED960.c)
 *     sub_1400EEC0C @ 0x1400EEC0C (sub_1400EEC0C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_1401208A0(__int64 a1)
{
  unsigned int v1; // esi
  ULONG RecommendedSharedDataAlignment; // eax
  int v5; // ecx
  ULONG v6; // ebx
  ULONG v7; // eax
  __int64 v8; // rax

  v1 = *(_DWORD *)(a1 + 124);
  if ( !v1 )
    return 3221225485LL;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v5 = (v1 >> 3) + 1;
  if ( (v1 & 7) == 0 )
    v5 = v1 >> 3;
  v6 = (RecommendedSharedDataAlignment + v5 - 1) / KeGetRecommendedSharedDataAlignment();
  v7 = KeGetRecommendedSharedDataAlignment();
  v8 = sub_1400143E0(72LL, v6 * v7, 1380082002LL, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL) + 8LL));
  *(_QWORD *)(a1 + 80) = v8;
  return v8 == 0 ? 0xC000009A : 0;
}
