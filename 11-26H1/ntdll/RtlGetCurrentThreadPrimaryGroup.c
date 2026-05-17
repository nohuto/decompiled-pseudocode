/*
 * XREFs of RtlGetCurrentThreadPrimaryGroup @ 0x180105FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetCurrentThreadPrimaryGroup()
{
  return NtCurrentTeb()->PrimaryGroupAffinity.Group;
}
