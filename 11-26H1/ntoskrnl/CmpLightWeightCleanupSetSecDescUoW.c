/*
 * XREFs of CmpLightWeightCleanupSetSecDescUoW @ 0x140AE5C70
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x14085BE94 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140AE5844 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140AE5B18 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1404C83A0 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLightWeightCleanupSetSecDescUoW(_QWORD *P)
{
  if ( *(_DWORD *)P != -1 )
    CmpDereferenceSecurityNode(P[1], *(_DWORD *)P);
  ExFreePoolWithTag(P, 0x77554D43u);
}
