/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x1404D0330
 * Callers:
 *     MiIssuePageHeatList @ 0x1402F383C (MiIssuePageHeatList.c)
 *     MiGetChannelInformation @ 0x1404A43F4 (MiGetChannelInformation.c)
 *     MiAddPartitionHugeRange @ 0x1406EB048 (MiAddPartitionHugeRange.c)
 *     MiMarkHugePfnBad @ 0x1406EC7AC (MiMarkHugePfnBad.c)
 *     MiFinishResume @ 0x1406EF990 (MiFinishResume.c)
 *     MiAddPhysicalMemory @ 0x14086501C (MiAddPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1408663A4 (MiGetPhysicalMemoryRanges.c)
 *     MiMapNewPfns @ 0x140866674 (MiMapNewPfns.c)
 *     MiMirrorComplete @ 0x140C00ED4 (MiMirrorComplete.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = (signed __int64 *)(a1 + 264);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 264), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((unsigned __int64)v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
