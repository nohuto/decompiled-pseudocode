/*
 * XREFs of PopDiagGetPowerSchemeInfo @ 0x1404FA6CC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

unsigned int __fastcall PopDiagGetPowerSchemeInfo(void *Buf1, void *a2, unsigned int *a3)
{
  unsigned int result; // eax

  if ( memcmp(Buf1, &GUID_MAX_POWER_SAVINGS, 0x10uLL) && memcmp(Buf1, &GUID_MIN_POWER_SAVINGS, 0x10uLL) )
  {
    if ( memcmp(Buf1, &GUID_TYPICAL_POWER_SAVINGS, 0x10uLL) )
      *a3 |= 0x10u;
  }
  if ( !memcmp(a2, &GUID_MAX_POWER_SAVINGS, 0x10uLL) )
  {
    result = *a3 & 0xFFFFFFF0 | 1;
  }
  else if ( !memcmp(a2, &GUID_MIN_POWER_SAVINGS, 0x10uLL) )
  {
    result = *a3 & 0xFFFFFFF0 | 2;
  }
  else
  {
    result = memcmp(a2, &GUID_TYPICAL_POWER_SAVINGS, 0x10uLL);
    if ( result )
      return result;
    result = *a3 & 0xFFFFFFF0 | 4;
  }
  *a3 = result;
  return result;
}
