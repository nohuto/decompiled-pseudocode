/*
 * XREFs of W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401DA390
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401DA5A8 (W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 * Callees:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14008FA40 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571_(PRKPROCESS PROCESS)
{
  int v2; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v2 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    InputCoreProviderCallbackWorker(v4, v3, v5);
    v2 = 0;
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v2;
}
