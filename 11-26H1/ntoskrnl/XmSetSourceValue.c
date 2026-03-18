/*
 * XREFs of XmSetSourceValue @ 0x1404A8BDC
 * Callers:
 *     XmPopStack @ 0x1404A79D8 (XmPopStack.c)
 *     XmFlagsRegister @ 0x1404A7CA0 (XmFlagsRegister.c)
 *     XmOpcodeRegister @ 0x1404A7CE0 (XmOpcodeRegister.c)
 *     XmStosOp @ 0x1404A7D70 (XmStosOp.c)
 *     XmGroup45General @ 0x1404A7EB0 (XmGroup45General.c)
 *     XmOutOp @ 0x1404A8000 (XmOutOp.c)
 *     XmMoveGeneral @ 0x1404A8520 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1404A8590 (XmGroup1General.c)
 *     XmAccumRegister @ 0x1405ABEE0 (XmAccumRegister.c)
 *     XmBitScanGeneral @ 0x1405ABF30 (XmBitScanGeneral.c)
 *     XmGeneralBitOffset @ 0x1405AC040 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1405AC0F0 (XmGeneralRegister.c)
 *     XmGroup3General @ 0x1405AC230 (XmGroup3General.c)
 *     XmLoadSegment @ 0x1405AC500 (XmLoadSegment.c)
 *     XmMoveSegment @ 0x1405AC620 (XmMoveSegment.c)
 *     XmMoveXxGeneral @ 0x1405AC690 (XmMoveXxGeneral.c)
 *     XmPushPopSegment @ 0x1405AC810 (XmPushPopSegment.c)
 *     XmSegmentOffset @ 0x1405AC850 (XmSegmentOffset.c)
 *     XmShiftDouble @ 0x1405AC910 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1405AC9C0 (XmXlatOpcode.c)
 *     XmPushaOp @ 0x1405AD5C0 (XmPushaOp.c)
 *     XmOutsOp @ 0x1405AD780 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1405ADAD0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1405ADCE0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1405ADD60 (XmMovsOp.c)
 *     XmScasOp @ 0x1405ADDF0 (XmScasOp.c)
 *     XmBoundOp @ 0x1405AE0D0 (XmBoundOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetSourceValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 96) = a2;
  if ( v2 )
  {
    if ( v2 == 1 )
      result = *a2;
    else
      result = *(unsigned int *)a2;
  }
  else
  {
    result = *(unsigned __int8 *)a2;
  }
  *(_DWORD *)(a1 + 108) = result;
  return result;
}
