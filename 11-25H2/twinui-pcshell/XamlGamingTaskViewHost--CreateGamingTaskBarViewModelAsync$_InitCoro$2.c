/*
 * XREFs of XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_InitCoro$2 @ 0x18067A2E4
 * Callers:
 *     ?CreateGamingTaskBarViewModelAsync@XamlGamingTaskViewHost@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18067A560 (-CreateGamingTaskBarViewModelAsync@XamlGamingTaskViewHost@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1 @ 0x18067A340 (XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 113) = a4;
  *(_QWORD *)a2 = XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 112) = 0;
  return XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync__ResumeCoro_1(a2);
}
