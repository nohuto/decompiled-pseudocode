/*
 * XREFs of _lambda_558037198f8876ec04dcff1824824a48_::operator() @ 0x180439420
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_558037198f8876ec04dcff1824824a48___::Run @ 0x18043DE50 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_558037198f8876ec04dcff1824824a48___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_558037198f8876ec04dcff1824824a48_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rdx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v3 = *a1[1];
    if ( (*a1)[65] != v3 )
    {
      (*a1)[65] = v3;
      v4 = (*a1)[65];
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 != 1 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x8FF,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
              (const char *)0x8000FFFFLL,
              v10);
          v6 = 2LL;
        }
        else
        {
          v6 = 1LL;
        }
      }
      else
      {
        v6 = 0LL;
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*a1 + 13) + 96LL))(*((_QWORD *)*a1 + 13), v6);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x902,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v7,
          v10);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x905,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
