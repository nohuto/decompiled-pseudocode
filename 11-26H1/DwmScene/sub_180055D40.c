/*
 * XREFs of sub_180055D40 @ 0x180055D40
 * Callers:
 *     sub_180055E5C @ 0x180055E5C (sub_180055E5C.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 */

bool __fastcall sub_180055D40(__int64 a1, __int64 a2)
{
  char v2; // bl
  const void *v5; // rax
  __int64 v6; // rdx
  const void *v7; // r8

  v2 = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
  {
    sub_1800148EC(a2 + 8);
    v5 = (const void *)sub_1800148EC(a1 + 8);
    if ( sub_18001CFB0(v5, *(_QWORD *)(a1 + 24), v7, *(_QWORD *)(v6 + 24)) )
      return _mm_movemask_ps(_mm_cmpeq_ps(*(__m128 *)(a1 + 40), *(__m128 *)(a2 + 40))) == 15;
  }
  return v2;
}
