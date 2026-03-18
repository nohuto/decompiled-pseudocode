/*
 * XREFs of ?GetAnimationForAxis@CInteractionTracker2@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x180273298
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1802756A0 (-SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??$?4VCInteractionTrackerPositionAnimation@@@?$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCInteractionTrackerPositionAnimation@@@12@@Z @ 0x180270280 (--$-4VCInteractionTrackerPositionAnimation@@@-$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEA.c)
 */

__int64 __fastcall CInteractionTracker2::GetAnimationForAxis(__int64 *a1, int a2, _QWORD *a3)
{
  int v4; // edx
  __int64 *v5; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( !a2 )
  {
    v5 = a1 + 82;
    goto LABEL_8;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v5 = a1 + 83;
LABEL_8:
    Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CInteractionTrackerPositionAnimation>(&v8, v5);
    goto LABEL_9;
  }
  if ( v4 != 1 )
    ModuleFailFastForHRESULT(-2147467259, retaddr);
  Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CInteractionTrackerPositionAnimation>(&v8, a1 + 81);
LABEL_9:
  *a3 = v8;
  v8 = 0LL;
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
}
