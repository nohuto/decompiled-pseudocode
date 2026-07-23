/*
 * XREFs of ExpSingleStringCheck @ 0x140CEAAB8
 * Callers:
 *     ExpStringCheck @ 0x140CEAAF0 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     crc32 @ 0x14047DD24 (crc32.c)
 */

__int64 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return crc32(0LL, (__int64)DestinationString.Buffer, DestinationString.Length);
}
