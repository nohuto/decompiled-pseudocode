/*
 * XREFs of _lambda_087a70eddc18843aa31de864cf62f380_::operator() @ 0x18042CC58
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_087a70eddc18843aa31de864cf62f380___::Run @ 0x1804318F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_087a70eddc18843aa31de864cf62f380___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1804322A4 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_087a70eddc18843aa31de864cf62f380_::operator()(_QWORD *a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*a1 + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v5[0] = 0LL;
    v5[1] = *(_QWORD *)a1[1];
    WindowWrapperBase::SetDesiredPosition(*a1, v5, 2LL, 0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x199,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
