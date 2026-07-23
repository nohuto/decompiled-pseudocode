/*
 * XREFs of CmpUnlockTwoKcbs @ 0x1409409F0
 * Callers:
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140B0144C (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 */

void __fastcall CmpUnlockTwoKcbs(_WORD *BugCheckParameter2, _WORD *a2)
{
  unsigned __int16 v2; // ax
  ULONG_PTR v3; // rbx
  __int16 v4; // r8
  __int16 v5; // ax

  if ( !BugCheckParameter2 )
  {
    if ( !a2 )
      return;
    BugCheckParameter2 = a2;
    goto LABEL_4;
  }
  if ( !a2 || BugCheckParameter2 == a2 )
  {
LABEL_4:
    CmpUnlockKcb((ULONG_PTR)BugCheckParameter2);
    return;
  }
  v2 = a2[6];
  if ( BugCheckParameter2[6] > v2
    || BugCheckParameter2[6] >= v2
    && ((v4 = BugCheckParameter2[93], (v4 & 4) != 0) && (*((_DWORD *)a2 + 46) & 0x20000) != 0
     || ((v4 & 2) == 0 || (*((_DWORD *)a2 + 46) & 0x40000) == 0)
     && ((v5 = a2[33], (__int16)BugCheckParameter2[33] > v5)
      || (__int16)BugCheckParameter2[33] >= v5 && BugCheckParameter2 > a2)) )
  {
    v3 = (ULONG_PTR)a2;
  }
  else
  {
    v3 = (ULONG_PTR)BugCheckParameter2;
    BugCheckParameter2 = a2;
  }
  CmpUnlockKcb((ULONG_PTR)BugCheckParameter2);
  CmpUnlockKcb(v3);
}
