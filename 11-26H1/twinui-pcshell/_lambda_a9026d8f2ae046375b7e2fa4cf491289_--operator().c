/*
 * XREFs of _lambda_a9026d8f2ae046375b7e2fa4cf491289_::operator() @ 0x18044603C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a9026d8f2ae046375b7e2fa4cf491289___::Run @ 0x180447700 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a9026d8f2ae046375b7e2fa4cf491289___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802C78AC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_a9026d8f2ae046375b7e2fa4cf491289_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  unsigned int v11; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    v3 = *a1;
    if ( !*((_QWORD *)*a1 + 14) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x98C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)0x8007139FLL,
        v12);
    v4 = *a1[1];
    if ( *((_DWORD *)v3 + 65) != v4 )
    {
      *((_DWORD *)v3 + 65) = v4;
      v5 = (*a1)[65];
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
          {
            v11 = wil::verify_hresult<long>(0x8000FFFF);
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x9A1,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)v11,
              v12);
          }
          v7 = 2LL;
        }
        else
        {
          v7 = 1LL;
        }
      }
      else
      {
        v7 = 0LL;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*a1 + 14) + 152LL))(*((_QWORD *)*a1 + 14), v7);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9A4,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v8,
          v12);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9A7,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v9);
  }
  return result;
}
