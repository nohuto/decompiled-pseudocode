/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x140472390
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408BE6F8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpCopyKeyPartial @ 0x1408DDBFC (CmpCopyKeyPartial.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E0760 (CmpRebuildKcbCacheFromNode.c)
 *     CmpAddSecurityCellToCache @ 0x14094DD90 (CmpAddSecurityCellToCache.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpCheckKey @ 0x140A08360 (CmpCheckKey.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A2EA50 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpAssignSecurityToKcb @ 0x140A5B410 (CmpAssignSecurityToKcb.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140AB95FC (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140AE5B18 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpRemoveFromSecurityCache @ 0x140B01244 (CmpRemoveFromSecurityCache.c)
 *     CmpResetCachedSecurity @ 0x140B46114 (CmpResetCachedSecurity.c)
 *     CmpSyncKeyValues @ 0x140B62A58 (CmpSyncKeyValues.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x140A49220 (RtlFindLowerBoundInSortedArray.c)
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
