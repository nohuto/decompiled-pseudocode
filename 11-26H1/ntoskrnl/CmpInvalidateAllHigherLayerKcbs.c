/*
 * XREFs of CmpInvalidateAllHigherLayerKcbs @ 0x14085ED00
 * Callers:
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A2E434 (CmpEnumerateAllHigherLayerKcbs.c)
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
