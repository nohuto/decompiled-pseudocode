/*
 * XREFs of NtRevertContainerImpersonation @ 0x14037F2E0
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
