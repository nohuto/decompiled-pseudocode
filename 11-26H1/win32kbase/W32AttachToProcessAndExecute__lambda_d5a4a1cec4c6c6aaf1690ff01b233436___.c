/*
 * XREFs of W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x14020B058
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x14020B1D4 (W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 * Callees:
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x14008FAD4 (RIMDeviceNotifyUsingAsyncInputWork.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436_(
        PRKPROCESS PROCESS,
        __int64 *a2)
{
  int v4; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v4 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v4 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    v4 = RIMDeviceNotifyUsingAsyncInputWork(*a2, a2[1]);
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v4;
}
