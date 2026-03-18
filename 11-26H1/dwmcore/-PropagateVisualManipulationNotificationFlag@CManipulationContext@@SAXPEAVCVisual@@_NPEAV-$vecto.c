/*
 * XREFs of ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x1800A8204
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800E5578 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x1800A8EC4 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?HasInteraction@CVisual@@QEBA_NXZ @ 0x1800A8F10 (-HasInteraction@CVisual@@QEBA_NXZ.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1800A8F6C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 */

void __fastcall CManipulationContext::PropagateVisualManipulationNotificationFlag(
        struct CVisual **a1,
        char a2,
        __int64 a3,
        unsigned int a4)
{
  struct CVisual *v6; // rbx
  struct CVisual *v7; // rdi
  char v8; // al
  struct CVisual **v9; // rdx
  struct CVisual *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v10 = (struct CVisual *)a1;
    v6 = (struct CVisual *)a1;
    if ( a2 )
    {
      do
      {
        v8 = *((_BYTE *)v6 + 101);
        if ( (v8 & 0x10) != 0 )
          break;
        *((_BYTE *)v6 + 101) = v8 | 0x10;
        v6 = a1[11];
        a1 = (struct CVisual **)v6;
      }
      while ( v6 );
    }
    else
    {
      v7 = (struct CVisual *)a1;
      do
      {
        if ( (*((_BYTE *)v7 + 101) & 0x10) == 0
          || CManipulationContext::VisualHasActiveInteraction(v6, a4)
          || CManipulationContext::VisualHasAnyChildFlagged(v6) )
        {
          break;
        }
        *((_BYTE *)v7 + 101) &= ~0x10u;
        if ( CVisual::HasInteraction(v6) )
        {
          v9 = *(struct CVisual ***)(a3 + 8);
          if ( v9 == *(struct CVisual ***)(a3 + 16) )
          {
            std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
              a3,
              v9,
              &v10);
          }
          else
          {
            *v9 = v6;
            *(_QWORD *)(a3 + 8) += 8LL;
          }
        }
        v7 = (struct CVisual *)*((_QWORD *)v6 + 11);
        v6 = v7;
        v10 = v7;
      }
      while ( v7 );
    }
  }
}
