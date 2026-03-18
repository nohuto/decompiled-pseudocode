/*
 * XREFs of ?GetProperty@CInteraction@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801DE770
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801BBCD0 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  char RailsEnabled; // bl
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 13;
  if ( v4 )
  {
    if ( v4 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  RailsEnabled = CInteractionProcessor::GetRailsEnabled(a1 + 360, v5);
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 17;
  result = 0LL;
  *(_BYTE *)a3 = RailsEnabled;
  return result;
}
