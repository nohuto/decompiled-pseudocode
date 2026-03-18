/*
 * XREFs of ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802942D0
 * Callers:
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18013F190 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180140840 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x18016A5D0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 * Callees:
 *     sin_0 @ 0x1802B9768 (sin_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CAnimationInterpolator::InterpolateSinusoidal(
        CAnimationInterpolator *this,
        const struct DwmAnimationPrimitive *a2,
        int a3)
{
  double v4; // xmm6_8
  __int64 v5; // rax
  double v6; // xmm0_8

  v4 = (double)(a3 - *((_DWORD *)a2 + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  if ( v5 < 0 )
    v6 = (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1)) + (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1));
  else
    v6 = (double)(int)v5;
  return sin_0(*((float *)a2 + 6) * (v4 / v6) + *((float *)a2 + 7)) * *((float *)a2 + 5) + *((float *)a2 + 4);
}
