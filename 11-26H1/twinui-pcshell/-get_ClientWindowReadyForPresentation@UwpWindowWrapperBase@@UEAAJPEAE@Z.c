/*
 * XREFs of ?get_ClientWindowReadyForPresentation@UwpWindowWrapperBase@@UEAAJPEAE@Z @ 0x1801C5BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_ClientWindowReadyForPresentation(UwpWindowWrapperBase *this, bool *a2)
{
  bool v4; // al
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 29) + 216LL))(*((_QWORD *)this + 29), &SRWLock);
  v4 = *((_QWORD *)this + 39) && !*((_DWORD *)this + 80);
  *a2 = v4;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
