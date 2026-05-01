/*
 * XREFs of ?RemoveWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@@Z @ 0x1801DF9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_37b02de6af5cc70082ddb03b5db08654___ @ 0x1801DFAB4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_37b02de6af5cc70082ddb03b5db08654.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentManager::RemoveWindowingEnvironmentConfig(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v3; // rbx
  _QWORD *Ptr; // rdx
  _QWORD *v5; // rax
  bool v6; // al
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  int *v13; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v3 = a1 + 3;
  AcquireSRWLockExclusive(a1 + 3);
  Ptr = a1[4].Ptr;
  v5 = (_QWORD *)Ptr[1];
  HIDWORD(v13) = 0;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *((_DWORD *)v5 + 8) >= v15 )
    {
      Ptr = v5;
      v5 = (_QWORD *)*v5;
    }
    else
    {
      v5 = (_QWORD *)v5[2];
    }
  }
  v6 = *((_BYTE *)Ptr + 25) || v15 < *((_DWORD *)Ptr + 8);
  try
  {
    if ( v6 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA6,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)0x80070057LL,
        v12[0]);
    *(_QWORD *)v12 = a1 - 17;
    v13 = &v15;
    CurrentThreadId = GetCurrentThreadId();
    v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_37b02de6af5cc70082ddb03b5db08654___(
           v8,
           CurrentThreadId,
           v12);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD3,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v9,
        v12[0]);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD7,
                           (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v10);
  }
  return result;
}
