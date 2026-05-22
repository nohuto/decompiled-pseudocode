/*
 * XREFs of ?IsGameInputClient@GameInputServerProxy@@UEAA_NK@Z @ 0x1800485F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GameInputServerProxy::IsGameInputClient(RTL_SRWLOCK *this, unsigned int a2)
{
  unsigned __int8 v4; // bl
  PVOID Ptr; // rcx

  v4 = 0;
  if ( TryAcquireSRWLockShared(this + 4) )
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
      v4 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)Ptr + 72LL))(Ptr, a2);
    ReleaseSRWLockShared(this + 4);
  }
  return v4;
}
