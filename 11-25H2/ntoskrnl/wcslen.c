/*
 * XREFs of wcslen @ 0x1404FD750
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140291ED8 (SepVerifyDesktopAppxPackageName.c)
 *     MiShowBadMapper @ 0x1403BAD60 (MiShowBadMapper.c)
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     PopFxStopDeviceAccounting @ 0x1404266B8 (PopFxStopDeviceAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140426AF4 (PopDiagTraceFxDeviceAccounting.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     PiUEventHashStringIntoBucket @ 0x14047AB18 (PiUEventHashStringIntoBucket.c)
 *     BapdWriteEtwEvents @ 0x1404A4354 (BapdWriteEtwEvents.c)
 *     PopOpenKey @ 0x1404A9320 (PopOpenKey.c)
 *     PopReadRegKeyValue @ 0x1404AABEC (PopReadRegKeyValue.c)
 *     PnpMultiSzContainsString @ 0x1404B81E0 (PnpMultiSzContainsString.c)
 *     PopQueryPowerButtonConfiguration @ 0x1404C039C (PopQueryPowerButtonConfiguration.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1404C0FC4 (RtlpMuiRegLoadLicInformation.c)
 *     PrpWriteLogsToRegistry @ 0x1404C1DC4 (PrpWriteLogsToRegistry.c)
 *     IopAllowRemoteDASD @ 0x1404CB634 (IopAllowRemoteDASD.c)
 *     wcscat @ 0x1404FD590 (wcscat.c)
 *     wcscpy @ 0x1404FD5D0 (wcscpy.c)
 *     wcsncat @ 0x1404FD7E0 (wcsncat.c)
 *     RtlCreateUnicodeString @ 0x140893990 (RtlCreateUnicodeString.c)
 *     QueryRegistryHideMachine @ 0x140C51544 (QueryRegistryHideMachine.c)
 *     PopSleepstudyInitialize @ 0x140C551E8 (PopSleepstudyInitialize.c)
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
