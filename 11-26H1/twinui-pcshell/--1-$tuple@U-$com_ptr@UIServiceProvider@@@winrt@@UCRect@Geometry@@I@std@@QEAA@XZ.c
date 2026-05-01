/*
 * XREFs of ??1?$tuple@U?$com_ptr@UIServiceProvider@@@winrt@@UCRect@Geometry@@I@std@@QEAA@XZ @ 0x1805B9AE0
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindows_::_1_::dtor$8 @ 0x1806F9F6F (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806F9F6F.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall std::tuple<winrt::com_ptr<IServiceProvider>,Geometry::CRect,unsigned int>::~tuple<winrt::com_ptr<IServiceProvider>,Geometry::CRect,unsigned int>(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 24);
  if ( *v1 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v1);
  return result;
}
