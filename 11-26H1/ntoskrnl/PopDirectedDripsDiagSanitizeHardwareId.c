/*
 * XREFs of PopDirectedDripsDiagSanitizeHardwareId @ 0x140B5369C
 * Callers:
 *     PopDirectedDripsDiagRundownDevices @ 0x140B0ACE8 (PopDirectedDripsDiagRundownDevices.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 */

const UNICODE_STRING *__fastcall PopDirectedDripsDiagSanitizeHardwareId(unsigned __int16 *a1)
{
  __int64 i; // rdx
  unsigned int v3; // ecx
  __int64 v4; // r8
  unsigned int v5; // edi
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  String2 = 0LL;
  for ( i = 0LL; ; i = v5 + 1 )
  {
    v3 = *a1 >> 1;
    if ( (unsigned int)i >= v3 )
      break;
    v4 = *((_QWORD *)a1 + 1);
    v5 = i;
    do
    {
      if ( *(_WORD *)(v4 + 2LL * v5) == 44 )
        break;
      ++v5;
    }
    while ( v5 < v3 );
    String2.Buffer = (wchar_t *)(v4 + 2 * i);
    String2.Length = 2 * (v5 - i);
    String2.MaximumLength = String2.Length;
    if ( RtlPrefixUnicodeString(&PopBthEnumEnumeratorPrefix, &String2, 1u) )
      return &PopBthEnumEnumeratorPrefix;
  }
  return (const UNICODE_STRING *)a1;
}
