/*
 * XREFs of _mbstrlen @ 0x1801317D8
 * Callers:
 *     mbstowcs @ 0x18012B180 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1800BA750 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *String)
{
  char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)String;
  while ( (unsigned __int16)RtlAnsiCharToUnicodeChar(&v3) )
    ;
  return v3 - String - 1;
}
