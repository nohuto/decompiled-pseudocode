/*
 * XREFs of MiComputePartitionHugeIoSpaceSize @ 0x1406F0008
 * Callers:
 *     MiCreatePartitionOffsets @ 0x14086F090 (MiCreatePartitionOffsets.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiComputePartitionHugeIoSpaceSize()
{
  return 16 * (unsigned __int16)KeNumberNodes * (unsigned __int64)(unsigned int)dword_140E2D900[0];
}
