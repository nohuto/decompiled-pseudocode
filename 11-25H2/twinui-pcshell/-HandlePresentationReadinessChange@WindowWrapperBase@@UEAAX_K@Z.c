/*
 * XREFs of ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x180430520
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x180434C20 (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::HandlePresentationReadinessChange(WindowWrapperBase *this, unsigned __int64 a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33), &v4);
  WindowReadyState::HandleShellHook((WindowWrapperBase *)((char *)this + 344), a2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
}
