/*
 * XREFs of XmSetDestinationValue @ 0x14046AA9C
 * Callers:
 *     XmGroup2ByByte @ 0x140469BD0 (XmGroup2ByByte.c)
 *     XmFlagsRegister @ 0x140469E30 (XmFlagsRegister.c)
 *     XmOpcodeRegister @ 0x140469E70 (XmOpcodeRegister.c)
 *     XmGroup45General @ 0x14046A030 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x14046A0D0 (XmGroup1Immediate.c)
 *     XmGroup1General @ 0x14046A710 (XmGroup1General.c)
 *     XmAccumImmediate @ 0x14046AA10 (XmAccumImmediate.c)
 *     XmAccumRegister @ 0x140571AB0 (XmAccumRegister.c)
 *     XmGeneralBitOffset @ 0x140571C10 (XmGeneralBitOffset.c)
 *     XmGroup2By1 @ 0x140571D40 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x140571DA0 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x140571E00 (XmGroup3General.c)
 *     XmGroup7General @ 0x140571EA0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x140571F00 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x140572050 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1405720D0 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x140572360 (XmPopGeneral.c)
 *     XmPushPopSegment @ 0x140572430 (XmPushPopSegment.c)
 *     XmShiftDouble @ 0x140572520 (XmShiftDouble.c)
 *     XmPopaOp @ 0x140573160 (XmPopaOp.c)
 *     XmCmpsOp @ 0x1405736E0 (XmCmpsOp.c)
 *     XmScasOp @ 0x140573A10 (XmScasOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetDestinationValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 88) = a2;
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
  *(_DWORD *)(a1 + 104) = result;
  return result;
}
