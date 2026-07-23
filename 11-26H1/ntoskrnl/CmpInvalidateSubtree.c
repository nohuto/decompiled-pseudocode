/*
 * XREFs of CmpInvalidateSubtree @ 0x140B494F4
 * Callers:
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140865030 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x1408B5C5C (CmpEnumerateAllOpenSubKeys.c)
 */

__int64 __fastcall CmpInvalidateSubtree(__int64 a1, int a2, int a3, __int64 a4, unsigned int *a5)
{
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v6 = a2;
  v8 = a3;
  v10 = a4;
  v7 = 0;
  v9 = 0;
  result = CmpEnumerateAllOpenSubKeys(a1, a3 & 1, (__int64)CmpInvalidateSubtreeWorker, (__int64)&v6);
  if ( a5 )
  {
    result = v7;
    *a5 = v7;
  }
  return result;
}
