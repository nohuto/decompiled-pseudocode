/*
 * XREFs of XmSetDataType @ 0x14046AA70
 * Callers:
 *     XmGroup2ByByte @ 0x140469BD0 (XmGroup2ByByte.c)
 *     XmGroup45General @ 0x14046A030 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x14046A0D0 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x14046A6A0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x14046A710 (XmGroup1General.c)
 *     XmPortDX @ 0x14046A990 (XmPortDX.c)
 *     XmAccumImmediate @ 0x14046AA10 (XmAccumImmediate.c)
 *     XmGroup2By1 @ 0x140571D40 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x140571DA0 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x140571E00 (XmGroup3General.c)
 *     XmMoveImmediate @ 0x1405721F0 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x1405723B0 (XmPortImmediate.c)
 *     XmSegmentOffset @ 0x140572470 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1405725A0 (XmStringOperands.c)
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
