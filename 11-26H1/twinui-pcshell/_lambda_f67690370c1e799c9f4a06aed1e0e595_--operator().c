/*
 * XREFs of _lambda_f67690370c1e799c9f4a06aed1e0e595_::operator() @ 0x18043B2F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f67690370c1e799c9f4a06aed1e0e595___::Run @ 0x18043E310 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f67690370c1e799c9f4a06aed1e0e595___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801C6F50 (--$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_f67690370c1e799c9f4a06aed1e0e595_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  int v3; // ecx
  _QWORD *v4; // rdx
  int *v5; // rbx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v3 = *a1[1];
    if ( v3 != (*a1)[66] )
    {
      (*a1)[66] = v3;
      v4 = *a1;
      v5 = *a1 + 66;
      v9 = (*(__int64 (__fastcall **)(_QWORD *))(v4[2] + 288LL))(v4 + 2);
      ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy &>(
        &v9,
        v5);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x92D,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
