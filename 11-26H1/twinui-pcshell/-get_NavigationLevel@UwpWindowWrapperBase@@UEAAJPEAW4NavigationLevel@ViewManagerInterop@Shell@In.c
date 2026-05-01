/*
 * XREFs of ?get_NavigationLevel@UwpWindowWrapperBase@@UEAAJPEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801C4BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_NavigationLevel(
        UwpWindowWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *a2)
{
  char *v3; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this - 8;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34), &SRWLock);
  *(_DWORD *)a2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 144LL))(v3);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
