/*
 * XREFs of _lambda_e60fdd2e02318a9e5dca306b5dd9918f_::operator() @ 0x1800D8DD0
 * Callers:
 *     wil::details::lambda_call__lambda_e60fdd2e02318a9e5dca306b5dd9918f___::_lambda_call__lambda_e60fdd2e02318a9e5dca306b5dd9918f___ @ 0x180099FAC (wil--details--lambda_call__lambda_e60fdd2e02318a9e5dca306b5dd9918f___--_lambda_call__lambda_e60f.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x18002AA10 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

void __fastcall lambda_e60fdd2e02318a9e5dca306b5dd9918f_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(
    (winrt::Windows::Foundation::IUnknown *)(*a1 + 32),
    (winrt::Windows::Foundation::IUnknown *)&v3);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v3);
  v2 = *a1;
  v3 = 0LL;
  winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(
    (winrt::Windows::Foundation::IUnknown *)(v2 + 40),
    (winrt::Windows::Foundation::IUnknown *)&v3);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v3);
}
