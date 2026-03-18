/*
 * XREFs of ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x1801D8B60
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1801FE5E0 (-SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1802756A0 (-SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18028BEC8 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 * Callees:
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x1801D8C14 (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScalarForce::Initialize(__int64 a1, int a2, float a3, float a4, int a5)
{
  float v6; // xmm6_4
  __int32 v8; // xmm1_4
  struct IAccelerator *v9; // r9

  v6 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 40LL))(*(_QWORD *)(a1 + 104)) )
    a3 = a3 - (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 24LL))(*(_QWORD *)(a1 + 104));
  *(_DWORD *)(a1 + 84) = a2;
  COERCE_FLOAT(v8 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  *(_DWORD *)(a1 + 88) = LODWORD(a3) & v8;
  *(_DWORD *)(a1 + 92) = LODWORD(a4) & v8;
  v9 = *(struct IAccelerator **)(a1 + 104);
  *(_DWORD *)(a1 + 96) = a5;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 16), v6, a4, v9, (const struct ForceThreshold *)(a1 + 84));
}
