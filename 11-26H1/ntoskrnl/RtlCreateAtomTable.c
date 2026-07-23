/*
 * XREFs of RtlCreateAtomTable @ 0x140B248F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x1404CD530 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, 0, AtomTableHandle);
}
