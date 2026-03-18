/*
 * XREFs of W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x1401B731C
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x14016CFDC (W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 * Callees:
 *     _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x140148844 (_lambda_f6639040149d830ab05feaa79928b51c_--operator().c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c_(PRKPROCESS PROCESS)
{
  int v2; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v2 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    v2 = lambda_f6639040149d830ab05feaa79928b51c_::operator()();
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v2;
}
