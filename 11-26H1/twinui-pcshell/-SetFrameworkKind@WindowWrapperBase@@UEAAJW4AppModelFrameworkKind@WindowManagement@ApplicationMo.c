/*
 * XREFs of ?SetFrameworkKind@WindowWrapperBase@@UEAAJW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18043EA00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowWrapperBase::SetFrameworkKind(__int64 a1, int a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 264) + 200LL))(*(_QWORD *)(a1 + 264), &v5);
  *(_DWORD *)(a1 + 436) = a2;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return 0LL;
}
