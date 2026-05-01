/*
 * XREFs of ?ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x18043B640
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18043BA24 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapperBase::ApproveWinRtActivation(WindowWrapperBase *this)
{
  WindowWrapperBase *v2; // rdi
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (WindowWrapperBase *)((char *)this - 16);
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33), &v3);
  *((_BYTE *)this + 532) = 0;
  (*(void (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)v2 + 208LL))(v2);
  WindowWrapperBase::CommitImportanceVector(v2);
  (*(void (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)v2 + 232LL))(v2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v3);
}
