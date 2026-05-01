/*
 * XREFs of ?ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ @ 0x18004DEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004DFFC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapperBase::ApproveWinRtActivation(UwpWindowWrapperBase *this)
{
  UwpWindowWrapperBase *v2; // rdi
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v2 = (UwpWindowWrapperBase *)((char *)this - 16);
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 208LL))(*((_QWORD *)this + 33), &SRWLock);
  *((_BYTE *)this + 532) = 0;
  if ( *((_DWORD *)this + 70) )
    (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)v2 + 224LL))(v2);
  UwpWindowWrapperBase::CommitImportanceVector(v2);
  (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)v2 + 248LL))(v2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
