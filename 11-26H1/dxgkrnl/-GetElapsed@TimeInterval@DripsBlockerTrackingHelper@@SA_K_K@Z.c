/*
 * XREFs of ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1402FAD94
 * Callers:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1402F987C (-AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z @ 0x1402FB050 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x14037EFF0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x14037F10C (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x140046CA4 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

unsigned __int64 __fastcall DripsBlockerTrackingHelper::TimeInterval::GetElapsed(__int64 a1)
{
  __int64 v2; // rdi
  LARGE_INTEGER v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int128 v5; // rax
  unsigned __int64 v6; // kr00_8
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = 0LL;
  v4 = v3.QuadPart - a1;
  v6 = v3.QuadPart - a1;
  v5 = (unsigned __int64)(v3.QuadPart - a1) * (unsigned __int128)0x989680uLL;
  if ( is_mul_ok(v6, 0x989680uLL) )
    return v5 / (unsigned __int64)PerformanceFrequency.QuadPart;
  v8 = -1LL;
  if ( (int)RtlULongLongMult(v4, 0x3E8uLL, &v8) >= 0
    && (int)RtlULongLongMult(v8 / PerformanceFrequency.QuadPart, 0x2710uLL, &v8) >= 0 )
  {
    return v8;
  }
  return v2;
}
