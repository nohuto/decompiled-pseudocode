/*
 * XREFs of GetGlobalizationUserModelType @ 0x1404FBFA4
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1404F05D4 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlIsMultiUsersInSessionSku @ 0x140809CE0 (RtlIsMultiUsersInSessionSku.c)
 *     RtlIsMultiSessionSku @ 0x140A968C0 (RtlIsMultiSessionSku.c)
 */

__int64 GetGlobalizationUserModelType()
{
  __int64 result; // rax

  result = (unsigned int)dword_140EEF0AC;
  if ( !dword_140EEF0AC )
  {
    if ( RtlIsMultiSessionSku() )
      result = 1LL;
    else
      result = (unsigned int)(RtlIsMultiUsersInSessionSku() != 0) + 2;
    dword_140EEF0AC = result;
  }
  return result;
}
