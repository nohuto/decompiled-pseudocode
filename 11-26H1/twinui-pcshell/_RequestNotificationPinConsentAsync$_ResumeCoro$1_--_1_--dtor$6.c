/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x1806FEF8B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801FDA14 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 */

void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_1_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 312) = *(_QWORD *)(a2 + 48) + 160LL;
  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(*(_QWORD *)(a2 + 312));
}
