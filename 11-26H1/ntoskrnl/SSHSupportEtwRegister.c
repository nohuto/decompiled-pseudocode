/*
 * XREFs of SSHSupportEtwRegister @ 0x1407EA048
 * Callers:
 *     SshInitialize @ 0x140CDD7A8 (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, SshpEtwEnableCallback, 0LL, &SshpTraceHandle);
}
