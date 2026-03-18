/*
 * XREFs of ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801D59AC
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1800A860C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800A872C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A97F8 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x180153334 (-GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z.c)
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x1801E382C (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x180213BE4 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 */

char __fastcall CManipulationContext::InvalidateMCs(
        __int64 a1,
        CVisual **a2,
        const struct CInteraction *a3,
        int a4,
        _DWORD *a5)
{
  struct CInteraction *ManipulationContext; // rax
  int v7; // r10d
  int v9; // r9d
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  const struct CInteraction *MCRoot; // rax
  int *v14; // r8
  char v15; // cl
  struct CManipulationContext *v16; // rbp
  const struct CInteraction *v17; // rbx
  bool *v18; // rdx
  const struct CVisual *v19; // r10
  const struct CInteraction *v20; // rax
  int *v21; // r8
  struct CManipulationContext *v22; // rax
  char v23; // al
  const struct CVisual *VisualNoRef; // rax
  bool *v25; // rdx
  int v26; // ebp
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  ManipulationContext = (struct CInteraction *)&retaddr;
  v7 = *(_DWORD *)(a1 + 32);
  if ( *a5 == v7 )
    return (char)ManipulationContext;
  if ( a4 )
  {
    v9 = a4 - 1;
    if ( v9 )
    {
      if ( (unsigned int)(v9 - 1) > 1 )
        return (char)ManipulationContext;
      goto LABEL_5;
    }
    if ( !a3 || (*((_BYTE *)a3 + 200) & 0x10) != 0 )
    {
LABEL_5:
      v10 = 0;
      if ( v7 > 0 )
      {
        v11 = 0LL;
        do
        {
          ManipulationContext = *(struct CInteraction **)(a1 + 24);
          v12 = *(_QWORD *)((char *)ManipulationContext + v11);
          if ( v12 )
          {
            LOBYTE(ManipulationContext) = *(_BYTE *)(v12 + 28);
            if ( ((unsigned __int8)ManipulationContext & 4) == 0 )
            {
              LOBYTE(ManipulationContext) = (unsigned __int8)ManipulationContext | 4;
              *(_BYTE *)(v12 + 28) = (_BYTE)ManipulationContext;
              ++*a5;
            }
          }
          ++v10;
          v11 += 8LL;
        }
        while ( v10 < *(_DWORD *)(a1 + 32) );
      }
      return (char)ManipulationContext;
    }
    MCRoot = CManipulationContext::GetMCRoot(a3);
    ManipulationContext = CManipulationContext::FindManipulationContext((const struct MCCollections *)a1, MCRoot, v14);
    if ( ManipulationContext )
    {
      v15 = *((_BYTE *)ManipulationContext + 28);
      if ( (v15 & 4) == 0 )
      {
        *((_BYTE *)ManipulationContext + 28) = v15 | 4;
        ++*a5;
      }
    }
  }
  else if ( a2 )
  {
    v16 = 0LL;
    ManipulationContext = CVisual::GetInteractionInternal((CVisual *)a2);
    v17 = ManipulationContext;
    if ( ManipulationContext
      && ((*((_BYTE *)ManipulationContext + 200) & 0x10) == 0
       || !a2[11]
       || (ManipulationContext = CVisual::GetInteractionInternal(a2[11]), (v17 = ManipulationContext) != 0LL)
       || (ManipulationContext = CManipulationContext::GetClosestInteractionAncestor(v19, v18),
           (v17 = ManipulationContext) != 0LL)) )
    {
      while ( !v16 )
      {
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v17) )
        {
          v20 = CManipulationContext::GetMCRoot(v17);
          v22 = CManipulationContext::FindManipulationContext((const struct MCCollections *)a1, v20, v21);
          v16 = v22;
          if ( v22 )
          {
            v23 = *((_BYTE *)v22 + 28);
            if ( (v23 & 4) == 0 )
            {
              *((_BYTE *)v16 + 28) = v23 | 4;
              ++*a5;
            }
          }
        }
        VisualNoRef = CInteraction::GetVisualNoRef(v17);
        ManipulationContext = CManipulationContext::GetClosestInteractionAncestor(VisualNoRef, v25);
        v17 = ManipulationContext;
        if ( !ManipulationContext )
        {
          if ( v16 )
            return (char)ManipulationContext;
          goto LABEL_30;
        }
      }
    }
    else
    {
LABEL_30:
      v26 = 0;
      if ( *(int *)(a1 + 32) > 0 )
      {
        v27 = 0LL;
        do
        {
          ManipulationContext = *(struct CInteraction **)(a1 + 24);
          v28 = *(_QWORD *)((char *)ManipulationContext + v27);
          if ( (*(_BYTE *)(v28 + 28) & 4) == 0 )
          {
            LOBYTE(ManipulationContext) = CManipulationContext::IsInteractionDescendantOfVisual(
                                            *(const struct CInteraction **)(v28 + 48),
                                            (const struct CVisual *)a2);
            if ( (_BYTE)ManipulationContext )
            {
              ManipulationContext = *(struct CInteraction **)(a1 + 24);
              v29 = *(_QWORD *)((char *)ManipulationContext + v27);
              if ( v29 )
              {
                LOBYTE(ManipulationContext) = *(_BYTE *)(v29 + 28);
                if ( ((unsigned __int8)ManipulationContext & 4) == 0 )
                {
                  LOBYTE(ManipulationContext) = (unsigned __int8)ManipulationContext | 4;
                  *(_BYTE *)(v29 + 28) = (_BYTE)ManipulationContext;
                  ++*a5;
                }
              }
            }
          }
          ++v26;
          v27 += 8LL;
        }
        while ( v26 < *(_DWORD *)(a1 + 32) );
      }
    }
  }
  return (char)ManipulationContext;
}
