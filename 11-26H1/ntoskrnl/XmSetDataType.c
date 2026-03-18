/*
 * XREFs of XmSetDataType @ 0x1404A8920
 * Callers:
 *     XmGroup2ByByte @ 0x1404A7A30 (XmGroup2ByByte.c)
 *     XmGroup45General @ 0x1404A7EB0 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x1404A7F50 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1404A8520 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1404A8590 (XmGroup1General.c)
 *     XmPortDX @ 0x1404A8840 (XmPortDX.c)
 *     XmAccumImmediate @ 0x1404A88C0 (XmAccumImmediate.c)
 *     XmGroup2By1 @ 0x1405AC170 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x1405AC1D0 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x1405AC230 (XmGroup3General.c)
 *     XmMoveImmediate @ 0x1405AC5D0 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x1405AC790 (XmPortImmediate.c)
 *     XmSegmentOffset @ 0x1405AC850 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1405AC9A0 (XmStringOperands.c)
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
