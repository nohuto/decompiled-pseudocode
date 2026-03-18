/*
 * XREFs of ExpSingleStringCheck @ 0x140CE4718
 * Callers:
 *     ExpStringCheck @ 0x140CE4750 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     crc32 @ 0x1404843B4 (crc32.c)
 */

__int64 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return crc32(0LL, (__int64)DestinationString.Buffer, DestinationString.Length);
}
