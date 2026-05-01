/*
 * XREFs of ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1800ABC8C
 * Callers:
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x1800AD318 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800F5610 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x1802991BC (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x180339690 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180339690.c)
 *     ?on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1803B3EB4 (-on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18068E494 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18068E8FC (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18068F1E4 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 * Callees:
 *     ??$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ @ 0x1800ABD9C (--$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800AD1DC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::to_hstring(
        struct winrt::impl::shared_hstring_header **a1,
        unsigned int *a2)
{
  struct winrt::impl::shared_hstring_header *v3; // r14
  unsigned int v4; // edx
  __int64 v5; // rbx
  int v7; // [rsp+20h] [rbp-E8h]
  int v8; // [rsp+28h] [rbp-E0h]
  int v9; // [rsp+30h] [rbp-D8h]
  int v10; // [rsp+38h] [rbp-D0h]
  int v11; // [rsp+40h] [rbp-C8h]
  int v12; // [rsp+48h] [rbp-C0h]
  int v13; // [rsp+50h] [rbp-B8h]
  int v14; // [rsp+58h] [rbp-B0h]
  int v15; // [rsp+60h] [rbp-A8h]
  _WORD Source[40]; // [rsp+80h] [rbp-88h] BYREF

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
  v5 = -1LL;
  do
    ++v5;
  while ( Source[v5] );
  if ( (_DWORD)v5 )
  {
    v3 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)(unsigned int)v5, v4);
    memcpy_s_3((char *)v3 + 28, 2LL * (unsigned int)v5, Source, 2LL * (unsigned int)v5);
  }
  *a1 = v3;
  return a1;
}
