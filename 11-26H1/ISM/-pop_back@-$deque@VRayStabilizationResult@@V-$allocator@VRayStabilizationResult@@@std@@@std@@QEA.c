/*
 * XREFs of ?pop_back@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAXXZ @ 0x18006B150
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006AD38 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::deque<RayStabilizationResult>::pop_back(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
    *(_QWORD *)(a1 + 24) = 0LL;
}
