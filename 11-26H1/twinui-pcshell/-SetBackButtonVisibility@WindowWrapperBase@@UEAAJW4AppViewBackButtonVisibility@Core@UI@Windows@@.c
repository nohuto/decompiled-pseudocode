/*
 * XREFs of ?SetBackButtonVisibility@WindowWrapperBase@@UEAAJW4AppViewBackButtonVisibility@Core@UI@Windows@@@Z @ 0x18043E480
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetBackButtonVisibility(__int64 a1, int a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 264);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 128LL))(a1 - 16) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5DC,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL,
        v7);
    *(_DWORD *)(a1 + 432) = a2;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5E0,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
