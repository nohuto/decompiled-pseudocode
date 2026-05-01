/*
 * XREFs of _winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId_::_1_::dtor$0 @ 0x180700A64
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAA@XZ @ 0x1801CC988 (--1-$com_ptr@VSnapFlyoutHost@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::com_ptr<SnapFlyoutHost>::~com_ptr<SnapFlyoutHost>(*(_QWORD **)(a2 + 104));
  }
  return result;
}
