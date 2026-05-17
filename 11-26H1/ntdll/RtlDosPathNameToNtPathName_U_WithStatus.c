/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800CBA00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlDosPathNameToNtPathName_U_WithStatus(
        const wchar_t *a1,
        unsigned __int16 *a2,
        const void **a3,
        __int64 a4)
{
  size_t v7; // rax
  __m128i v9; // [rsp+40h] [rbp-18h] BYREF

  v9.m128i_i64[1] = (__int64)a1;
  v9.m128i_i64[0] = 0LL;
  if ( !a1 )
    return RtlpDosPathNameToRelativeNtPathName(0, &v9, 0LL, a2, 0LL, a3, a4);
  v7 = wcslen(a1);
  if ( v7 <= 0x7FFE )
  {
    v9.m128i_i16[0] = 2 * v7;
    v9.m128i_i16[1] = 2 * v7 + 2;
    return RtlpDosPathNameToRelativeNtPathName(0, &v9, 0LL, a2, 0LL, a3, a4);
  }
  return 3221225734LL;
}
