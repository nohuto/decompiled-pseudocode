/*
 * XREFs of ?ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x18042F350
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18042F734 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapperBase::ApproveWinRtActivation(WindowWrapperBase *this)
{
  WindowWrapperBase *v1; // rbx
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33), &v2);
  *((_BYTE *)v1 + 548) = 0;
  v1 = (WindowWrapperBase *)((char *)v1 - 16);
  (*(void (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)v1 + 208LL))(v1);
  WindowWrapperBase::CommitImportanceVector(v1);
  (*(void (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)v1 + 232LL))(v1);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}
