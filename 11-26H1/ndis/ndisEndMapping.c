/*
 * XREFs of ndisEndMapping @ 0x1400DA150
 * Callers:
 *     ndisImmediateReadWritePort @ 0x1400DA178 (ndisImmediateReadWritePort.c)
 *     ?ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z @ 0x1400DA2F0 (-ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisEndMapping(void *a1, unsigned int a2, char a3)
{
  if ( a3 )
    MmUnmapIoSpace(a1, a2);
  return 0LL;
}
