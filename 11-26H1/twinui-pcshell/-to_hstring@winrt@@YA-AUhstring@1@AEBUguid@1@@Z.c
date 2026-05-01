/*
 * XREFs of ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1801C55E4
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B0678 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x18023F5D8 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x18028FEA0 (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x1803391B0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureSystemDialog-.c)
 *     ?on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1803BD2B8 (-on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B58F4 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B5D34 (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B6634 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800306AC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     ??$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ @ 0x1801C56F0 (--$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcpy_s_3 @ 0x1802D97A0 (memcpy_s_3.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::to_hstring(
        struct winrt::impl::shared_hstring_header **a1,
        unsigned int *a2)
{
  struct winrt::impl::shared_hstring_header *v3; // rbp
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-E8h]
  int v8; // [rsp+28h] [rbp-E0h]
  int v9; // [rsp+30h] [rbp-D8h]
  int v10; // [rsp+38h] [rbp-D0h]
  int v11; // [rsp+40h] [rbp-C8h]
  int v12; // [rsp+48h] [rbp-C0h]
  int v13; // [rsp+50h] [rbp-B8h]
  int v14; // [rsp+58h] [rbp-B0h]
  int v15; // [rsp+60h] [rbp-A8h]
  _BYTE Source[80]; // [rsp+80h] [rbp-88h] BYREF

  v15 = *((unsigned __int8 *)a2 + 15);
  v3 = 0LL;
  v14 = *((unsigned __int8 *)a2 + 14);
  v13 = *((unsigned __int8 *)a2 + 13);
  v12 = *((unsigned __int8 *)a2 + 12);
  v11 = *((unsigned __int8 *)a2 + 11);
  v10 = *((unsigned __int8 *)a2 + 10);
  v9 = *((unsigned __int8 *)a2 + 9);
  v8 = *((unsigned __int8 *)a2 + 8);
  v7 = *((unsigned __int16 *)a2 + 3);
  swprintf_s<40>(
    Source,
    L"{%08x-%04hx-%04hx-%02hhx%02hhx-%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx}",
    *a2,
    *((unsigned __int16 *)a2 + 2),
    v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v4 = std::_WChar_traits<wchar_t>::length((__int64)Source);
  v5 = v4;
  if ( v4 )
  {
    v3 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)v4);
    memcpy_s_3((char *)v3 + 28, 2LL * v5, Source, 2LL * v5);
  }
  *a1 = v3;
  return a1;
}
