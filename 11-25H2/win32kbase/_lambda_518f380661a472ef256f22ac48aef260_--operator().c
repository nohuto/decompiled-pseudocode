/*
 * XREFs of _lambda_518f380661a472ef256f22ac48aef260_::operator() @ 0x1401B755C
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401B7028 (W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401B73B8 (W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 */

__int64 __fastcall lambda_518f380661a472ef256f22ac48aef260_::operator()(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571_(a2);
  v4 = 0;
  if ( PsGetCurrentProcessWin32Process(a1) || W32GetSessionState(v3) )
    InputCoreProviderCallbackWorker();
  else
    return (unsigned int)-1073741811;
  return v4;
}
