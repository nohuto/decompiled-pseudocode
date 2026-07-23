/*
 * XREFs of RtlImpersonateSelf @ 0x1800D2AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlImpersonateSelf(SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  return RtlImpersonateSelfEx(ImpersonationLevel, 0, 0LL);
}
