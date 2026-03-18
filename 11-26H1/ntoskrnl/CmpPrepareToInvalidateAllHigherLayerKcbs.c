/*
 * XREFs of CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x14085EEFC
 * Callers:
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A2E434 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpPrepareToInvalidateAllHigherLayerKcbs(__int64 a1, int a2, __int64 a3)
{
  int v3; // eax
  __int128 v5; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v6[2]; // [rsp+50h] [rbp-28h] BYREF
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v6[1] = a3;
  v7 = a2;
  v6[0] = 0LL;
  v8 = 0;
  v5 = 0LL;
  CmpInitializeDelayDerefContext(&v5);
  CmpEnumerateAllHigherLayerKcbs(
    v3,
    (unsigned int)CmpPrepareToInvalidateAllHigherLayerKcbsPreCallback,
    (unsigned int)CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
    (unsigned int)&v5,
    (__int64)v6,
    1,
    1);
  CmpDrainDelayDerefContext((_QWORD **)&v5);
  return LODWORD(v6[0]);
}
