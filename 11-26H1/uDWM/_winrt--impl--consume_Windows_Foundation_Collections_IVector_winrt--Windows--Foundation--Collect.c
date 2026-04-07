/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IVector_winrt::Windows::Foundation::Collections::IVector_winrt::Udwm::Transitions::UserResizeVisual__winrt::Udwm::Transitions::UserResizeVisual_::GetAt_::_1_::dtor$0 @ 0x1800E9603
 * Callers:
 *     <none>
 * Callees:
 *     ??1ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18007862C (--1ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector_winrt::Windows::Foundation::Collections::IVector_winrt::Udwm::Transitions::UserResizeVisual__winrt::Udwm::Transitions::UserResizeVisual_::GetAt_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Udwm::Transitions::Private::ScreenRotationTransition::~ScreenRotationTransition(*(__int64 **)(a2 + 104));
  }
}
