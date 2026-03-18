/*
 * XREFs of HalpExtMarkHiberPhase @ 0x140BEB168
 * Callers:
 *     HaliLocateHiberRanges @ 0x140C08410 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 */

void HalpExtMarkHiberPhase()
{
  unsigned int i; // ebx
  unsigned __int64 v1; // rax
  void *v2; // r8

  for ( i = 0; i < *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[80]; ++i )
  {
    v1 = (unsigned __int64)i << 6;
    v2 = *(void *volatile *)((char *)&HalpDeviceBlockUnblockPushLock.WaitBlock[1].Thread->StackLimit + v1);
    if ( v2 )
      PoSetHiberRange(
        0LL,
        0x10000u,
        v2,
        *(unsigned int *)((char *)&HalpDeviceBlockUnblockPushLock.WaitBlock[1].Thread->StackBase + v1),
        0x586C6148u);
  }
}
