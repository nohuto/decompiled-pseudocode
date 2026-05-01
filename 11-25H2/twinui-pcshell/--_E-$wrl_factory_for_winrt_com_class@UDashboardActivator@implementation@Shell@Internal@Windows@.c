/*
 * XREFs of ??_E?$wrl_factory_for_winrt_com_class@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAPEAXI@Z @ 0x1802D0410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
