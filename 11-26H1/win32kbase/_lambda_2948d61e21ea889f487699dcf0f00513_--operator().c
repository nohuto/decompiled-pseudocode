/*
 * XREFs of _lambda_2948d61e21ea889f487699dcf0f00513_::operator() @ 0x1401DA680
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401AB058 (W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14008FA40 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401DA5A8 (W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 */

__int64 __fastcall lambda_2948d61e21ea889f487699dcf0f00513_::operator()(__int64 a1, unsigned int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  unsigned int v6; // edi
  unsigned int MaxSessionCount; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571_(a2);
  v6 = 0;
  if ( PsGetCurrentProcessWin32Process(a1)
    || (MaxSessionCount = W32GetMaxSessionCount(), (unsigned int)W32GetCurrentWin32kSessionId(v8) < MaxSessionCount)
    && W32GetSessionState(v9) )
  {
    InputCoreProviderCallbackWorker(v4, v3, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
