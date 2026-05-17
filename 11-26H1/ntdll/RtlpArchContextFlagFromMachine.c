/*
 * XREFs of RtlpArchContextFlagFromMachine @ 0x1800C9FF0
 * Callers:
 *     RtlGetEnabledExtendedFeatures @ 0x1800C9F80 (RtlGetEnabledExtendedFeatures.c)
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
