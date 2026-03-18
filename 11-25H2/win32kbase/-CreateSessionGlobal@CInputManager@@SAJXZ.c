/*
 * XREFs of ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x14014CD10
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x14014CD94 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ??0CInputManager@@QEAA@XZ @ 0x14023D8B0 (--0CInputManager@@QEAA@XZ.c)
 *     ??_GCInputManager@@QEAAPEAXI@Z @ 0x14023D8DC (--_GCInputManager@@QEAAPEAXI@Z.c)
 */

__int64 CInputManager::CreateSessionGlobal(void)
{
  __int64 v0; // rax
  int v1; // ebx
  CInputManager *v3; // rax
  CInputManager *v4; // rdi
  unsigned int v5; // edx
  void *v6; // rcx

  v0 = Win32AllocPoolImpl(256LL, 0x28uLL, 0x67734D49u);
  if ( v0
    && (*(_OWORD *)v0 = 0LL,
        *(_OWORD *)(v0 + 16) = 0LL,
        *(_QWORD *)(v0 + 32) = 0LL,
        v3 = CInputManager::CInputManager((CInputManager *)v0),
        (v4 = v3) != 0LL) )
  {
    v1 = CInputManager::Initialize(v3);
    if ( v1 < 0 )
      CInputManager::`scalar deleting destructor'(v6, v5);
    else
      *(_QWORD *)W32GetUserInputMgrSessionState() = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v1;
}
