/*
 * XREFs of CmpInvalidateAllHigherLayerKcbs @ 0x140864FF0
 * Callers:
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A402C0 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbs(int a1, int a2, int a3, int a4)
{
  _DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int)CmpPrepareToInvalidateAllHigherLayerKcbsPreCallback,
           (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
           a4,
           (__int64)v5,
           1,
           1);
}
