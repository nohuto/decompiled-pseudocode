/*
 * XREFs of ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1800A8060
 * Callers:
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1800A7C6C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1800A8910 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180227190 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A97F8 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1800D4500 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?GetInputQueueType@CInteraction@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180197DC8 (-GetInputQueueType@CInteraction@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     _CManipulationContext::OnVisualPropertyChange_::_15_::_lambda_1_::operator() @ 0x180226D10 (_CManipulationContext--OnVisualPropertyChange_--_15_--_lambda_1_--operator().c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 */

void __fastcall CManipulationContext::OnVisualPropertyChange(struct CVisual *a1, struct CDesktopTree *a2)
{
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v5; // rdi
  char *v6; // rbx
  struct CVisual *VisualNoRef; // rbx
  struct CInteraction *v8; // rax
  char v9; // r10
  unsigned int InputQueueType; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int128 v15; // xmm1
  _QWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int128 v18; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+A0h] [rbp+40h] BYREF
  struct CInteraction *v20; // [rsp+A8h] [rbp+48h] BYREF

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  v5 = InteractionInternal;
  if ( InteractionInternal )
  {
    v6 = (char *)InteractionInternal + 128;
    if ( (int)CVisualTree::EnsureVisualTransform(a2, a1) < 0 )
    {
      *(_QWORD *)(v6 + 60) = 1065353216LL;
      *(_QWORD *)v6 = 1065353216LL;
      *((_QWORD *)v6 + 1) = 0LL;
      *((_DWORD *)v6 + 4) = 0;
      *(_QWORD *)(v6 + 20) = 1065353216LL;
      *(_QWORD *)(v6 + 28) = 0LL;
      *((_DWORD *)v6 + 9) = 0;
      *((_QWORD *)v6 + 5) = 1065353216LL;
      *((_QWORD *)v6 + 6) = 0LL;
      *((_DWORD *)v6 + 14) = 0;
      v6[65] &= 0xE9u;
      v6[65] |= 0x29u;
      v6[64] = -86;
    }
    else
    {
      CVisual::GetWorldTransform(a1, a2, (struct CMILMatrix *)v6, 0LL, 0LL);
    }
    v17 = 0LL;
    v18 = 0LL;
    VisualNoRef = CInteraction::GetVisualNoRef(v5);
    v19 = 0;
    do
    {
      if ( !VisualNoRef )
        break;
      v8 = CVisual::GetInteractionInternal(VisualNoRef);
      v20 = v8;
      if ( v8 )
      {
        v19 = 1;
        v16[0] = &v20;
        v16[1] = &v19;
        InputQueueType = CInteraction::GetInputQueueType(v8, 5LL);
        CManipulationContext::OnVisualPropertyChange_::_15_::_lambda_1_::operator()(v16, &v17, InputQueueType);
        v11 = 0LL;
        v12 = *((_QWORD *)v20 + 14);
        if ( v12 )
          v11 = *(unsigned int *)(v12 + 80);
        CManipulationContext::OnVisualPropertyChange_::_15_::_lambda_1_::operator()(v16, (char *)&v17 + 8, v11);
        v13 = CInteraction::GetInputQueueType(v20, 4LL);
        CManipulationContext::OnVisualPropertyChange_::_15_::_lambda_1_::operator()(v16, (char *)&v18 + 8, v13);
        v14 = CInteraction::GetInputQueueType(v20, 2LL);
        CManipulationContext::OnVisualPropertyChange_::_15_::_lambda_1_::operator()(v16, &v18, v14);
        v9 = v19;
      }
      VisualNoRef = (struct CVisual *)*((_QWORD *)VisualNoRef + 11);
    }
    while ( !v9 );
    v15 = v18;
    *((_OWORD *)v5 + 5) = v17;
    *((_OWORD *)v5 + 6) = v15;
  }
}
