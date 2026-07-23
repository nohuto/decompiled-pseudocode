/*
 * XREFs of HalReportResourceUsage @ 0x140CB3690
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HalpInitSystemHelper @ 0x140BEF9CC (HalpInitSystemHelper.c)
 *     HalpReportResourceUsage @ 0x140CB4938 (HalpReportResourceUsage.c)
 */

__int64 __fastcall HalReportResourceUsage(int a1)
{
  int v1; // edx
  unsigned int v2; // ecx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  switch ( a1 )
  {
    case -1:
      v1 = 24;
      v2 = 23;
      return HalpInitSystemHelper(v2, v1);
    case 0:
      HalpInitSystemHelper(0x1Bu, 28);
      RtlInitUnicodeString(&DestinationString, L"ACPI x64 platform");
      return HalpReportResourceUsage(&DestinationString);
    case 1:
      v1 = 30;
      v2 = 29;
      return HalpInitSystemHelper(v2, v1);
  }
  return result;
}
