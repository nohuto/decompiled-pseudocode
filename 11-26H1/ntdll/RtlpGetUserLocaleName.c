/*
 * XREFs of RtlpGetUserLocaleName @ 0x180001200
 * Callers:
 *     RtlpMatchUserLanguage @ 0x18000113C (RtlpMatchUserLanguage.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x180005EB0 (RtlLcidToLocaleName.c)
 * Callees:
 *     RtlpGetLocaleDataKey @ 0x1800012E0 (RtlpGetLocaleDataKey.c)
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpGetUserLocaleName(PUNICODE_STRING DestinationString)
{
  __int64 LocaleDataKey; // rax
  int v4; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v5[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v6; // [rsp+3Ch] [rbp-CCh]
  unsigned int Src; // [rsp+40h] [rbp-C8h]
  int Src_4; // [rsp+44h] [rbp-C4h] BYREF

  v4 = 0;
  LocaleDataKey = RtlpGetLocaleDataKey();
  if ( !LocaleDataKey
    || (int)NtQueryValueKey(LocaleDataKey, &`RtlpGetUserLocaleName'::`2'::KeyValueName, 2LL, v5, 186, &v4) < 0
    || v6 != 1
    || (Src & 1) != 0
    || !Src
    || *((_WORD *)&Src + ((unsigned __int64)Src >> 1) + 1)
    || Src > DestinationString->MaximumLength )
  {
    return 3221225473LL;
  }
  memmove(DestinationString->Buffer, &Src_4, Src);
  RtlInitUnicodeString(DestinationString, DestinationString->Buffer);
  return 0LL;
}
