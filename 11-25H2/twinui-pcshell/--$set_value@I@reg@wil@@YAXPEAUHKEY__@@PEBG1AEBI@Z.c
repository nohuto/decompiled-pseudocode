/*
 * XREFs of ??$set_value@I@reg@wil@@YAXPEAUHKEY__@@PEBG1AEBI@Z @ 0x180335704
 * Callers:
 *     _anonymous_namespace_::SetConfigurationValue_unsigned_long_ @ 0x1803348B0 (_anonymous_namespace_--SetConfigurationValue_unsigned_long_.c)
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x180335F6C (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@W.c)
 *     ?UpdatePressAndHoldSignalSentFlag@CopilotHotkeyManager@@AEAAX_N@Z @ 0x1806105F4 (-UpdatePressAndHoldSignalSentFlag@CopilotHotkeyManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

int __fastcall wil::reg::set_value<unsigned int>(HKEY a1, const WCHAR *a2, const WCHAR *a3, const void *a4)
{
  int result; // eax
  bool v5; // sf
  int lpData; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  result = RegSetKeyValueW(a1, a2, a3, 4u, a4, 4u);
  v5 = result < 0;
  if ( result > 0 )
  {
    result = (unsigned __int16)result | 0x80070000;
    v5 = result < 0;
  }
  if ( v5 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)result,
      lpData);
  return result;
}
