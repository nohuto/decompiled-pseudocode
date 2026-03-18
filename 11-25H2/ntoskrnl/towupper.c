/*
 * XREFs of towupper @ 0x1404FD4C0
 * Callers:
 *     PfSnParametersVerify @ 0x14073C0B8 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
