/*
 * XREFs of RtlIsDosDeviceName_U @ 0x1800D7480
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsDosDeviceName_Ustr @ 0x180048E70 (RtlpIsDosDeviceName_Ustr.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlIsDosDeviceName_U(const wchar_t *a1)
{
  size_t v1; // rax
  __m128i v3; // [rsp+20h] [rbp-18h] BYREF

  v3.m128i_i64[0] = 0LL;
  v3.m128i_i64[1] = (__int64)a1;
  if ( !a1 )
    return RtlpIsDosDeviceName_Ustr(&v3);
  v1 = wcslen(a1);
  if ( v1 <= 0x7FFE )
  {
    v3.m128i_i16[0] = 2 * v1;
    v3.m128i_i16[1] = 2 * v1 + 2;
    return RtlpIsDosDeviceName_Ustr(&v3);
  }
  return 0LL;
}
