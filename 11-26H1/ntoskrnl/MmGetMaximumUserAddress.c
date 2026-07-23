/*
 * XREFs of MmGetMaximumUserAddress @ 0x14046C090
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumUserAddress()
{
  return *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].PrimaryGroup;
}
