/*
 * XREFs of RtlGetCurrentThreadPrimaryGroup @ 0x1801059E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetCurrentThreadPrimaryGroup()
{
  return NtCurrentTeb()->PrimaryGroupAffinity.Group;
}
