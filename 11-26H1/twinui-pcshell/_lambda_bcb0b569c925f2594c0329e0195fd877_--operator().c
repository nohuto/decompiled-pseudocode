/*
 * XREFs of _lambda_bcb0b569c925f2594c0329e0195fd877_::operator() @ 0x18043A60C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_bcb0b569c925f2594c0329e0195fd877___::Run @ 0x18043E090 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_bcb0b569c925f2594c0329e0195fd877___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18043E628 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bcb0b569c925f2594c0329e0195fd877_::operator()(__int64 a1)
{
  int *v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  float v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = **(int ***)a1;
  v7[2] = (float)(v2[2] - *v2);
  v3 = v2[3] - v2[1];
  v7[3] = (float)v3;
  v7[0] = (float)*v2;
  v7[1] = (float)v2[1];
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    WindowWrapperBase::SetDesiredPosition(*(_QWORD *)(a1 + 8), v7, 3LL, **(_QWORD **)(a1 + 16));
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x15E,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
