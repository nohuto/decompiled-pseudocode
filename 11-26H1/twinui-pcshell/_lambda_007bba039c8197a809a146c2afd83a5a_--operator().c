/*
 * XREFs of _lambda_007bba039c8197a809a146c2afd83a5a_::operator() @ 0x180438DAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_007bba039c8197a809a146c2afd83a5a___::Run @ 0x18043DC30 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_007bba039c8197a809a146c2afd83a5a___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18043E628 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_007bba039c8197a809a146c2afd83a5a_::operator()(int **a1)
{
  int *v2; // rax
  int *v3; // rcx
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  float v7[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+70h] [rbp+8h] BYREF

  v2 = *a1;
  v7[0] = (float)(*a1)[4];
  v7[1] = (float)v2[5];
  v7[2] = (float)*v2;
  v7[3] = (float)v2[1];
  v3 = a1[1];
  v8 = *((_OWORD *)v3 + 31);
  v9 = *((_OWORD *)v3 + 32);
  v10 = *((_QWORD *)v3 + 66);
  DWORD2(v9) = v2[8];
  v4 = *((_QWORD *)v3 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    WindowWrapperBase::SetDesiredPosition(a1[1], v7, 3LL, &v8);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v12) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x26A,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                     v5);
    return (unsigned int)v12;
  }
  return result;
}
