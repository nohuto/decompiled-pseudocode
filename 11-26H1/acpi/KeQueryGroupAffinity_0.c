/*
 * XREFs of KeQueryGroupAffinity_0 @ 0x140055E09
 * Callers:
 *     IntPartIsInterruptSteerable @ 0x140071FC4 (IntPartIsInterruptSteerable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KAFFINITY __stdcall KeQueryGroupAffinity_0(USHORT GroupNumber)
{
  return KeQueryGroupAffinity(GroupNumber);
}
