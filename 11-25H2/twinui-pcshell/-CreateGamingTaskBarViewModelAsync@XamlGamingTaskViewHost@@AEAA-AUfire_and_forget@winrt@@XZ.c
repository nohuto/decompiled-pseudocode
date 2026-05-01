/*
 * XREFs of ?CreateGamingTaskBarViewModelAsync@XamlGamingTaskViewHost@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18067A560
 * Callers:
 *     ?CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18067A5D0 (-CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experienc.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_InitCoro$2 @ 0x18067A2E4 (XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+B8h] [rbp+10h] BYREF

  v4 = operator new(0x80uLL);
  v6 = 0;
  XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
