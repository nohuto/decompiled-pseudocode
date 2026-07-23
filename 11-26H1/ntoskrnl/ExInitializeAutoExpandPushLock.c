/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x14046E140
 * Callers:
 *     MiAllocateAweInfo @ 0x14087D964 (MiAllocateAweInfo.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140ABF810 (MmInitializeHandBuiltProcess.c)
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
