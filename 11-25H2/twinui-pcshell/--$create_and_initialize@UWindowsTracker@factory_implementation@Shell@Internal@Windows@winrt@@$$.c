/*
 * XREFs of ??$create_and_initialize@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUWindowsTracker@factory_implementation@Shell@Internal@Windows@1@XZ @ 0x1806384BC
 * Callers:
 *     ??$make_factory@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18063883C (--$make_factory@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0WindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180638A5C (--0WindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,>()
{
  _OWORD *v1; // [rsp+30h] [rbp+8h]

  v1 = operator new(0x28uLL);
  *v1 = 0LL;
  v1[1] = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker::WindowsTracker((winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker *)v1);
  *(_QWORD *)v1 = &winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker::`vftable';
  return v1;
}
