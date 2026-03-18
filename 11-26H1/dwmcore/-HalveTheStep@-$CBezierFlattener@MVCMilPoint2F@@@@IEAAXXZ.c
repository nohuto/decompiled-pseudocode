/*
 * XREFs of ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1800543D4
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x180051CD0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x180053FD4 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x180054480 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBezierFlattener<float,CMilPoint2F>::HalveTheStep(__int64 a1)
{
  float v1; // xmm3_4
  float v2; // xmm3_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  double v5; // xmm0_8
  __int64 result; // rax

  v1 = *(float *)(a1 + 64) + *(float *)(a1 + 72);
  *(float *)(a1 + 64) = v1;
  v2 = v1 * 0.125;
  v3 = (float)(*(float *)(a1 + 76) + *(float *)(a1 + 68)) * 0.125;
  *(float *)(a1 + 64) = v2;
  *(float *)(a1 + 68) = v3;
  v4 = (float)(*(float *)(a1 + 56) - v2) * 0.5;
  *(float *)(a1 + 60) = (float)(*(float *)(a1 + 60) - v3) * 0.5;
  *(float *)(a1 + 56) = v4;
  *(float *)(a1 + 72) = *(float *)(a1 + 72) * 0.25;
  *(float *)(a1 + 76) = *(float *)(a1 + 76) * 0.25;
  v5 = *(float *)(a1 + 88);
  result = (unsigned int)(2 * *(_DWORD *)(a1 + 80));
  *(_DWORD *)(a1 + 80) = result;
  *(float *)(a1 + 88) = v5 * 0.5;
  return result;
}
