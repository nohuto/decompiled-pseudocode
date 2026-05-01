/*
 * XREFs of ?IsDesktopInputContext@@YA_NXZ @ 0x1801339EC
 * Callers:
 *     ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x180133990 (-OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z.c)
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18034B060 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804A5E50 (-v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x180133A88 (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1803475B4 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 */

bool __fastcall IsDesktopInputContext(__int64 a1, enum Windows::Internal::Shell::Holographic::UserInputContext *a2)
{
  int UserInputContext; // eax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v3; // rdx
  int UserDisplayContext; // eax
  int v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+24h] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  UserInputContext = Windows::Internal::Shell::Holographic::GetUserInputContext(
                       (Windows::Internal::Shell::Holographic *)&v6,
                       a2);
  if ( UserInputContext < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x12,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\InputContextHelper.h",
      (const char *)(unsigned int)UserInputContext);
  if ( !v6 )
    return 1;
  v7 = 1;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v7,
                         v3);
  if ( UserDisplayContext < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x19,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\InputContextHelper.h",
      (const char *)(unsigned int)UserDisplayContext);
  return v7 != 1;
}
