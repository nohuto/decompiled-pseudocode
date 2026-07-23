/*
 * XREFs of XmSetSourceValue @ 0x1404A226C
 * Callers:
 *     XmPopStack @ 0x1404A1068 (XmPopStack.c)
 *     XmFlagsRegister @ 0x1404A1330 (XmFlagsRegister.c)
 *     XmOpcodeRegister @ 0x1404A1370 (XmOpcodeRegister.c)
 *     XmStosOp @ 0x1404A1400 (XmStosOp.c)
 *     XmGroup45General @ 0x1404A1540 (XmGroup45General.c)
 *     XmOutOp @ 0x1404A1690 (XmOutOp.c)
 *     XmMoveGeneral @ 0x1404A1BB0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1404A1C20 (XmGroup1General.c)
 *     XmAccumRegister @ 0x1405AE6F0 (XmAccumRegister.c)
 *     XmBitScanGeneral @ 0x1405AE740 (XmBitScanGeneral.c)
 *     XmGeneralBitOffset @ 0x1405AE850 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1405AE900 (XmGeneralRegister.c)
 *     XmGroup3General @ 0x1405AEA40 (XmGroup3General.c)
 *     XmLoadSegment @ 0x1405AED10 (XmLoadSegment.c)
 *     XmMoveSegment @ 0x1405AEE30 (XmMoveSegment.c)
 *     XmMoveXxGeneral @ 0x1405AEEA0 (XmMoveXxGeneral.c)
 *     XmPushPopSegment @ 0x1405AF020 (XmPushPopSegment.c)
 *     XmSegmentOffset @ 0x1405AF060 (XmSegmentOffset.c)
 *     XmShiftDouble @ 0x1405AF120 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1405AF1D0 (XmXlatOpcode.c)
 *     XmPushaOp @ 0x1405AFDD0 (XmPushaOp.c)
 *     XmOutsOp @ 0x1405AFF90 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1405B02E0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1405B04F0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1405B0570 (XmMovsOp.c)
 *     XmScasOp @ 0x1405B0600 (XmScasOp.c)
 *     XmBoundOp @ 0x1405B08E0 (XmBoundOp.c)
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
