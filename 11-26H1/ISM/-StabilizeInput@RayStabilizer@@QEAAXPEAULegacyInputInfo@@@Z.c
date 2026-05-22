/*
 * XREFs of ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006AD38
 * Callers:
 *     ?StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAULegacyInputInfo@@@Z @ 0x18006AD00 (-StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18006AE74 (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?pop_back@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAXXZ @ 0x18006B150 (-pop_back@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@QEA.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$emplace_front@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAAEAVRayStabilizationResult@@AEAV2@@Z @ 0x1800C6354 (--$emplace_front@AEAVRayStabilizationResult@@@-$deque@VRayStabilizationResult@@V-$allocator@VRay.c)
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6894 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6B7C (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 */

void __fastcall RayStabilizer::StabilizeInput(RayStabilizer *this, struct LegacyInputInfo *a2)
{
  bool v2; // zf
  __int128 v4; // xmm0
  __int64 v6; // xmm1_8
  const char *v7; // r9
  unsigned __int64 i; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-88h] BYREF
  __int128 v12; // [rsp+24h] [rbp-84h]
  _QWORD v13[11]; // [rsp+34h] [rbp-74h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = *((_QWORD *)this + 4) == 0LL;
  v4 = *(_OWORD *)((char *)a2 + 120);
  v11 = 1;
  v6 = *((_QWORD *)a2 + 17);
  v12 = v4;
  v13[0] = v6;
  if ( !v2 )
  {
    if ( (*((_BYTE *)this + 44) & 1) != 0 )
      RayStabilizer::PerformLowPassFilterStabilization(this, (struct RayStabilizationResult *)&v11);
    if ( (*((_BYTE *)this + 44) & 2) != 0 )
      RayStabilizer::PerformDropOffStabilization(this, (struct RayStabilizationResult *)&v11);
    if ( (*((_BYTE *)this + 44) & 4) != 0 )
      RayStabilizer::PerformDynamicExponential(this, (struct RayStabilizationResult *)&v11);
  }
  std::deque<RayStabilizationResult>::emplace_front<RayStabilizationResult &>(this, &v11);
  for ( i = *((unsigned int *)this + 10); *((_QWORD *)this + 4) > i; i = std::deque<RayStabilizationResult>::pop_back(this) )
    ;
  if ( !v11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\raystabilizationresult.cpp",
      v7);
  v9 = (unsigned int)(v11 - 1);
  if ( (unsigned int)v9 >= 4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\raystabilizationresult.cpp",
      v7);
  v10 = 3 * v9;
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)&v13[v10 - 2];
  *((_QWORD *)a2 + 17) = v13[v10];
}
