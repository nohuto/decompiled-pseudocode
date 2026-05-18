/*
 * XREFs of sub_180043974 @ 0x180043974
 * Callers:
 *     sub_180043BE0 @ 0x180043BE0 (sub_180043BE0.c)
 *     sub_180043D5C @ 0x180043D5C (sub_180043D5C.c)
 * Callees:
 *     sub_1800184AC @ 0x1800184AC (sub_1800184AC.c)
 *     sub_180045E94 @ 0x180045E94 (sub_180045E94.c)
 */

_QWORD *sub_180043974(_QWORD *a1, __int64 a2, int *a3, ...)
{
  __int64 v5; // rdx
  int v6; // eax
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_180045E94(a1, 1LL);
  v5 = *a1 + 4LL;
  if ( *a3 == _mm_cvtsi128_si32((__m128i)0LL) )
    v6 = 0;
  else
    v6 = *a3;
  *(_DWORD *)*a1 = v6;
  a1[1] = v5;
  v8 = 0LL;
  sub_1800184AC((__int64 *)va);
  return a1;
}
