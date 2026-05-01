/*
 * XREFs of _lambda_fd8d76336b73e37cf48b40cc660e7734_::operator() @ 0x18043A248
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fd8d76336b73e37cf48b40cc660e7734___::Run @ 0x18043B270 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_fd8d76336b73e37cf48b40cc660e7734___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_fd8d76336b73e37cf48b40cc660e7734_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)*a1 + 184LL))(*a1, *a1[1]);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C8,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v3);
  }
  return result;
}
