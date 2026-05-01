/*
 * XREFs of ?GetIsTabbed@CApplicationViewBase@@UEAAJPEAH@Z @ 0x18030D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

__int64 __fastcall CApplicationViewBase::GetIsTabbed(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 6);
  v4 = SRWLock;
  *a2 = LOBYTE(this[17].Ptr);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
