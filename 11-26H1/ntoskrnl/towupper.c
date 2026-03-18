/*
 * XREFs of towupper @ 0x140537E00
 * Callers:
 *     PfSnParametersVerify @ 0x1407C7914 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408D5170 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
