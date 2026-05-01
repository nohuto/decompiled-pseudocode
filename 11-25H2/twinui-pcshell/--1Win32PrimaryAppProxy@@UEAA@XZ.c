/*
 * XREFs of ??1Win32PrimaryAppProxy@@UEAA@XZ @ 0x1804DD564
 * Callers:
 *     ??_GWin32PrimaryAppProxy@@UEAAPEAXI@Z @ 0x1804DD7F0 (--_GWin32PrimaryAppProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall Win32PrimaryAppProxy::~Win32PrimaryAppProxy(void **this)
{
  std::wstring::_Tidy_deallocate(this + 1);
  *this = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
}
