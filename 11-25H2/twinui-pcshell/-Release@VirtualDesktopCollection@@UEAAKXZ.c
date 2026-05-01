/*
 * XREFs of ?Release@VirtualDesktopCollection@@UEAAKXZ @ 0x1802C0040
 * Callers:
 *     ?Release@VirtualDesktopCollection@@W7EAAKXZ @ 0x180484710 (-Release@VirtualDesktopCollection@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopCollection@@WBA@EAAKXZ @ 0x180484720 (-Release@VirtualDesktopCollection@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopCollection@@WBI@EAAKXZ @ 0x180484730 (-Release@VirtualDesktopCollection@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopCollection@@WCA@EAAKXZ @ 0x180484740 (-Release@VirtualDesktopCollection@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktopCollection@@WCI@EAAKXZ @ 0x180484750 (-Release@VirtualDesktopCollection@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopCollection::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(this);
}
