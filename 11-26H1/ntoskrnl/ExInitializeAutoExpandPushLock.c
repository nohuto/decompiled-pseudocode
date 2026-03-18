/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x1404749C0
 * Callers:
 *     MiAllocateAweInfo @ 0x140877584 (MiAllocateAweInfo.c)
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140963A54 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall ExInitializeAutoExpandPushLock(_QWORD *a1, char a2)
{
  a1[1] = 0LL;
  if ( (a2 & 1) == 0 )
    *((_DWORD *)a1 + 2) = 4;
  *a1 = 0LL;
}
