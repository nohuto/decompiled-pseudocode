/*
 * XREFs of AVrfpFormatCurrentUserKeyPath @ 0x18011E79C
 * Callers:
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x18005AAC0 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     AVrfpAppendCurrentUserSid @ 0x18010C5FC (AVrfpAppendCurrentUserSid.c)
 */

int __fastcall AVrfpFormatCurrentUserKeyPath(__int64 a1)
{
  int result; // eax

  *(_OWORD *)a1 = 0LL;
  *(_WORD *)(a1 + 2) = 1252;
  *(_QWORD *)(a1 + 8) = &AVrfpCurrentUserKeyPath;
  result = RtlAppendUnicodeToString((unsigned __int16 *)a1, L"\\REGISTRY\\USER\\");
  if ( result >= 0 )
  {
    result = AVrfpAppendCurrentUserSid((unsigned __int16 *)a1);
    if ( result >= 0 )
      return RtlAppendUnicodeStringToString((unsigned __int16 *)a1, &qword_180172870);
  }
  return result;
}
