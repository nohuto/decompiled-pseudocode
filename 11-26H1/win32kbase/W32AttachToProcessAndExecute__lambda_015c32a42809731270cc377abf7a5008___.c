/*
 * XREFs of W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x140211348
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x1402113F8 (W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___.c)
 * Callees:
 *     _lambda_015c32a42809731270cc377abf7a5008_::operator() @ 0x1402114BC (_lambda_015c32a42809731270cc377abf7a5008_--operator().c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008_(
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
    v4 = lambda_015c32a42809731270cc377abf7a5008_::operator()(a2);
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v4;
}
