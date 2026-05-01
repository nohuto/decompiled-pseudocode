/*
 * XREFs of ??0?$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1805FB514
 * Callers:
 *     ??0?$producer@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1805FB550 (--0-$producer@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$produce_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAA@XZ @ 0x1805FB538 (--0-$produce_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivat.c)
 */

_QWORD *winrt::impl::produce<WindowRegistration,winrt::Windows::Foundation::IClosable>::produce<WindowRegistration,winrt::Windows::Foundation::IClosable>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory,void>::produce_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory,void>();
  result = v0;
  *v0 = &winrt::impl::produce<WindowRegistration,winrt::Windows::Foundation::IClosable>::`vftable';
  return result;
}
