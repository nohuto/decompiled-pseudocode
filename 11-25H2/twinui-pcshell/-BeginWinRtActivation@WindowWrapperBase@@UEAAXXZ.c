/*
 * XREFs of ?BeginWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x18042F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::BeginWinRtActivation(WindowWrapperBase *this)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33), &v2);
  *((_BYTE *)this + 548) = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}
