/*
 * XREFs of ??$?0V_lambda_9bad360c2d5cdf62d5e8b629670e02ce_@@@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_9bad360c2d5cdf62d5e8b629670e02ce_@@@Z @ 0x18033ACA4
 * Callers:
 *     ??$?0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@34@@Z@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@PEAVGamingOverlayExperienceManager@@P84@EAAXUIInspectable@123@AEBUUINavigationController@Input@Gaming@23@@Z@Z @ 0x180222024 (--$-0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavi.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
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
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>,_lambda_9bad360c2d5cdf62d5e8b629670e02ce_>::`vftable';
  *a1 = v4;
  return a1;
}
