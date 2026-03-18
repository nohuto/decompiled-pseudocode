/*
 * XREFs of _lambda_db335634cca102d801ed3f8d4f73e9a4_::operator() @ 0x14028D430
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028D2C8 (W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028D3D0 (W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028D484 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 */

__int64 __fastcall lambda_db335634cca102d801ed3f8d4f73e9a4_::operator()(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rdx
  int v4; // ecx
  unsigned int v5; // ebx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(a2);
  v5 = 0;
  if ( PsGetCurrentProcessWin32Process(a1) || W32GetSessionState(v4, v3) )
    InputCoreProviderCallbackWorker();
  else
    return (unsigned int)-1073741811;
  return v5;
}
