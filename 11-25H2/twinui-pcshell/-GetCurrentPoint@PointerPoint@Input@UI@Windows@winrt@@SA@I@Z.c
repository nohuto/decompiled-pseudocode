/*
 * XREFs of ?GetCurrentPoint@PointerPoint@Input@UI@Windows@winrt@@SA@I@Z @ 0x18056DE74
 * Callers:
 *     ?ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x18056EDD0 (-ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU-$com_ptr@UIServiceProvider@@@win.c)
 * Callees:
 *     ??$call@AEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@?$factory_cache_entry@UPointerPoint@Input@UI@Windows@winrt@@UIPointerPointStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@Z @ 0x18056BA58 (--$call@AEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@-$factory_cache_entry@UPointerPoint@Inpu.c)
 *     ??R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@winrt@@@Z @ 0x18056CC04 (--R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@win.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::UI::Input::PointerPoint::GetCurrentPoint(_QWORD *a1, int a2)
{
  unsigned int *v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+50h] [rbp+18h]

  v5 = a2;
  v4 = (unsigned int *)&v5;
  v6 = &qword_18089B298;
  _InterlockedIncrement64(&qword_18089B298);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Input::PointerPoint,winrt::Windows::UI::Input::IPointerPointStatics> )
  {
    _lambda_e0c989301fb7eeb47b8a27ef133367da_::operator()(
      &v4,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Input::PointerPoint,winrt::Windows::UI::Input::IPointerPointStatics>);
    _InterlockedDecrement64(&qword_18089B298);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B298);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Input::PointerPoint,winrt::Windows::UI::Input::IPointerPointStatics>::call<_lambda_e0c989301fb7eeb47b8a27ef133367da_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (__int64)&v4);
  }
  return a1;
}
