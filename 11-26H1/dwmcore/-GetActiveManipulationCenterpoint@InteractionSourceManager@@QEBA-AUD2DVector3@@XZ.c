/*
 * XREFs of ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x1801E211C
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x18013DCFC (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18027054C (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker2@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180271EA8 (-CalculateCenterPointForAxis@CInteractionTracker2@@AEAAJPEAVCExpressionValueStack@@W4ScrollState.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ @ 0x180274AC0 (-ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__int64 __fastcall InteractionSourceManager::GetActiveManipulationCenterpoint(InteractionSourceManager *a1, __int64 a2)
{
  InteractionSourceManager *v2; // rcx
  __int64 v3; // r10
  struct CManipulation *ActiveManipulation; // rax
  __int64 v5; // xmm0_8

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v2);
    v5 = *(_QWORD *)((char *)ActiveManipulation + 324);
    LODWORD(ActiveManipulation) = *((_DWORD *)ActiveManipulation + 83);
    *(_QWORD *)v3 = v5;
    *(_DWORD *)(v3 + 8) = (_DWORD)ActiveManipulation;
    *(float *)v3 = *(float *)v3 * -1.0;
    *(float *)(v3 + 4) = *(float *)(v3 + 4) * -1.0;
  }
  return v3;
}
