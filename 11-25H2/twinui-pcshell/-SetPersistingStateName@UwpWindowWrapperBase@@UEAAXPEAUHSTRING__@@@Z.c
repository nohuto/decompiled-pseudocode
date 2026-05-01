/*
 * XREFs of ?SetPersistingStateName@UwpWindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z @ 0x18043B460
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18018EDB8 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::SetPersistingStateName(UwpWindowWrapperBase *this, HSTRING a2)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF
  HSTRING v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 33) + 208LL))(*((_QWORD *)this + 33), &v6);
  v3 = Windows::Internal::String::Initialize((HSTRING *)this + 67, &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x886,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      v4);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
}
