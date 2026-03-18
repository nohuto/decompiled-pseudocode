/*
 * XREFs of ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18021E554
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18027054C (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker2@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180271EA8 (-CalculateCenterPointForAxis@CInteractionTracker2@@AEAAJPEAVCExpressionValueStack@@W4ScrollState.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__int64 __fastcall InteractionSourceManager::GetSourceCenterpointModifierForActiveManipulation(
        InteractionSourceManager *a1)
{
  char HasActiveManipulation; // al
  InteractionSourceManager *v2; // rcx
  __int64 v3; // r9
  struct CManipulation *ActiveManipulation; // rax
  int v5; // r10d

  HasActiveManipulation = InteractionSourceManager::HasActiveManipulation(a1);
  v3 = 0LL;
  if ( HasActiveManipulation )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v2);
    if ( v5 )
    {
      if ( v5 == 1 )
        return *((_QWORD *)ActiveManipulation + 63);
    }
    else
    {
      return *((_QWORD *)ActiveManipulation + 62);
    }
  }
  return v3;
}
