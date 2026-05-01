/*
 * XREFs of ?get_CanHandleCloseRequest@UwpWindowWrapperBase@@UEAAJPEAE@Z @ 0x180206F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_CanHandleCloseRequest(UwpWindowWrapperBase *this, unsigned __int8 *a2)
{
  char *v3; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this - 8;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34), &SRWLock);
  *a2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 136LL))(v3);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
