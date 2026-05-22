/*
 * XREFs of ?front@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAAEAVRayStabilizationResult@@XZ @ 0x1800C76F4
 * Callers:
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6B7C (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?front@?$queue@UGetInputReportResult@@V?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@@std@@QEAAAEAUGetInputReportResult@@XZ @ 0x1800DD6BC (-front@-$queue@UGetInputReportResult@@V-$deque@UGetInputReportResult@@V-$allocator@UGetInputRepo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<RayStabilizationResult>::front(_QWORD *a1)
{
  return *(_QWORD *)(a1[1] + 8 * (a1[3] & (a1[2] - 1LL)));
}
