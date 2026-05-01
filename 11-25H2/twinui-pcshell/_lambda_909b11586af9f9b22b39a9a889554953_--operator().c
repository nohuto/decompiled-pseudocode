/*
 * XREFs of _lambda_909b11586af9f9b22b39a9a889554953_::operator() @ 0x1804397A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_909b11586af9f9b22b39a9a889554953___::Run @ 0x18043B020 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_909b11586af9f9b22b39a9a889554953___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18011262C (-SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_909b11586af9f9b22b39a9a889554953_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*a1)[35];
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    v5[0] = 0LL;
    v5[1] = *a1[1];
    UwpWindowWrapperBase::SetDesiredPosition(*a1, (__int64)v5, 2u, 0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A8,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v3);
  }
  return result;
}
