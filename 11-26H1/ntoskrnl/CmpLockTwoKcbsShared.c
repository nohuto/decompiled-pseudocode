/*
 * XREFs of CmpLockTwoKcbsShared @ 0x140940A90
 * Callers:
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140B0144C (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 */

void __fastcall CmpLockTwoKcbsShared(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int16 v3; // ax
  __int16 v4; // cx
  __int16 v5; // ax

  v2 = a1;
  if ( a1 )
  {
    if ( !a2 )
      goto LABEL_4;
    if ( a1 == a2 )
    {
LABEL_11:
      CmpLockKcbShared(v2);
      return;
    }
    v3 = *(_WORD *)(a2 + 12);
    if ( *(_WORD *)(a1 + 12) <= v3 )
    {
      if ( *(_WORD *)(a1 + 12) < v3 )
      {
LABEL_10:
        v2 = a2;
        CmpLockKcbShared(a1);
        goto LABEL_11;
      }
      v4 = *(_WORD *)(a1 + 186);
      if ( (v4 & 4) == 0 || (*(_DWORD *)(a2 + 184) & 0x20000) == 0 )
      {
        if ( (v4 & 2) != 0 && (*(_DWORD *)(a2 + 184) & 0x40000) != 0
          || (v5 = *(_WORD *)(a2 + 66), *(__int16 *)(v2 + 66) <= v5) && (*(__int16 *)(v2 + 66) < v5 || v2 <= a2) )
        {
          a1 = v2;
          goto LABEL_10;
        }
      }
    }
    CmpLockKcbShared(a2);
    CmpLockKcbShared(v2);
    return;
  }
  if ( !a2 )
    return;
  a1 = a2;
LABEL_4:
  CmpLockKcbShared(a1);
}
