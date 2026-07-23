/*
 * XREFs of PnpLogDuplicateDevice @ 0x140A37A98
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpLogEvent @ 0x140A37B48 (PnpLogEvent.c)
 */

__int64 __fastcall PnpLogDuplicateDevice(PCWSTR SourceString, PCWSTR a2)
{
  unsigned __int16 Length; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v6; // [rsp+40h] [rbp-10h] BYREF

  DestinationString = 0LL;
  v6 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v6, a2);
  if ( (unsigned __int64)v6.MaximumLength + 2 > 0xF0 )
  {
    v6.Length = 238;
    Length = 0;
    goto LABEL_6;
  }
  if ( v6.MaximumLength + (unsigned int)DestinationString.MaximumLength > 0xF0 )
  {
    Length = 238 - v6.MaximumLength;
LABEL_6:
    DestinationString.Length = Length;
    return PnpLogEvent((unsigned __int64)&DestinationString & -(__int64)(Length != 0), &v6, 3221487672LL, 0LL, 0);
  }
  Length = DestinationString.Length;
  return PnpLogEvent((unsigned __int64)&DestinationString & -(__int64)(Length != 0), &v6, 3221487672LL, 0LL, 0);
}
