/*
 * XREFs of NtRevertContainerImpersonation @ 0x14037D530
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x14037D900 (PspRevertContainerImpersonation.c)
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
