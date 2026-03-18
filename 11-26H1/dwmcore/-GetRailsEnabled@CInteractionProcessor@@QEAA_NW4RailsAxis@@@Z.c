/*
 * XREFs of ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801BBCD0
 * Callers:
 *     ?SetProperty@CInteraction@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801D4DF0 (-SetProperty@CInteraction@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@.c)
 *     ?GetProperty@CInteraction@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801DE770 (-GetProperty@CInteraction@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionProcessor::GetRailsEnabled(__int64 a1, int a2)
{
  char v2; // al
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v2 = *(_BYTE *)(a1 + 148) >> 5;
  }
  else
  {
    v2 = *(_BYTE *)(a1 + 148) >> 4;
  }
  return v2 & 1;
}
