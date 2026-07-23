/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x1402F0200
 * Callers:
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiInvalidateCollidedIos @ 0x1402F1414 (MiInvalidateCollidedIos.c)
 *     MiSwapHardFaultPage @ 0x14031ED1C (MiSwapHardFaultPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r9
  unsigned __int64 result; // rax

  if ( qword_140E2D8C0 )
  {
    v2 = a1;
    v3 = a1 & qword_140E2D8C8;
    a1 &= ~0x10uLL;
    if ( (v2 & 0x10) == 0 )
      a1 = v3;
  }
  result = (a2 << 12) ^ (a1 ^ (a2 << 12)) & 0xFFF0000000000FFFuLL;
  if ( qword_140E2D8C0 )
  {
    if ( (result & qword_140E2D8C0) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D8C0;
  }
  return result;
}
