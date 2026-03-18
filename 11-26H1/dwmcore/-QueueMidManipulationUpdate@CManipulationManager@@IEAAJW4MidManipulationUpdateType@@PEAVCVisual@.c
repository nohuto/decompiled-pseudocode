/*
 * XREFs of ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800E5578
 * Callers:
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020674 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020E7C (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800E5044 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x1800E5408 (-NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z.c)
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x1800E5880 (-FinalRelease@CVisual@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1800A78B0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x1800A8204 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV-$vecto.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1800A860C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800A872C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1800A8F6C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1800E4EBC (McTemplateU0xx_EventWriteTransfer.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800E62B0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800E8658 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::QueueMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *InteractionInternal; // rdi
  int v4; // r14d
  __int64 v5; // rbx
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rcx
  void *v18; // rdx
  unsigned int v19; // esi
  CInteraction *v20; // r8
  int TotalNumContacts; // eax
  __int64 v22; // r8
  bool *v23; // rdx
  __int64 v24; // rcx
  struct CInteraction *ClosestInteractionAncestor; // rax
  struct CInteraction *v26; // rax
  CVisual **i; // rbx
  CVisual **v28; // rdi
  __int64 v29; // rcx
  CVisual *v30; // r14
  __int64 *v31; // rax
  struct CInteraction *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int128 v35; // [rsp+30h] [rbp-20h] BYREF
  __int64 v36; // [rsp+40h] [rbp-10h]
  struct CInteraction *v37; // [rsp+98h] [rbp+48h] BYREF

  InteractionInternal = 0LL;
  v4 = 0;
  v36 = 0LL;
  v5 = a3;
  v35 = 0LL;
  if ( a2 > 0xA || !a3 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1DFu, 0LL);
    goto LABEL_17;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      InteractionInternal = (__int64 *)CVisual::GetInteractionInternal((CVisual *)a3);
      v19 = 0;
      v20 = (CInteraction *)InteractionInternal[31];
      while ( v20 )
      {
        TotalNumContacts = CInteraction::GetTotalNumContacts(v20);
        v20 = *(CInteraction **)(v22 + 232);
        v19 += TotalNumContacts;
      }
      if ( v19 < (unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)InteractionInternal) )
      {
        ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(
                                       (const struct CVisual *)v5,
                                       v23);
        Microsoft::WRL::ComPtr<CBaseExpression>::operator=(
          InteractionInternal + 26,
          (__int64)ClosestInteractionAncestor);
      }
      if ( !v19 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v5) )
      {
        *(_BYTE *)(v5 + 101) &= ~0x10u;
        CManipulationContext::PropagateVisualManipulationNotificationFlag(
          *(struct CVisual ***)(v5 + 88),
          0,
          (__int64)&v35,
          0);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0xx_EventWriteTransfer(v24, &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL, InteractionInternal, v5);
    }
    else
    {
      if ( a2 == 2 )
      {
        CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual ***)(a3 + 88), 1, 0LL, 0);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
          goto LABEL_8;
        a3 = v5;
        v18 = &MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
        goto LABEL_40;
      }
      v8 = a2 - 3;
      if ( a2 == 3 )
      {
        *(_BYTE *)(a3 + 101) &= ~0x10u;
        v37 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
        v15 = CManipulationContext::TotalContactsCapturedUnderVisual(
                (const struct MCCollections *)(a1 + 160),
                (struct CVisual *)v5,
                &v37);
        InteractionInternal = (__int64 *)v37;
        CManipulationContext::PropagateVisualManipulationNotificationFlag(
          *(struct CVisual ***)(v5 + 88),
          0,
          (__int64)&v35,
          v15);
        if ( InteractionInternal )
          (*(void (__fastcall **)(__int64 *))(*InteractionInternal + 16))(InteractionInternal);
        *(_BYTE *)(v5 + 101) |= 0x10u;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          McTemplateU0x_EventWriteTransfer(v16, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v5);
        if ( !InteractionInternal )
          goto LABEL_17;
        goto LABEL_8;
      }
      if ( a2 == 4 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      {
        v18 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
LABEL_40:
        McTemplateU0x_EventWriteTransfer(v8, v18, a3);
      }
    }
  }
  else
  {
    v26 = CVisual::GetInteractionInternal((CVisual *)a3);
    InteractionInternal = (__int64 *)v26;
    if ( v26 && *((_QWORD *)v26 + 26) )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v26 + 26);
    CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual **)v5, 1, 0LL, 0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0xx_EventWriteTransfer(v29, &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION, InteractionInternal, v5);
  }
LABEL_8:
  v9 = (__int64 *)MIDL_user_allocate(0x48uLL);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x48uLL);
    *(_DWORD *)v10 = a2;
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v10 + 1, v5);
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v10 + 2, (__int64)InteractionInternal);
    *((_DWORD *)v10 + 6) = 0;
    v10[4] = 0LL;
    v4 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v12, v11, v10);
    if ( v4 >= 0 )
    {
      v28 = (CVisual **)*((_QWORD *)&v35 + 1);
      for ( i = (CVisual **)v35; i != v28; ++i )
      {
        v30 = *i;
        v31 = (__int64 *)MIDL_user_allocate(0x48uLL);
        v10 = v31;
        if ( !v31 )
        {
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x25Cu, 0LL);
          break;
        }
        memset_0(v31, 0, 0x48uLL);
        *(_DWORD *)v10 = 10;
        Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v10 + 1, (__int64)v30);
        v32 = CVisual::GetInteractionInternal(v30);
        Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v10 + 2, (__int64)v32);
        *((_DWORD *)v10 + 6) = 0;
        v10[4] = 0LL;
        v4 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v34, v33, v10);
        if ( v4 < 0 )
        {
          v13 = 611;
          goto LABEL_11;
        }
      }
    }
    else
    {
      v13 = 595;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v13, 0LL);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
        (CManipulationManager::InteractionUpdate *)v10,
        v14);
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x23Fu, 0LL);
  }
LABEL_17:
  if ( (_QWORD)v35 )
    std::_Deallocate<16>((void *)v35, (v36 - v35) & 0xFFFFFFFFFFFFFFF8uLL);
  return (unsigned int)v4;
}
