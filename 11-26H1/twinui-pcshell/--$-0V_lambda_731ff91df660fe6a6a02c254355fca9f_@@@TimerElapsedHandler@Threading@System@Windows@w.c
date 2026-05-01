/*
 * XREFs of ??$?0V_lambda_731ff91df660fe6a6a02c254355fca9f_@@@TimerElapsedHandler@Threading@System@Windows@winrt@@QEAA@V_lambda_731ff91df660fe6a6a02c254355fca9f_@@@Z @ 0x18033AC3C
 * Callers:
 *     ?StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180354548 (-StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler(
        _QWORD *a1,
        __int128 *a2)
{
  _DWORD *v4; // rax
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8

  v4 = operator new(0x28uLL);
  v5 = *a2;
  v6 = *((_QWORD *)a2 + 2);
  v4[2] = 1;
  *((_OWORD *)v4 + 1) = v5;
  *((_QWORD *)v4 + 4) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_731ff91df660fe6a6a02c254355fca9f_>::`vftable';
  *a1 = v4;
  return a1;
}
