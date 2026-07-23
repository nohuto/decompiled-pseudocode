/*
 * XREFs of KiSizeOfCpuPartitionLogPerProcessorBuffer @ 0x1405F71B8
 * Callers:
 *     KiTraceCpuPartitionRundown @ 0x1407BE260 (KiTraceCpuPartitionRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSizeOfCpuPartitionLogPerProcessorBuffer(unsigned __int16 a1)
{
  return 16 * (2 * (unsigned int)a1 + 4 + 3LL) + 18LL * a1;
}
