/*
 * XREFs of ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180133470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::GetPositionerPriority(RTL_SRWLOCK *this, PVOID *a2)
{
  RTL_SRWLOCK *v4; // rbx
  PVOID Ptr; // rcx

  v4 = this + 6;
  AcquireSRWLockShared(this + 6);
  *a2 = 0LL;
  Ptr = this[13].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    *a2 = this[13].Ptr;
    if ( v4 )
      ReleaseSRWLockShared(v4);
    return 0LL;
  }
  else
  {
    if ( v4 )
      ReleaseSRWLockShared(v4);
    return 2147943568LL;
  }
}
