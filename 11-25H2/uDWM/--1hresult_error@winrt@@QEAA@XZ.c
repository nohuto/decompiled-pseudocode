/*
 * XREFs of ??1hresult_error@winrt@@QEAA@XZ @ 0x1800D3644
 * Callers:
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800D3670 (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::to_hresult_::_1_::catch$15 @ 0x1800ED303 (_winrt--to_hresult_--_1_--catch$15.c)
 *     _winrt::to_hresult_::_1_::catch$16 @ 0x1800ED3A1 (_winrt--to_hresult_--_1_--catch$16.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1800ED442 (_winrt--to_hresult_--_1_--catch$17.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180094A2C (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

void __fastcall winrt::hresult_error::~hresult_error(OLECHAR **this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(this + 2);
  if ( *v2 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v2);
  winrt::handle_type<winrt::impl::bstr_traits>::close(this);
}
