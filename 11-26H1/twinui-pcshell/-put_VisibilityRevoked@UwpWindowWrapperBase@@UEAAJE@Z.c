/*
 * XREFs of ?put_VisibilityRevoked@UwpWindowWrapperBase@@UEAAJE@Z @ 0x180448D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BDA4 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::put_VisibilityRevoked(UwpWindowWrapperBase *this, char a2)
{
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // eax
  int v7; // edx
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 32);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    v5 = *((_DWORD *)this + 39);
    if ( (v5 & 0x18) == 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8A6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)0x8007139FLL,
        v10);
    v6 = v5 & 0xFFFFFFDF;
    v7 = v5 | 0x20;
    if ( a2 )
      v7 = v6;
    *((_DWORD *)this + 39) = v7;
    UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((UwpWindowWrapperBase *)((char *)this - 24));
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8AA,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
