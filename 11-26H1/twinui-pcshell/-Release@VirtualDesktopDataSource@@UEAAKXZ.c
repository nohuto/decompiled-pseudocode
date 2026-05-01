/*
 * XREFs of ?Release@VirtualDesktopDataSource@@UEAAKXZ @ 0x1800F04B0
 * Callers:
 *     ?Release@VirtualDesktopDataSource@@W7EAAKXZ @ 0x180490AD0 (-Release@VirtualDesktopDataSource@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WBA@EAAKXZ @ 0x180490AE0 (-Release@VirtualDesktopDataSource@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WBI@EAAKXZ @ 0x180490AF0 (-Release@VirtualDesktopDataSource@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WCA@EAAKXZ @ 0x180490B00 (-Release@VirtualDesktopDataSource@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WCI@EAAKXZ @ 0x180490B10 (-Release@VirtualDesktopDataSource@@WCI@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WDA@EAAKXZ @ 0x180490B20 (-Release@VirtualDesktopDataSource@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktopDataSource::Release(VirtualDesktopDataSource *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource2,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(this);
}
