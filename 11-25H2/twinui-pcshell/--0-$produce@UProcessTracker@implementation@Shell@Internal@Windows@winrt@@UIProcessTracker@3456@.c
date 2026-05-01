/*
 * XREFs of ??0?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@QEAA@XZ @ 0x18063A58C
 * Callers:
 *     ??0?$producer@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@X@impl@winrt@@QEAA@XZ @ 0x18063A628 (--0-$producer@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456.c)
 * Callees:
 *     ??0?$produce_base@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@X@impl@winrt@@QEAA@XZ @ 0x18063A5E0 (--0-$produce_base@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@.c)
 */

_QWORD *winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker>::produce<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker,void>::produce_base<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker,void>();
  result = v0;
  *v0 = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker>::`vftable';
  return result;
}
