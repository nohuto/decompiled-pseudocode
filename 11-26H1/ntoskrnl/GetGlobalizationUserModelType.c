/*
 * XREFs of GetGlobalizationUserModelType @ 0x1405026D4
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1404F6FC4 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlIsMultiUsersInSessionSku @ 0x140804240 (RtlIsMultiUsersInSessionSku.c)
 *     RtlIsMultiSessionSku @ 0x140A91D70 (RtlIsMultiSessionSku.c)
 */

__int64 GetGlobalizationUserModelType()
{
  __int64 result; // rax

  result = (unsigned int)dword_140EEED98;
  if ( !dword_140EEED98 )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku() )
      result = 1LL;
    else
      result = (unsigned int)((unsigned __int8)RtlIsMultiUsersInSessionSku() != 0) + 2;
    dword_140EEED98 = result;
  }
  return result;
}
