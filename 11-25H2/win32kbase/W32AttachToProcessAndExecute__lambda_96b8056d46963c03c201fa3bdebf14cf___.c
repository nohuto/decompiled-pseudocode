/*
 * XREFs of W32AttachToProcessAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___ @ 0x1401B726C
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___ @ 0x1401B7418 (W32AttachToSessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___.c)
 * Callees:
 *     _lambda_96b8056d46963c03c201fa3bdebf14cf_::operator() @ 0x1401B75B0 (_lambda_96b8056d46963c03c201fa3bdebf14cf_--operator().c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf_(
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
    v4 = lambda_96b8056d46963c03c201fa3bdebf14cf_::operator()(a2);
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v4;
}
