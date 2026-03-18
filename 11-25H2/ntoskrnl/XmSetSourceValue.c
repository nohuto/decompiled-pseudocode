/*
 * XREFs of XmSetSourceValue @ 0x14046AD58
 * Callers:
 *     XmPopStack @ 0x140469B38 (XmPopStack.c)
 *     XmFlagsRegister @ 0x140469E30 (XmFlagsRegister.c)
 *     XmOpcodeRegister @ 0x140469E70 (XmOpcodeRegister.c)
 *     XmStosOp @ 0x140469F00 (XmStosOp.c)
 *     XmGroup45General @ 0x14046A030 (XmGroup45General.c)
 *     XmOutOp @ 0x14046A360 (XmOutOp.c)
 *     XmMoveGeneral @ 0x14046A6A0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x14046A710 (XmGroup1General.c)
 *     XmAccumRegister @ 0x140571AB0 (XmAccumRegister.c)
 *     XmBitScanGeneral @ 0x140571B00 (XmBitScanGeneral.c)
 *     XmGeneralBitOffset @ 0x140571C10 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140571CC0 (XmGeneralRegister.c)
 *     XmGroup3General @ 0x140571E00 (XmGroup3General.c)
 *     XmLoadSegment @ 0x1405720D0 (XmLoadSegment.c)
 *     XmMoveSegment @ 0x140572240 (XmMoveSegment.c)
 *     XmMoveXxGeneral @ 0x1405722B0 (XmMoveXxGeneral.c)
 *     XmPushPopSegment @ 0x140572430 (XmPushPopSegment.c)
 *     XmSegmentOffset @ 0x140572470 (XmSegmentOffset.c)
 *     XmShiftDouble @ 0x140572520 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1405725C0 (XmXlatOpcode.c)
 *     XmPushaOp @ 0x1405731D0 (XmPushaOp.c)
 *     XmOutsOp @ 0x140573390 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1405736E0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140573900 (XmLodsOp.c)
 *     XmMovsOp @ 0x140573980 (XmMovsOp.c)
 *     XmScasOp @ 0x140573A10 (XmScasOp.c)
 *     XmBoundOp @ 0x140573CF0 (XmBoundOp.c)
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
