/*
 * XREFs of AVrfpFormatCurrentUserKeyPath @ 0x18011E54C
 * Callers:
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x180045040 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     AVrfpAppendCurrentUserSid @ 0x18010C14C (AVrfpAppendCurrentUserSid.c)
 */

int __fastcall AVrfpFormatCurrentUserKeyPath(PUNICODE_STRING Destination)
{
  int result; // eax

  *Destination = 0LL;
  Destination->MaximumLength = 1252;
  Destination->Buffer = (wchar_t *)&AVrfpCurrentUserKeyPath;
  result = RtlAppendUnicodeToString(Destination, L"\\REGISTRY\\USER\\");
  if ( result >= 0 )
  {
    result = AVrfpAppendCurrentUserSid(&Destination->Length);
    if ( result >= 0 )
      return RtlAppendUnicodeStringToString(Destination, &stru_180171870);
  }
  return result;
}
