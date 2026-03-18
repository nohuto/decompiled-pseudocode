/*
 * XREFs of ??8CPathData@@QEBA_NAEBV0@@Z @ 0x18016E6E0
 * Callers:
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18021A844 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

bool __fastcall CPathData::operator==(__int64 a1, __int64 a2)
{
  size_t v2; // r8

  v2 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  return v2 == *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16)
      && memcmp_0(*(const void **)(a1 + 16), *(const void **)(a2 + 16), v2) == 0;
}
