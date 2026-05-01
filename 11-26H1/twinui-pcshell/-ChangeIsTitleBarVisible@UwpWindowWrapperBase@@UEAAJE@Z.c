/*
 * XREFs of ?ChangeIsTitleBarVisible@UwpWindowWrapperBase@@UEAAJE@Z @ 0x180446A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::ChangeIsTitleBarVisible(UwpWindowWrapperBase *this, char a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34), &v5);
  *((_BYTE *)this + 454) = a2 != 0;
  *((_BYTE *)this + 453) = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return 0LL;
}
