/*
 * XREFs of mbstowcs @ 0x18012AEF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180025AE0 (RtlMultiByteToUnicodeN.c)
 *     _errno @ 0x180106E40 (_errno.c)
 *     _mbstrlen @ 0x180131548 (_mbstrlen.c)
 *     strlen @ 0x180164EE0 (strlen.c)
 */

size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  int v3; // edi
  size_t result; // rax
  size_t BytesInUnicodeString; // [rsp+40h] [rbp+8h] BYREF

  v3 = MaxCount;
  if ( Dest && !MaxCount )
    return 0LL;
  if ( MaxCount > 0x7FFFFFFF )
    return -1LL;
  if ( !Dest )
    return strlen(Source);
  BytesInUnicodeString = mbstrlen(Source);
  if ( RtlMultiByteToUnicodeN(Dest, 2 * v3, (PULONG)&BytesInUnicodeString, Source, BytesInUnicodeString + 1) < 0 )
  {
    *errno() = 42;
    *Dest = 0;
    return -1LL;
  }
  result = BytesInUnicodeString >> 1;
  BytesInUnicodeString = result;
  if ( !Dest[result - 1] )
    --result;
  return result;
}
