/*
 * XREFs of ?CreateRemoteDesktop@VirtualDesktopController@@UEAAJXZ @ 0x180480F50
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopController::CreateRemoteDesktop(RTL_SRWLOCK *this)
{
  unsigned int v2; // ebx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 14);
  v2 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)this[15].Ptr + 72LL))(this[15].Ptr);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v2;
}
