/*
 * XREFs of KeIsCoreIsolationMitigationPolicyEnforceable @ 0x1404DA3F8
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool KeIsCoreIsolationMitigationPolicyEnforceable()
{
  return KiCoreIsolationEnforceable != 0;
}
