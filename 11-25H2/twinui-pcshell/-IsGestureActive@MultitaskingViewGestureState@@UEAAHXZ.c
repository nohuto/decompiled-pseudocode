/*
 * XREFs of ?IsGestureActive@MultitaskingViewGestureState@@UEAAHXZ @ 0x18048BC40
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

_BOOL8 __fastcall MultitaskingViewGestureState::IsGestureActive(RTL_SRWLOCK *this)
{
  BOOL v2; // ebx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 7);
  v2 = (unsigned int)(LODWORD(this[8].Ptr) - 1) <= 1;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v2;
}
