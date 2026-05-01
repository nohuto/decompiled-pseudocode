/*
 * XREFs of ??1Win32PrimaryAppProxy@@UEAA@XZ @ 0x1804EFB84
 * Callers:
 *     ??_GWin32PrimaryAppProxy@@UEAAPEAXI@Z @ 0x1804EFE50 (--_GWin32PrimaryAppProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall Win32PrimaryAppProxy::~Win32PrimaryAppProxy(Win32PrimaryAppProxy *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 1);
  *(_QWORD *)this = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
}
