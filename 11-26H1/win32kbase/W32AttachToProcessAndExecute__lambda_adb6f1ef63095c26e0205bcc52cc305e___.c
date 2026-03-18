/*
 * XREFs of W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e___ @ 0x1401CED20
 * Callers:
 *     Win32JobObject::_anonymous_namespace_::SetRestrictedFlags @ 0x1401CF568 (Win32JobObject--_anonymous_namespace_--SetRestrictedFlags.c)
 * Callees:
 *     _lambda_adb6f1ef63095c26e0205bcc52cc305e_::operator() @ 0x1401CEDEC (_lambda_adb6f1ef63095c26e0205bcc52cc305e_--operator().c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e_(
        PRKPROCESS PROCESS,
        __int64 a2)
{
  int v5; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( (PRKPROCESS)PsGetCurrentProcess(PROCESS) == PROCESS )
    return lambda_adb6f1ef63095c26e0205bcc52cc305e_::operator()(a2);
  v5 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v5 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    v5 = lambda_adb6f1ef63095c26e0205bcc52cc305e_::operator()(a2);
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v5;
}
