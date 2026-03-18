/*
 * XREFs of ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x18013ACC8
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x18013A5DC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@MMM@Z @ 0x18013C9E0 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@MMM@Z.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@MPEAM@Z @ 0x18013D430 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@@Z @ 0x18013E504 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1801A14F8 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?StartInContact@CMotion@@IEAAX_N@Z @ 0x1801A18E8 (-StartInContact@CMotion@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall ScrollAxisToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"X";
  v1 = a1 - 1;
  if ( !v1 )
    return L"Y";
  if ( v1 == 1 )
    return L"Scale";
  return L"Unsupported Axis";
}
