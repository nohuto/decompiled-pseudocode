/*
 * XREFs of ?ChangeIsTitleBarVisible@UwpWindowWrapperBase@@UEAAJE@Z @ 0x18043A440
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::ChangeIsTitleBarVisible(UwpWindowWrapperBase *this, char a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34), &v5);
  *((_BYTE *)this + 470) = a2 != 0;
  *((_BYTE *)this + 469) = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return 0LL;
}
