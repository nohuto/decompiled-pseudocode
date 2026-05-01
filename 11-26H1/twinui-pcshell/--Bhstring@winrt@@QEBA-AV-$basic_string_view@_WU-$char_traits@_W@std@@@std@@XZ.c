/*
 * XREFs of ??Bhstring@winrt@@QEBA?AV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@XZ @ 0x1802C3AF8
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B0678 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B58F4 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B5D34 (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B6634 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::hstring::operator std::wstring_view(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( *a1 )
  {
    *a2 = *(_QWORD *)(v2 + 16);
    a2[1] = *(unsigned int *)(v2 + 4);
  }
  else
  {
    a2[1] = 0LL;
    *a2 = &pvData;
  }
  return a2;
}
