/*
 * XREFs of W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028D334
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028D3D0 (W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 * Callees:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028D484 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(PRKPROCESS PROCESS)
{
  int v2; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v2 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    InputCoreProviderCallbackWorker();
    v2 = 0;
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v2;
}
