/*
 * XREFs of ?GetAdjacentDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180552E60
 * Callers:
 *     ?GetAdjacentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180552EE0 (-GetAdjacentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z.c)
 *     ?GetAdjacentDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180552EF0 (-GetAdjacentDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z.c)
 * Callees:
 *     ?GetAdjacentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180552F00 (-GetAdjacentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetAdjacentDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        unsigned int a3,
        struct IVirtualDesktop **a4)
{
  unsigned int AdjacentDesktopInternal; // ebx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  AdjacentDesktopInternal = CVirtualDesktopManager::GetAdjacentDesktopInternal(this, a2, a3, a4);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return AdjacentDesktopInternal;
}
