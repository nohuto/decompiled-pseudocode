/*
 * XREFs of CmpCaptureUnicodeString @ 0x14097E720
 * Callers:
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     CmpNameFromAttributes @ 0x14097C958 (CmpNameFromAttributes.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14097DACC (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 */

__int64 __fastcall CmpCaptureUnicodeString(__m128i *a1, unsigned int *a2, char a3)
{
  _QWORD *v3; // rsi
  __int64 ULong64FromUser; // rax
  __int64 result; // rax
  __m128i v7; // [rsp+20h] [rbp-18h]

  v3 = a2 + 2;
  v7.m128i_i32[1] = 0;
  if ( a3 )
  {
    v7.m128i_i32[0] = RtlReadULongFromUser(a2);
    ULong64FromUser = RtlReadULong64FromUser(v3);
  }
  else
  {
    v7.m128i_i32[0] = *a2;
    ULong64FromUser = *v3;
  }
  v7.m128i_i64[1] = ULong64FromUser;
  v7.m128i_i16[1] = _mm_cvtsi128_si32(v7);
  if ( !v7.m128i_i16[0] )
    ULong64FromUser = 0LL;
  v7.m128i_i64[1] = ULong64FromUser;
  if ( (v7.m128i_i8[0] & 1) != 0 )
    return 3221225485LL;
  result = 0LL;
  *a1 = v7;
  return result;
}
