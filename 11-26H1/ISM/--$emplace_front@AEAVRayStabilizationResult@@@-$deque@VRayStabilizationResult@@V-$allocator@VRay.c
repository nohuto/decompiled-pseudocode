/*
 * XREFs of ??$emplace_front@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAAEAVRayStabilizationResult@@AEAV2@@Z @ 0x1800C6354
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006AD38 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??$_Emplace_front_internal@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180073038 (--$_Emplace_front_internal@AEAVRayStabilizationResult@@@-$deque@VRayStabilizationResult@@V-$allo.c)
 */

__int64 __fastcall std::deque<RayStabilizationResult>::emplace_front<RayStabilizationResult &>(_QWORD *a1, __int64 a2)
{
  std::deque<RayStabilizationResult>::_Emplace_front_internal<RayStabilizationResult &>(a1, a2);
  return *(_QWORD *)(a1[1] + 8 * (a1[3] & (a1[2] - 1LL)));
}
