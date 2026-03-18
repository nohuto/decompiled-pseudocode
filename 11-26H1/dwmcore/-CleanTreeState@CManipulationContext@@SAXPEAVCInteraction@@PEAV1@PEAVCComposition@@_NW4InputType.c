/*
 * XREFs of ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1800A8D00
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800A7AF0 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1800A7ED0 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x180094404 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180094C7C (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1800A769C (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800A872C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x1800A8E64 (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x1800A8EC4 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1800A8F6C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A97F8 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::CleanTreeState(CInteraction *a1, __int64 a2, RTL_SRWLOCK *a3, char a4, int a5)
{
  CInteraction *v9; // rbx
  char v10; // si
  __int64 v11; // rbp
  char v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  struct CVisual *v15; // rbx
  bool *v16; // rdx
  struct CVisual *i; // rax
  CInteraction *v18; // [rsp+60h] [rbp+8h] BYREF
  char v19; // [rsp+78h] [rbp+20h]

  v19 = a4;
  v18 = a1;
  v9 = a1;
  if ( a1 )
    (*(void (__fastcall **)(CInteraction *))(*(_QWORD *)a1 + 8LL))(a1);
  v10 = 1;
  if ( !a4 )
    CTreeLock::AcquireShared(a3 + 712);
  v11 = a5;
  while ( v9 )
  {
    v13 = *((_QWORD *)v9 + 28);
    v14 = v11 - 1;
    if ( (unsigned int)(v11 - 1) > 5 )
      v14 = 0LL;
    --*((_DWORD *)v9 + v14 + 64);
    if ( !(unsigned int)CInteraction::GetTotalNumContacts(v9) )
    {
      CManipulationContext::RemoveInteractionLeafFromTree(v9);
      if ( a2 )
      {
        if ( v9 == *(CInteraction **)(a2 + 48) )
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a2 + 48));
      }
    }
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=(&v18, v13);
    v9 = v18;
  }
  v12 = v19;
  if ( a1 )
  {
    for ( i = CInteraction::GetVisualNoRef(a1); ; i = CManipulationContext::GetVisualEffectiveParentImpl(v15, v16) )
    {
      v15 = i;
      if ( !i )
        break;
      if ( v10 )
      {
        if ( (*((_BYTE *)i + 101) & 0x10) == 0
          || CManipulationContext::VisualHasActiveInteraction(i, 0)
          || CManipulationContext::VisualHasAnyChildFlagged(v15) )
        {
          v10 = 0;
        }
        else
        {
          *((_BYTE *)v15 + 101) &= ~0x10u;
        }
      }
    }
  }
  if ( !v12 )
    CTreeLock::ReleaseShared(a3 + 712);
}
