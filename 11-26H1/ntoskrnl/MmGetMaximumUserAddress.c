/*
 * XREFs of MmGetMaximumUserAddress @ 0x140472910
 * Callers:
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumUserAddress()
{
  return *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].PrimaryGroup;
}
