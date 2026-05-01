/*
 * XREFs of _lambda_c5527e6a5cdcf12967d2d97adb21a98f_::operator() @ 0x18017E814
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c5527e6a5cdcf12967d2d97adb21a98f___::Run @ 0x18017E7A0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c5527e6a5cdcf12967d2d97adb21a98f___--.c)
 * Callees:
 *     ?SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18017E8D8 (-SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c5527e6a5cdcf12967d2d97adb21a98f_::operator()(__int64 a1)
{
  int *v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  float v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v2 = **(int ***)a1;
  v7[2] = (float)(v2[2] - *v2);
  v3 = v2[3] - v2[1];
  v7[3] = (float)v3;
  v7[0] = (float)*v2;
  v7[1] = (float)v2[1];
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    UwpWindowWrapperBase::SetDesiredPosition(*(_QWORD *)(a1 + 8), v7, 3LL, **(_QWORD **)(a1 + 16));
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x15B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v5);
  }
  return result;
}
