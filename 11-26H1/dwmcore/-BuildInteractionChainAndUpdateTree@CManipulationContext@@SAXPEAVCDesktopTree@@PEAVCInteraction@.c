/*
 * XREFs of ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1800A8910
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800A72E0 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x1800A7A54 (-IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1800A8060 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800A872C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1800A8838 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x1800A8E64 (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?HasInteraction@CVisual@@QEBA_NXZ @ 0x1800A8F10 (-HasInteraction@CVisual@@QEBA_NXZ.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A97F8 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CDesktopTree *a1,
        CInteraction *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  __int64 v7; // r13
  char v8; // r15
  CInteraction *v9; // rbp
  struct CVisual *VisualNoRef; // rsi
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v12; // rbx
  char v13; // r8
  bool v14; // zf
  unsigned __int8 v15; // r8
  char v16; // r8
  char v17; // r14
  char v18; // di
  CInteraction *v19; // rbx
  struct CVisual *v20; // rbx
  unsigned int v21; // r14d
  __int64 v22; // rax
  struct CVisual *VisualEffectiveParentImpl; // rdi
  bool *v24; // rdx
  struct CDesktopTree *v25; // r12
  char v26; // r15
  struct CInteraction *v27; // rax
  bool *v28; // rdx
  CInteraction *v29; // rsi
  struct CInteraction *v31; // rax
  struct CInteraction *v32; // rsi
  char v33; // r15
  char v34; // cl
  CInteraction *v35; // rcx
  __int64 v36; // rax
  int TotalNumContacts; // eax
  unsigned __int8 v38; // r8
  char v39; // dl
  CVisual *i; // rdi
  __int64 v41; // rdx
  struct CInteraction *v42; // rax
  CInteraction *v43; // r14
  __int64 v44; // rdx
  CInteraction *v46; // [rsp+78h] [rbp+10h]

  v7 = a4;
  v8 = 0;
  v9 = 0LL;
  VisualNoRef = CInteraction::GetVisualNoRef(a2);
  v46 = 0LL;
  while ( VisualNoRef )
  {
    InteractionInternal = CVisual::GetInteractionInternal(VisualNoRef);
    v12 = InteractionInternal;
    if ( !InteractionInternal )
      goto LABEL_42;
    v13 = *((_BYTE *)InteractionInternal + 200);
    *a7 |= (v13 & 3) != 0;
    v14 = *((_DWORD *)InteractionInternal + 51) == 2;
    *((_BYTE *)InteractionInternal + 200) = v13 & 0xFD;
    v8 |= v14;
    if ( !v9 )
    {
      if ( !v8 )
      {
        v16 = (unsigned int)CInteraction::GetTotalNumContacts(InteractionInternal) ? v15 >> 5 : v15 >> 4;
        if ( (v16 & 1) != 0 )
          goto LABEL_13;
      }
      if ( CInteraction::IsStrictlyHoverPointerSource(v12) )
        goto LABEL_13;
      v9 = v12;
      v46 = v12;
    }
    if ( (_DWORD)v7 == 4
      && (*(unsigned int (__fastcall **)(_QWORD *, __int64, _QWORD))(*((_QWORD *)v9 + 9) + 80LL))(
           (_QWORD *)v9 + 9,
           4LL,
           0LL)
      && (*(unsigned int (__fastcall **)(_QWORD *, __int64, __int64))(*((_QWORD *)v9 + 9) + 88LL))(
           (_QWORD *)v9 + 9,
           4LL,
           0x20000000LL) )
    {
      for ( i = (CVisual *)*((_QWORD *)VisualNoRef + 11); i; i = (CVisual *)*((_QWORD *)i + 11) )
      {
        v42 = CVisual::GetInteractionInternal(i);
        v43 = v42;
        if ( v42
          && (*(unsigned int (__fastcall **)(__int64, __int64))(*((_QWORD *)v42 + 9) + 80LL))((__int64)v42 + 72, 4LL) )
        {
          if ( CInteraction::GetInputHandle(v43) )
            CManipulationManager::s_needsStopAndEndInertia = 1;
          break;
        }
      }
    }
LABEL_13:
    if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*((_QWORD *)v12 + 9) + 80LL))(
           (_QWORD *)v12 + 9,
           (unsigned int)v7,
           0LL) )
    {
      if ( !v8 )
      {
        TotalNumContacts = CInteraction::GetTotalNumContacts(v12);
        v39 = v38 >> 5;
        if ( !TotalNumContacts )
          v39 = v38 >> 4;
        if ( (v39 & 1) != 0 )
        {
          v17 = 0;
          v46 = v12;
          v18 = 0;
          v9 = v12;
          goto LABEL_16;
        }
      }
      break;
    }
LABEL_42:
    VisualNoRef = (struct CVisual *)*((_QWORD *)VisualNoRef + 11);
  }
  v17 = 0;
  v18 = 0;
  v19 = v9;
  if ( !v9 )
    goto LABEL_30;
LABEL_16:
  v20 = CInteraction::GetVisualNoRef(v9);
  if ( v20 )
  {
    do
    {
      *((_BYTE *)v20 + 101) |= 0x10u;
      if ( CVisual::HasInteraction(v20) )
      {
        v31 = CVisual::GetInteractionInternal(v20);
        v32 = v31;
        if ( *((_DWORD *)v31 + 51) == 2 )
        {
          v17 = 1;
          v33 = 0;
        }
        else
        {
          v33 = v18;
        }
        CInteraction::UpdateDefaultInteractionForCurrentMC(v31);
        v18 = v33;
        if ( v17 )
        {
          if ( (*((_BYTE *)v32 + 200) & 0x10) != 0 )
          {
            v18 = v33;
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)v32 + 9) + 80LL))(
                   (__int64)v32 + 72,
                   (unsigned int)v7,
                   0LL) )
            {
              v18 = 1;
            }
          }
        }
        v34 = *((_BYTE *)v32 + 200);
        *a7 |= (v34 & 3) != 0;
        *((_BYTE *)v32 + 200) = v34 & 0xFD;
      }
      v20 = (struct CVisual *)*((_QWORD *)v20 + 11);
    }
    while ( v20 );
    v9 = v46;
  }
  v21 = v7 - 1;
  v19 = v9;
  v22 = (unsigned int)(v7 - 1);
  if ( (int)v7 - 1 < 0 || v21 >= 6 )
    v22 = 0LL;
  ++*((_DWORD *)v9 + v22 + 64);
  VisualEffectiveParentImpl = CInteraction::GetVisualNoRef(v9);
  if ( VisualEffectiveParentImpl )
  {
    v25 = a1;
    if ( (unsigned int)CInteraction::GetTotalNumContacts(v9) == 1 )
      CManipulationContext::OnVisualPropertyChange(VisualEffectiveParentImpl, a1);
    VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v24);
  }
  else
  {
    v25 = a1;
  }
  v26 = 0;
  if ( VisualEffectiveParentImpl )
  {
    do
    {
      v27 = CVisual::GetInteractionInternal(VisualEffectiveParentImpl);
      v29 = v27;
      if ( v27 )
      {
        if ( !v26 )
        {
          v35 = (CInteraction *)*((_QWORD *)v27 + 31);
          if ( v35 )
          {
            if ( v35 != v19 )
            {
              v41 = *((_QWORD *)v19 + 30);
              if ( v41 )
                *(_QWORD *)(v41 + 232) = *((_QWORD *)v19 + 29);
              v44 = *((_QWORD *)v19 + 29);
              if ( v44 )
                *(_QWORD *)(v44 + 240) = *((_QWORD *)v19 + 30);
              *((_QWORD *)v19 + 30) = 0LL;
              *((_QWORD *)v19 + 29) = v35;
              *((_QWORD *)v35 + 30) = v19;
            }
            v26 = 1;
          }
        }
        *((_QWORD *)v27 + 31) = v19;
        v36 = v7 - 1;
        *((_QWORD *)v19 + 28) = v29;
        if ( v21 > 5 )
          v36 = 0LL;
        ++*((_DWORD *)v29 + v36 + 64);
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v29) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParentImpl, v25);
        v19 = v29;
      }
      VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v28);
    }
    while ( VisualEffectiveParentImpl );
    v9 = v46;
  }
LABEL_30:
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=(a6, v19);
  return Microsoft::WRL::ComPtr<CBaseExpression>::operator=(a6 + 8, v9);
}
