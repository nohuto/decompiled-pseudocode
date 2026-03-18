/*
 * XREFs of W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401DA228
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401DA4C8 (W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 * Callees:
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140178390 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(
        PRKPROCESS PROCESS,
        __int64 a2)
{
  int v4; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v4 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v4 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    W32kEtwEnableCallbackWorker(*(const struct _GUID **)a2, *(_DWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v4 = 0;
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v4;
}
