/*
 * XREFs of ?SetIsDismissed@WindowWrapper@@UEAAJE@Z @ 0x180423940
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e8838413ede5bd20b829d342239a0037___ @ 0x1804224C0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e8838413ede5bd20b829d342239a0037.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapper::SetIsDismissed(WindowWrapper *this, char a2)
{
  __int64 v4; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v12; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this - 38);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    if ( a2 != *((_BYTE *)this + 40) )
    {
      *((_BYTE *)this + 40) = a2;
      if ( *((_QWORD *)this - 37) )
      {
        if ( a2 )
        {
          v12 = (char *)this - 592;
          CurrentThreadId = GetCurrentThreadId();
          v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e8838413ede5bd20b829d342239a0037___(
                 v6,
                 CurrentThreadId,
                 &v12);
          if ( v7 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x4B,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
              (const char *)(unsigned int)v7,
              v10);
        }
      }
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x50,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v8);
  }
  return result;
}
