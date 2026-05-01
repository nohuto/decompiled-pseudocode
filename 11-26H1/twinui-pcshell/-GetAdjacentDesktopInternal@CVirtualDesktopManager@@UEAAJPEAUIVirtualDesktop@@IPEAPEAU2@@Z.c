/*
 * XREFs of ?GetAdjacentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180552F00
 * Callers:
 *     ?GetAdjacentDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180552E60 (-GetAdjacentDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z.c)
 *     ?SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557B80 (-SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualD.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetAdjacentDesktopInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        __int64 a3,
        struct IVirtualDesktop **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, __int64, GUID *, struct IVirtualDesktop **))(**((_QWORD **)this + 12) + 72LL))(
           *((_QWORD *)this + 12),
           a2,
           a3,
           &GUID_3f07f4be_b107_441a_af0f_39d82529072c,
           a4);
}
