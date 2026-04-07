/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x180093540
 * Callers:
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x1800E8834 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x1800E89DB (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 *     _winrt::to_hresult_::_1_::catch$13 @ 0x1800E9227 (_winrt--to_hresult_--_1_--catch$13.c)
 *     _winrt::to_hresult_::_1_::catch$15 @ 0x1800E928D (_winrt--to_hresult_--_1_--catch$15.c)
 *     _winrt::to_hresult_::_1_::catch$16 @ 0x1800E9339 (_winrt--to_hresult_--_1_--catch$16.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1800E93E8 (_winrt--to_hresult_--_1_--catch$17.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     SetErrorInfo_0 @ 0x18008FFF1 (SetErrorInfo_0.c)
 *     ??$try_as@UIErrorInfo@impl@winrt@@UIRestrictedErrorInfo@23@$0A@@impl@winrt@@YA?AU?$com_ptr@UIErrorInfo@impl@winrt@@@1@PEAUIRestrictedErrorInfo@01@@Z @ 0x1800905DC (--$try_as@UIErrorInfo@impl@winrt@@UIRestrictedErrorInfo@23@$0A@@impl@winrt@@YA-AU-$com_ptr@UIErr.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rdx
  IErrorInfo *perrinfo; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16);
  if ( v4 )
  {
    winrt::impl::try_as<winrt::impl::IErrorInfo,winrt::impl::IRestrictedErrorInfo,0>(&perrinfo, v4);
    SetErrorInfo_0(0, perrinfo);
    if ( perrinfo )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&perrinfo);
  }
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
