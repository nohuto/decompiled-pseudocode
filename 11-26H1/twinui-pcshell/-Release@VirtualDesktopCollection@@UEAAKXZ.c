/*
 * XREFs of ?Release@VirtualDesktopCollection@@UEAAKXZ @ 0x1802B6E80
 * Callers:
 *     ?Release@VirtualDesktopCollection@@W7EAAKXZ @ 0x180495130 (-Release@VirtualDesktopCollection@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopCollection@@WBA@EAAKXZ @ 0x180495140 (-Release@VirtualDesktopCollection@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopCollection@@WBI@EAAKXZ @ 0x180495150 (-Release@VirtualDesktopCollection@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopCollection@@WCA@EAAKXZ @ 0x180495160 (-Release@VirtualDesktopCollection@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktopCollection@@WCI@EAAKXZ @ 0x180495170 (-Release@VirtualDesktopCollection@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopCollection::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(this);
}
