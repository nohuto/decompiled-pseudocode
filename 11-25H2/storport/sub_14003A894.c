/*
 * XREFs of sub_14003A894 @ 0x14003A894
 * Callers:
 *     sub_14003A710 @ 0x14003A710 (sub_14003A710.c)
 *     sub_14003A800 @ 0x14003A800 (sub_14003A800.c)
 * Callees:
 *     sub_1401B06F4 @ 0x1401B06F4 (sub_1401B06F4.c)
 */

__int64 __fastcall sub_14003A894(__int64 a1)
{
  struct _UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v3, L"PowerCycleCount");
  return sub_1401B06F4(*(_QWORD *)(a1 + 8), (unsigned int)&DestinationString, (unsigned int)&v3, 4, a1 + 3352, 4);
}
