/*
 * XREFs of wcslen @ 0x1405380A0
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1403D0998 (SepVerifyDesktopAppxPackageName.c)
 *     PopFxStopDeviceAccounting @ 0x14042B348 (PopFxStopDeviceAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14042B748 (PopDiagTraceFxDeviceAccounting.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     PiUEventHashStringIntoBucket @ 0x1404B4FE4 (PiUEventHashStringIntoBucket.c)
 *     PopOpenKey @ 0x1404E7CC0 (PopOpenKey.c)
 *     PopReadRegKeyValue @ 0x1404ECAE8 (PopReadRegKeyValue.c)
 *     MicrocodeLogRegistry @ 0x1404F72B0 (MicrocodeLogRegistry.c)
 *     PrpWriteLogsToRegistry @ 0x1404F7398 (PrpWriteLogsToRegistry.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1404F8068 (RtlpMuiRegAddAlternateCodePage.c)
 *     PnpMultiSzContainsString @ 0x1404FAAEC (PnpMultiSzContainsString.c)
 *     IopAllowRemoteDASD @ 0x1405052F8 (IopAllowRemoteDASD.c)
 *     wcscat @ 0x140537EE0 (wcscat.c)
 *     wcscpy @ 0x140537F20 (wcscpy.c)
 *     wcsncat @ 0x140538130 (wcsncat.c)
 *     wcstombs @ 0x1405386B0 (wcstombs.c)
 *     swscanf_s @ 0x14053C9F0 (swscanf_s.c)
 *     RtlCreateUnicodeString @ 0x140A70410 (RtlCreateUnicodeString.c)
 *     PspInitPhase0 @ 0x140D06FAC (PspInitPhase0.c)
 *     QueryRegistryHideMachine @ 0x140D08830 (QueryRegistryHideMachine.c)
 *     PopSleepstudyInitialize @ 0x140D09A38 (PopSleepstudyInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140D0B4DC (PopPowerAggregatorInitialize.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcslen(const wchar_t *Str)
{
  __m128i *i; // rdx
  unsigned __int64 v2; // r9
  const wchar_t *v3; // rax
  size_t v4; // rdx

  i = (__m128i *)Str;
  if ( ((unsigned __int8)Str & 1) != 0 )
  {
    while ( i->m128i_i16[0] )
      i = (__m128i *)((char *)i + 2);
    return ((char *)i - (char *)Str) >> 1;
  }
  v2 = ((16LL - ((unsigned __int8)Str & 0xF)) & (unsigned __int64)-(__int64)(((unsigned __int8)Str & 0xF) != 0LL)) >> 1;
  v3 = &Str[v2];
  if ( Str != v3 )
  {
    do
    {
      if ( !i->m128i_i16[0] )
        break;
      i = (__m128i *)((char *)i + 2);
    }
    while ( i != (__m128i *)v3 );
  }
  v4 = ((char *)i - (char *)Str) >> 1;
  if ( v4 == v2 )
  {
    for ( i = (__m128i *)&Str[v4]; !_mm_movemask_epi8(_mm_cmpeq_epi16((__m128i)0LL, *i)); ++i )
      ;
    while ( i->m128i_i16[0] )
      i = (__m128i *)((char *)i + 2);
    return ((char *)i - (char *)Str) >> 1;
  }
  return v4;
}
