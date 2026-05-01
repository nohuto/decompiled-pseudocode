/*
 * XREFs of ?VisibilityChanged@WindowWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18043F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::VisibilityChanged(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1 - 16;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 - 16 + 280) + 200LL))(
    *(_QWORD *)(a1 - 16 + 280),
    &v6);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 200LL))(v5, a2, a3);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
}
