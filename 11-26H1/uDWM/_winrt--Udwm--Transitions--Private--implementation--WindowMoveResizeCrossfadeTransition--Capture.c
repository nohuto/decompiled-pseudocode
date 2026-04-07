/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CaptureVisuals_::_2_::_lambda_1_::operator() @ 0x1800D5E64
 * Callers:
 *     wil::details::lambda_call__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CaptureVisuals_::_2_::_lambda_1___::_lambda_call__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CaptureVisuals_::_2_::_lambda_1___ @ 0x18008DA44 (wil--details--lambda_call__winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCr.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180041BB4 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CaptureVisuals_::_2_::_lambda_1_::operator()(
        __int64 a1)
{
  __int64 *v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=((__int64 *)(*(_QWORD *)a1 + 32LL), &v4);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v4);
  v2 = (__int64 *)(*(_QWORD *)a1 + 40LL);
  v4 = 0LL;
  winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(v2, &v4);
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v4);
}
