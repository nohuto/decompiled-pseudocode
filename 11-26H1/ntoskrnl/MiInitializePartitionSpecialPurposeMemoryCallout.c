/*
 * XREFs of MiInitializePartitionSpecialPurposeMemoryCallout @ 0x14070CC10
 * Callers:
 *     <none>
 * Callees:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B65CA0 (MiInitializePartitionSpecialPurposeMemory.c)
 */

void __fastcall MiInitializePartitionSpecialPurposeMemoryCallout(_DWORD *Parameter)
{
  Parameter[4] = MiInitializePartitionSpecialPurposeMemory(*(_QWORD *)Parameter, *((_QWORD *)Parameter + 1));
}
