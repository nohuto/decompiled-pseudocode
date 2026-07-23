/*
 * XREFs of RtlpGetUserLocaleName @ 0x18004C938
 * Callers:
 *     RtlpMatchUserLanguage @ 0x18004C874 (RtlpMatchUserLanguage.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x1800515E0 (RtlLcidToLocaleName.c)
 * Callees:
 *     RtlpGetLocaleDataKey @ 0x18004CA18 (RtlpGetLocaleDataKey.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpGetUserLocaleName(PUNICODE_STRING DestinationString)
{
  void *LocaleDataKey; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v6; // [rsp+3Ch] [rbp-CCh]
  unsigned int Src; // [rsp+40h] [rbp-C8h]
  int Src_4; // [rsp+44h] [rbp-C4h] BYREF

  ResultLength = 0;
  LocaleDataKey = (void *)RtlpGetLocaleDataKey();
  if ( !LocaleDataKey
    || NtQueryValueKey(
         LocaleDataKey,
         (PUNICODE_STRING)&`RtlpGetUserLocaleName'::`2'::KeyValueName,
         KeyValuePartialInformation,
         KeyValueInformation,
         0xBAu,
         &ResultLength) < 0
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
