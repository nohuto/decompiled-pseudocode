/*
 * XREFs of ??$?4VCInteractionTrackerPositionAnimation@@@?$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCInteractionTrackerPositionAnimation@@@12@@Z @ 0x180270280
 * Callers:
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x1801E1C94 (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 *     ?GetAnimationForAxis@CInteractionTracker2@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x180273298 (-GetAnimationForAxis@CInteractionTracker2@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CInteractionTrackerPositionAnimation>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *a2;
  v2 = v5;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v5);
  v5 = *a1;
  *a1 = v2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  return a1;
}
