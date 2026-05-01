/*
 * XREFs of ?GetViewInFocus@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1801A72F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetViewInFocus(RTL_SRWLOCK *this, PVOID *a2)
{
  RTL_SRWLOCK *v4; // rbx
  PVOID Ptr; // rcx

  *a2 = 0LL;
  v4 = this + 49;
  AcquireSRWLockShared(this + 49);
  Ptr = this[54].Ptr;
  if ( !Ptr || ((__int64)this[55].Ptr & 1) != 0 )
  {
    if ( v4 )
      ReleaseSRWLockShared(v4);
    return 2147943568LL;
  }
  else
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    *a2 = this[54].Ptr;
    if ( v4 )
      ReleaseSRWLockShared(v4);
    return 0LL;
  }
}
