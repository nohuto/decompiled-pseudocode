/*
 * XREFs of sub_140004108 @ 0x140004108
 * Callers:
 *     sub_1400041F8 @ 0x1400041F8 (sub_1400041F8.c)
 * Callees:
 *     sub_140004ADC @ 0x140004ADC (sub_140004ADC.c)
 */

__int64 __fastcall sub_140004108(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = sub_140004ADC(a1, a2, a1[1], 0LL);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
