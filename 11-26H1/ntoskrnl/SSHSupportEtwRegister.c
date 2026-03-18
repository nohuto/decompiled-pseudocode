/*
 * XREFs of SSHSupportEtwRegister @ 0x1407E44D8
 * Callers:
 *     SshInitialize @ 0x140CD7428 (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, SshpEtwEnableCallback, 0LL, &SshpTraceHandle);
}
