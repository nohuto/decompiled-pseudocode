/*
 * XREFs of ?NotifyKeyboardLayoutChanged@GameInputServerProxy@@UEAAXXZ @ 0x18010EDB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputServerProxy::NotifyKeyboardLayoutChanged(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 4) )
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 88LL))(Ptr);
    ReleaseSRWLockShared(this + 4);
  }
}
