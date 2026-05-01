/*
 * XREFs of _lambda_68183e30dd74880fb14ba7e5e36f78e1_::operator() @ 0x180445964
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68183e30dd74880fb14ba7e5e36f78e1___::Run @ 0x1804475C0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_68183e30dd74880fb14ba7e5e36f78e1___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801C6F50 (--$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_68183e30dd74880fb14ba7e5e36f78e1_::operator()(int **a1)
{
  __int64 v2; // rcx
  int v3; // ecx
  int *v4; // rbx
  int *v5; // rax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    v3 = *a1[1];
    if ( v3 != (*a1)[66] )
    {
      (*a1)[66] = v3;
      v4 = *a1;
      v5 = (int *)(*(__int64 (__fastcall **)(_QWORD *, int *))(*((_QWORD *)v4 + 2) + 288LL))((_QWORD *)v4 + 2, &v9);
      ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy &>(
        v5,
        v4 + 66);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9CE,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v6);
  }
  return result;
}
