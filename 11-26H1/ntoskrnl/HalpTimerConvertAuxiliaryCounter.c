/*
 * XREFs of HalpTimerConvertAuxiliaryCounter @ 0x1404CE8A0
 * Callers:
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404E7D10 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerConvertAuxiliaryCounter(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 *a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r11
  unsigned __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // rcx

  v7 = 0LL;
  v8 = a5 - a1;
  if ( a1 >= a5 )
    v8 = a1 - a5;
  if ( v8 / a2 >= 0xA )
  {
    result = 3221225485LL;
  }
  else
  {
    if ( !is_mul_ok(a4, v8) )
    {
LABEL_12:
      result = 3221225473LL;
      goto LABEL_8;
    }
    v10 = a4 * (unsigned __int128)v8 / a2;
    v7 = 0x3B9ACA00 / a4;
    if ( a1 >= a5 )
    {
      if ( a3 >= v10 )
      {
        result = 0LL;
        *a6 = a3 - v10;
        goto LABEL_8;
      }
      goto LABEL_12;
    }
    v12 = -1LL;
    if ( v10 + a3 >= v10 )
      v12 = v10 + a3;
    result = v10 + a3 < v10 ? 0xC0000095 : 0;
    *a6 = v12;
  }
LABEL_8:
  if ( a7 )
    *a7 = v7;
  if ( (int)result < 0 )
  {
    if ( a7 )
      *a7 = 0LL;
    *a6 = 0LL;
  }
  return result;
}
