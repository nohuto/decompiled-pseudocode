/*
 * XREFs of towupper @ 0x14053A280
 * Callers:
 *     PfSnParametersVerify @ 0x1407CA974 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
