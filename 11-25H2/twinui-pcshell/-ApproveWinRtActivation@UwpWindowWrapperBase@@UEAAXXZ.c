/*
 * XREFs of ?ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ @ 0x180111FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18011209C (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapperBase::ApproveWinRtActivation(UwpWindowWrapperBase *this)
{
  char *v2; // rdi
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 208LL))(*((_QWORD *)this + 33), &SRWLock);
  *((_BYTE *)this + 548) = 0;
  v2 = (char *)this - 16;
  if ( *((_DWORD *)this + 70) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 224LL))((char *)this - 16);
  UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)((char *)this - 16));
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 248LL))((char *)this - 16);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
