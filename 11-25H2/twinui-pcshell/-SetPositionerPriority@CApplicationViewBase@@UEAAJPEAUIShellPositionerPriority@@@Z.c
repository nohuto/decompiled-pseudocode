/*
 * XREFs of ?SetPositionerPriority@CApplicationViewBase@@UEAAJPEAUIShellPositionerPriority@@@Z @ 0x180197E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::SetPositionerPriority(RTL_SRWLOCK *this, struct IShellPositionerPriority *a2)
{
  RTL_SRWLOCK *v4; // rsi
  PVOID Ptr; // rcx

  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  if ( this[13].Ptr != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)a2 + 8LL))(a2);
    Ptr = this[13].Ptr;
    this[13].Ptr = a2;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
