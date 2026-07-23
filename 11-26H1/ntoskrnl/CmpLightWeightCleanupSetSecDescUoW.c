/*
 * XREFs of CmpLightWeightCleanupSetSecDescUoW @ 0x140AE3A30
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x140862184 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140AE3604 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140AE38D8 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1404C20E0 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLightWeightCleanupSetSecDescUoW(_QWORD *P)
{
  if ( *(_DWORD *)P != -1 )
    CmpDereferenceSecurityNode(P[1], *(_DWORD *)P);
  ExFreePoolWithTag(P, 0x77554D43u);
}
