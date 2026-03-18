/*
 * XREFs of KeUnsecureThread @ 0x1404F7B80
 * Callers:
 *     PspDeleteSecureThread @ 0x140B41AE4 (PspDeleteSecureThread.c)
 * Callees:
 *     VslTerminateSecureThread @ 0x140B345C8 (VslTerminateSecureThread.c)
 */

__int64 __fastcall KeUnsecureThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 SecureThreadCookie; // rcx

  CurrentThread = KeGetCurrentThread();
  SecureThreadCookie = CurrentThread->SecureThreadCookie;
  CurrentThread->SecureThreadCookie = 0;
  return VslTerminateSecureThread(SecureThreadCookie, a1);
}
