/*
 * XREFs of ObpIsUnsecureName @ 0x140A289B4
 * Callers:
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x140A29BF0 (RtlPrefixUnicodeString.c)
 */

char __fastcall ObpIsUnsecureName(PCUNICODE_STRING String2, BOOLEAN a2)
{
  unsigned __int64 *p_ThreadLock; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !LOWORD(stru_140E66B30.ThreadLock) )
    return 0;
  p_ThreadLock = &stru_140E66B30.ThreadLock;
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)p_ThreadLock);
    if ( DestinationString.Length )
    {
      if ( RtlPrefixUnicodeString(&DestinationString, String2, a2) )
        break;
    }
    p_ThreadLock = (unsigned __int64 *)((char *)p_ThreadLock
                                      + 2 * (((unsigned __int64)DestinationString.Length + 2) >> 1));
    if ( !DestinationString.Length )
      return 0;
  }
  return 1;
}
