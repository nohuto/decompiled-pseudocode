/*
 * XREFs of ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x1801E1C94
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1801FE5E0 (-SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??$?4VCInteractionTrackerPositionAnimation@@@?$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCInteractionTrackerPositionAnimation@@@12@@Z @ 0x180270280 (--$-4VCInteractionTrackerPositionAnimation@@@-$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEA.c)
 */

__int64 __fastcall CInteractionTracker::GetAnimationForAxis(__int64 a1, int a2, _QWORD *a3)
{
  int v4; // edx
  __int64 v5; // rdx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( !a2 )
  {
    v5 = a1 + 424;
    goto LABEL_8;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v5 = a1 + 432;
LABEL_8:
    Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CInteractionTrackerPositionAnimation>(&v8, v5);
    goto LABEL_9;
  }
  if ( v4 != 1 )
    ModuleFailFastForHRESULT(-2147467259, retaddr);
  Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CInteractionTrackerPositionAnimation>(&v8, a1 + 416);
LABEL_9:
  result = v8;
  *a3 = v8;
  return result;
}
