/*
 * XREFs of _mbstrlen @ 0x1404FF97C
 * Callers:
 *     mbstowcs @ 0x1404FC3D0 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1408E6F60 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *Str)
{
  const char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = Str;
  while ( (unsigned __int16)RtlAnsiCharToUnicodeChar(&v3) )
    ;
  return v3 - Str - 1;
}
