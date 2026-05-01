/*
 * XREFs of ?MoveViewToDesktop@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180530250
 * Callers:
 *     ?MoveViewToDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805302C0 (-MoveViewToDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?MoveViewToDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805302D0 (-MoveViewToDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180530390 (-MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::MoveViewToDesktop(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v7);
  LODWORD(a3) = CVirtualDesktopManager::MoveViewToDesktopInternal(this, a2, a3);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
  return (unsigned int)a3;
}
