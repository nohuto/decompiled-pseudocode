/*
 * XREFs of MiCopyOnWriteCombineCloneDereference @ 0x14036ACB0
 * Callers:
 *     MiDiscardPtePrototype @ 0x1405248A4 (MiDiscardPtePrototype.c)
 * Callees:
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiDecrementCombinedPteEx @ 0x14036A1BC (MiDecrementCombinedPteEx.c)
 *     MiLocateCloneAddress @ 0x14036BA4C (MiLocateCloneAddress.c)
 *     MiDecrementCloneBlockReference @ 0x1404AFB30 (MiDecrementCloneBlockReference.c)
 */

ULONG_PTR __fastcall MiCopyOnWriteCombineCloneDereference(ULONG_PTR BugCheckParameter3, char a2, ULONG *a3, __int64 a4)
{
  ULONG_PTR result; // rax

  if ( (a2 & 1) != 0 )
  {
    result = MiDecrementCombinedPteEx(a4, BugCheckParameter3, 0);
    goto LABEL_6;
  }
  result = *(unsigned int *)(a4 + 184);
  if ( (result & 0xF) == 0 )
  {
    result = MiLocateCloneAddress(a4 - 1024, BugCheckParameter3);
    if ( result )
    {
      result = MiDecrementCloneBlockReference(result, BugCheckParameter3);
LABEL_6:
      if ( (_DWORD)result == 3 )
        return MiChargeCommit(a3, 1uLL, 4u);
    }
  }
  return result;
}
