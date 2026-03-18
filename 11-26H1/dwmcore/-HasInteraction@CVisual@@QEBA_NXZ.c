/*
 * XREFs of ?HasInteraction@CVisual@@QEBA_NXZ @ 0x1800A8F10
 * Callers:
 *     ?CheckTargetsForInteractionSource@CInteractionTrackerBase@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x18004DCA0 (-CheckTargetsForInteractionSource@CInteractionTrackerBase@@SAXPEBUExpressionReferenceInfo@@PEAVC.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x1800A8204 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV-$vecto.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1800A8910 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x1800A8EC4 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1802611CC (-UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasInteraction(CVisual *this)
{
  _DWORD *v1; // rdx
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _BYTE *v4; // r9
  unsigned int v5; // r8d

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  v2 = 0LL;
  if ( (*v1 & 0x2000000) != 0 )
  {
    v3 = (unsigned int)v1[1];
    v4 = v1 + 2;
    v5 = 0;
    if ( (_DWORD)v3 )
    {
      while ( *v4 != 7 )
      {
        ++v5;
        ++v4;
        if ( v5 >= (unsigned int)v3 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( v5 >= (unsigned int)v3 )
        goto LABEL_5;
    }
    v2 = (_QWORD *)((char *)&v1[2 * v5] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_5:
    v2 = (_QWORD *)*v2;
  }
  return v2 != 0LL;
}
