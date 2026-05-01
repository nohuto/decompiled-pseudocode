/*
 * XREFs of ?WasEverActivated@UwpWindowWrapperBase@@UEAA_NXZ @ 0x1801FEFC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall UwpWindowWrapperBase::WasEverActivated(UwpWindowWrapperBase *this)
{
  char v2; // bl
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33), &SRWLock);
  v2 = *((_BYTE *)this + 534);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v2;
}
