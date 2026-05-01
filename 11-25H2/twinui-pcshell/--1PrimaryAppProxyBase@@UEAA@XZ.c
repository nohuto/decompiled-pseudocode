/*
 * XREFs of ??1PrimaryAppProxyBase@@UEAA@XZ @ 0x1804DD51C
 * Callers:
 *     _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$0 @ 0x1806C9CA3 (_Win32PrimaryAppProxy--Win32PrimaryAppProxy_--_1_--dtor$0.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$17 @ 0x1806CA11F (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$17.c)
 * Callees:
 *     <none>
 */

void __fastcall PrimaryAppProxyBase::~PrimaryAppProxyBase(PrimaryAppProxyBase *this)
{
  *(_QWORD *)this = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
}
