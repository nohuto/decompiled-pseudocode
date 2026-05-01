/*
 * XREFs of ?Release@VirtualDesktopController@@UEAAKXZ @ 0x1801E2940
 * Callers:
 *     ?Release@VirtualDesktopController@@W7EAAKXZ @ 0x180492E90 (-Release@VirtualDesktopController@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBA@EAAKXZ @ 0x180492EA0 (-Release@VirtualDesktopController@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBI@EAAKXZ @ 0x180492EB0 (-Release@VirtualDesktopController@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WCA@EAAKXZ @ 0x180492EC0 (-Release@VirtualDesktopController@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WCI@EAAKXZ @ 0x180492ED0 (-Release@VirtualDesktopController@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktopController::Release(VirtualDesktopController *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController3,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(this);
}
