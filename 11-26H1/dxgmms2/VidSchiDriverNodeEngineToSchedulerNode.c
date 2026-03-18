/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x140039488
 * Callers:
 *     VidSchiPreemptEngineNodes @ 0x1400C070C (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1400C1A0C (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1400C3730 (VidSchInitializeComponentPowerManagement.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchQueryNodeStatistics @ 0x140104500 (VidSchQueryNodeStatistics.c)
 *     VidSchQueryProcessNodeStatistics @ 0x14010A1B0 (VidSchQueryProcessNodeStatistics.c)
 *     VidSchCreateContext @ 0x1401188C0 (VidSchCreateContext.c)
 *     VidSchCreateHwContext @ 0x14011B4A0 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 96);
}
