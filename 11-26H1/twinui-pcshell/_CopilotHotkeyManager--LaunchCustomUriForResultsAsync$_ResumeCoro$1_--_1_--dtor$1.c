/*
 * XREFs of _CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x180702A5B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ @ 0x18028CDD4 (--1-$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CopilotHotkeyManager::LaunchCustomUriForResultsAsync__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 176) + 24LL;
  return winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(
           *(_QWORD **)(a2 + 48),
           a2);
}
