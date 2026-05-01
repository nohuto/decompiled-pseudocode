/*
 * XREFs of ?IsAppIdPinned@VirtualPinnedAppsHandler@@UEAAJPEBGPEAH@Z @ 0x180540200
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z @ 0x1801FB218 (-IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::IsAppIdPinned(
        VirtualPinnedAppsHandler *this,
        const unsigned __int16 *a2,
        int *a3)
{
  unsigned __int8 IsAppIdPinnedInternal; // al
  RTL_SRWLOCK *v7; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), &SRWLock);
  IsAppIdPinnedInternal = VirtualPinnedAppsHandler::IsAppIdPinnedInternal(this, a2);
  v7 = SRWLock;
  *a3 = IsAppIdPinnedInternal;
  if ( v7 )
    ReleaseSRWLockShared(v7);
  return 0LL;
}
