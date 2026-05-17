/*
 * XREFs of mbstowcs @ 0x18012B180
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x18003B570 (RtlMultiByteToUnicodeN.c)
 *     _errno @ 0x180107440 (_errno.c)
 *     _mbstrlen @ 0x1801317D8 (_mbstrlen.c)
 *     strlen @ 0x180164FE0 (strlen.c)
 */

size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  int v3; // edi
  size_t result; // rax
  size_t v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = MaxCount;
  if ( Dest && !MaxCount )
    return 0LL;
  if ( MaxCount > 0x7FFFFFFF )
    return -1LL;
  if ( !Dest )
    return strlen(Source);
  v7 = mbstrlen(Source);
  if ( (int)RtlMultiByteToUnicodeN(Dest, 2 * v3, (unsigned int *)&v7, (unsigned __int8 *)Source, (int)v7 + 1) < 0 )
  {
    *errno() = 42;
    *Dest = 0;
    return -1LL;
  }
  result = v7 >> 1;
  v7 = result;
  if ( !Dest[result - 1] )
    --result;
  return result;
}
