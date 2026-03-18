/*
 * XREFs of MiComputePartitionHugeIoSpaceSize @ 0x1406EB368
 * Callers:
 *     MiCreatePartitionOffsets @ 0x140868CB0 (MiCreatePartitionOffsets.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiComputePartitionHugeIoSpaceSize()
{
  return 16 * (unsigned __int16)KeNumberNodes * (unsigned __int64)(unsigned int)dword_140E2D780[0];
}
