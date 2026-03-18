/*
 * XREFs of _mbstrlen @ 0x14053A37C
 * Callers:
 *     mbstowcs @ 0x140536D40 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x14096CA60 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *Str)
{
  const char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = Str;
  while ( (unsigned __int16)RtlAnsiCharToUnicodeChar(&v3) )
    ;
  return v3 - Str - 1;
}
