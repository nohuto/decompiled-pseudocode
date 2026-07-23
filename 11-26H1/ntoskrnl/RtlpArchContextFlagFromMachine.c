/*
 * XREFs of RtlpArchContextFlagFromMachine @ 0x1409E72A0
 * Callers:
 *     RtlGetEnabledExtendedFeatures @ 0x14061C420 (RtlGetEnabledExtendedFeatures.c)
 *     PspWow64SetupCpuArea @ 0x1409E6E90 (PspWow64SetupCpuArea.c)
 *     PspWow64InitThread @ 0x1409E712C (PspWow64InitThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpArchContextFlagFromMachine(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0x14Cu:
      return 0x10000LL;
    case 0x1C4u:
      return 0x200000LL;
    case 0x8664u:
      return 0x100000LL;
    case 0xAA64u:
      return 0x400000LL;
  }
  return 0LL;
}
