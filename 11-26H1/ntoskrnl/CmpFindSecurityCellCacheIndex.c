/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x14046BB10
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E6D20 (CmpRebuildKcbCacheFromNode.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpAddSecurityCellToCache @ 0x1409C96E0 (CmpAddSecurityCellToCache.c)
 *     CmpCheckKey @ 0x140A1E430 (CmpCheckKey.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A408DC (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpAssignSecurityToKcb @ 0x140A683D0 (CmpAssignSecurityToKcb.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140ABAA1C (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140AE38D8 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpRemoveFromSecurityCache @ 0x140B02F74 (CmpRemoveFromSecurityCache.c)
 *     CmpResetCachedSecurity @ 0x140B48144 (CmpResetCachedSecurity.c)
 *     CmpSyncKeyValues @ 0x140B65AF8 (CmpSyncKeyValues.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x140A52510 (RtlFindLowerBoundInSortedArray.c)
 */

char __fastcall CmpFindSecurityCellCacheIndex(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v5; // r8
  char result; // al
  _DWORD *LowerBoundInSortedArray; // rax
  unsigned __int64 v8; // rdx
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  if ( *(_DWORD *)(a1 + 1880) )
  {
    v5 = *(int *)(a1 + 1888);
    if ( (int)v5 >= 0
      && (unsigned int)v5 < *(_DWORD *)(a1 + 1880)
      && *(_DWORD *)(*(_QWORD *)(a1 + 1896) + 16 * v5) == v9 )
    {
      *a3 = v5;
      return 1;
    }
    LowerBoundInSortedArray = (_DWORD *)RtlFindLowerBoundInSortedArray(
                                          (unsigned int)&v9,
                                          *(_QWORD *)(a1 + 1896),
                                          *(_DWORD *)(a1 + 1880),
                                          16,
                                          (__int64)CmpSearchSecurityCellCache);
    v8 = ((unsigned __int64)LowerBoundInSortedArray - *(_QWORD *)(a1 + 1896)) >> 4;
    if ( (unsigned int)v8 < *(_DWORD *)(a1 + 1880) && *LowerBoundInSortedArray == v9 )
    {
      *(_DWORD *)(a1 + 1888) = v8;
      result = 1;
      *a3 = v8;
      return result;
    }
    *a3 = v8;
  }
  else
  {
    *a3 = 0;
  }
  return 0;
}
