/*
 * XREFs of ?IsViewPinned@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180540270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::IsViewPinned(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2,
        int *a3)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), &SRWLock);
  *a3 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *))(*(_QWORD *)this + 128LL))(
          this,
          a2);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
