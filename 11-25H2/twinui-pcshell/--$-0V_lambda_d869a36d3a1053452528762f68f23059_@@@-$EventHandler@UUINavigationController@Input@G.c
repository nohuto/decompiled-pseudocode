/*
 * XREFs of ??$?0V_lambda_d869a36d3a1053452528762f68f23059_@@@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_d869a36d3a1053452528762f68f23059_@@@Z @ 0x180291A94
 * Callers:
 *     ??$?0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@34@@Z@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@PEAVGamingOverlayExperienceManager@@P84@EAAXUIInspectable@123@AEBUUINavigationController@Input@Gaming@23@@Z@Z @ 0x1802327D0 (--$-0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavi.c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 v5; // r8
  _QWORD *result; // rax
  char *v7; // [rsp+20h] [rbp-18h]

  v7 = (char *)operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  v4 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(v5 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(v5 + 32) = v4;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = &winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>,_lambda_d869a36d3a1053452528762f68f23059_>::`vftable';
  result = a1;
  *a1 = v5;
  return result;
}
