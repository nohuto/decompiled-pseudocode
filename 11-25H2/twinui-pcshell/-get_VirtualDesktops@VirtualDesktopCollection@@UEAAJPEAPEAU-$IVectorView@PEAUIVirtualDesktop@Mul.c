/*
 * XREFs of ?get_VirtualDesktops@VirtualDesktopCollection@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1802597E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180259224 (-GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 */

__int64 __fastcall VirtualDesktopCollection::get_VirtualDesktops(VirtualDesktopCollection *a1, _QWORD *a2)
{
  return VirtualDesktopCollection::GetVirtualDesktops(a1, 0, a2);
}
