/*
 * XREFs of sqrtf @ 0x140539D80
 * Callers:
 *     <none>
 * Callees:
 *     _handle_errorf @ 0x14053CBA0 (_handle_errorf.c)
 */

float __cdecl sqrtf(float X)
{
  float result; // xmm0_4

  if ( (LODWORD(X) & 0x7F800000) == 0x7F800000 )
  {
    if ( (LODWORD(X) & 0x7FFFFF) != 0 )
    {
      result = 0.0;
      handle_errorf((unsigned int)"sqrtf", 5, LODWORD(X) | 0x400000, 1, 0, 33, LODWORD(X), 0, 1);
      return result;
    }
    if ( X < 0.0 )
      goto LABEL_5;
  }
  else if ( X < 0.0 && (LODWORD(X) & 0x7FFFFFFF) != 0 )
  {
LABEL_5:
    result = 0.0;
    handle_errorf((unsigned int)"sqrtf", 5, -4194304, 1, 8, 33, LODWORD(X), 0, 1);
    return result;
  }
  return fsqrt(X);
}
