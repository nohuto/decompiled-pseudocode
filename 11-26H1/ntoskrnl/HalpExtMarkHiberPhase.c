/*
 * XREFs of HalpExtMarkHiberPhase @ 0x140BF1168
 * Callers:
 *     HaliLocateHiberRanges @ 0x140C0E620 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 */

void HalpExtMarkHiberPhase()
{
  unsigned int i; // ebx
  unsigned __int64 v1; // rax
  void *v2; // r8

  for ( i = 0; i < *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[48]; ++i )
  {
    v1 = (unsigned __int64)i << 6;
    v2 = *(void **)((char *)HalpDeviceBlockUnblockPushLock.WaitBlock[0].SparePtr + v1 + 48);
    if ( v2 )
      PoSetHiberRange(
        0LL,
        0x10000u,
        v2,
        *(unsigned int *)((char *)HalpDeviceBlockUnblockPushLock.WaitBlock[0].SparePtr + v1 + 56),
        0x586C6148u);
  }
}
