/*
 * XREFs of ?BeginWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ @ 0x180207520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::BeginWinRtActivation(UwpWindowWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 208LL))(*((_QWORD *)this + 33), &SRWLock);
  v2 = SRWLock;
  *((_BYTE *)this + 548) = 1;
  *((_BYTE *)this + 550) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
