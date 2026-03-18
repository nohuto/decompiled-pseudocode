/*
 * XREFs of ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x14018CF20
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

__int64 CInputManager::CreateSessionGlobal(void)
{
  _QWORD *v0; // rax
  unsigned int v1; // ebx

  v0 = (_QWORD *)Win32AllocPoolImpl(256LL, 0x28uLL, 0x67734D49u);
  v1 = 0;
  if ( v0 )
  {
    *v0 = &CIgnoreInputQueue::`vftable';
    v0[1] = &CDiscardInputQueue::`vftable';
    v0[2] = 0LL;
    v0[3] = 0LL;
    v0[4] = 0LL;
    *(_QWORD *)W32GetUserInputMgrSessionState() = v0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
