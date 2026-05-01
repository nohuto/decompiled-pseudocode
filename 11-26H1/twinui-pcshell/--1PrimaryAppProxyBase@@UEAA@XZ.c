/*
 * XREFs of ??1PrimaryAppProxyBase@@UEAA@XZ @ 0x1804EFB3C
 * Callers:
 *     _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$0 @ 0x1806F1B77 (_Win32PrimaryAppProxy--Win32PrimaryAppProxy_--_1_--dtor$0.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$17 @ 0x1806F1FF3 (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$17.c)
 * Callees:
 *     <none>
 */

void __fastcall PrimaryAppProxyBase::~PrimaryAppProxyBase(PrimaryAppProxyBase *this)
{
  *(_QWORD *)this = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
}
