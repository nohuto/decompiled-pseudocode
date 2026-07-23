/*
 * XREFs of XmSetDataType @ 0x1404A1FB0
 * Callers:
 *     XmGroup2ByByte @ 0x1404A10C0 (XmGroup2ByByte.c)
 *     XmGroup45General @ 0x1404A1540 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x1404A15E0 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1404A1BB0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1404A1C20 (XmGroup1General.c)
 *     XmPortDX @ 0x1404A1ED0 (XmPortDX.c)
 *     XmAccumImmediate @ 0x1404A1F50 (XmAccumImmediate.c)
 *     XmGroup2By1 @ 0x1405AE980 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x1405AE9E0 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x1405AEA40 (XmGroup3General.c)
 *     XmMoveImmediate @ 0x1405AEDE0 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x1405AEFA0 (XmPortImmediate.c)
 *     XmSegmentOffset @ 0x1405AF060 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1405AF1B0 (XmStringOperands.c)
 * Callees:
 *     <none>
 */

char __fastcall XmSetDataType(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 112);
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = -*(_BYTE *)(a1 + 138);
    *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 0;
  }
  return v1;
}
