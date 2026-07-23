/*
 * XREFs of wcslen @ 0x14053A520
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1403AF970 (SepVerifyDesktopAppxPackageName.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     PopFxStopDeviceAccounting @ 0x1404227BC (PopFxStopDeviceAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140422BBC (PopDiagTraceFxDeviceAccounting.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PiUEventHashStringIntoBucket @ 0x1404AE434 (PiUEventHashStringIntoBucket.c)
 *     PopOpenKey @ 0x1404E1080 (PopOpenKey.c)
 *     PopReadRegKeyValue @ 0x1404E60C8 (PopReadRegKeyValue.c)
 *     MicrocodeLogRegistry @ 0x1404F08C0 (MicrocodeLogRegistry.c)
 *     PrpWriteLogsToRegistry @ 0x1404F09A8 (PrpWriteLogsToRegistry.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1404F1678 (RtlpMuiRegAddAlternateCodePage.c)
 *     PnpMultiSzContainsString @ 0x1404F40FC (PnpMultiSzContainsString.c)
 *     IopAllowRemoteDASD @ 0x1404FEC38 (IopAllowRemoteDASD.c)
 *     wcscat @ 0x14053A360 (wcscat.c)
 *     wcscpy @ 0x14053A3A0 (wcscpy.c)
 *     wcsncat @ 0x14053A5B0 (wcsncat.c)
 *     wcstombs @ 0x14053AB30 (wcstombs.c)
 *     swscanf_s @ 0x14053EE70 (swscanf_s.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 *     QueryRegistryHideMachine @ 0x140D0EB00 (QueryRegistryHideMachine.c)
 *     PopSleepstudyInitialize @ 0x140D0FD08 (PopSleepstudyInitialize.c)
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
