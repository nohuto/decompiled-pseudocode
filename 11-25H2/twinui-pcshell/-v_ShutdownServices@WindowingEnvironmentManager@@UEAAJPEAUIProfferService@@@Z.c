/*
 * XREFs of ?v_ShutdownServices@WindowingEnvironmentManager@@UEAAJPEAUIProfferService@@@Z @ 0x180092ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x180092F4C (-ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentManager::v_ShutdownServices(RTL_SRWLOCK *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v3; // rbx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  try
  {
    v4 = WindowingEnvironmentManager::ResetWindowingEnvironments((WindowingEnvironmentManager *)&this[-9]);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x34,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v4,
        v7);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x37,
                           (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v5);
  }
  return result;
}
