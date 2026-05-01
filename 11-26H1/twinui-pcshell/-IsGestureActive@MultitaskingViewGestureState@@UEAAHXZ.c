/*
 * XREFs of ?IsGestureActive@MultitaskingViewGestureState@@UEAAHXZ @ 0x18049C880
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

_BOOL8 __fastcall MultitaskingViewGestureState::IsGestureActive(RTL_SRWLOCK *this)
{
  int Ptr; // eax
  BOOL v3; // ebx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 7);
  Ptr = (int)this[8].Ptr;
  v3 = 1;
  if ( Ptr != 1 )
    v3 = Ptr == 2;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v3;
}
