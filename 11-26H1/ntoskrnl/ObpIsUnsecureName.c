/*
 * XREFs of ObpIsUnsecureName @ 0x140A3BA54
 * Callers:
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 */

char __fastcall ObpIsUnsecureName(PCUNICODE_STRING String2, BOOLEAN a2)
{
  unsigned int *p_CurrentRunTime; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !LOWORD(stru_140E66D40.CurrentRunTime) )
    return 0;
  p_CurrentRunTime = &stru_140E66D40.CurrentRunTime;
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)p_CurrentRunTime);
    if ( DestinationString.Length )
    {
      if ( RtlPrefixUnicodeString(&DestinationString, String2, a2) )
        break;
    }
    p_CurrentRunTime = (unsigned int *)((char *)p_CurrentRunTime
                                      + 2 * (((unsigned __int64)DestinationString.Length + 2) >> 1));
    if ( !DestinationString.Length )
      return 0;
  }
  return 1;
}
