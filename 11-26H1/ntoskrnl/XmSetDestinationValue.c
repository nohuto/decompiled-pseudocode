/*
 * XREFs of XmSetDestinationValue @ 0x1404A8950
 * Callers:
 *     XmGroup2ByByte @ 0x1404A7A30 (XmGroup2ByByte.c)
 *     XmFlagsRegister @ 0x1404A7CA0 (XmFlagsRegister.c)
 *     XmOpcodeRegister @ 0x1404A7CE0 (XmOpcodeRegister.c)
 *     XmGroup45General @ 0x1404A7EB0 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x1404A7F50 (XmGroup1Immediate.c)
 *     XmGroup1General @ 0x1404A8590 (XmGroup1General.c)
 *     XmAccumImmediate @ 0x1404A88C0 (XmAccumImmediate.c)
 *     XmAccumRegister @ 0x1405ABEE0 (XmAccumRegister.c)
 *     XmGeneralBitOffset @ 0x1405AC040 (XmGeneralBitOffset.c)
 *     XmGroup2By1 @ 0x1405AC170 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x1405AC1D0 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x1405AC230 (XmGroup3General.c)
 *     XmGroup7General @ 0x1405AC2D0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1405AC330 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1405AC480 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1405AC500 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1405AC740 (XmPopGeneral.c)
 *     XmPushPopSegment @ 0x1405AC810 (XmPushPopSegment.c)
 *     XmShiftDouble @ 0x1405AC910 (XmShiftDouble.c)
 *     XmPopaOp @ 0x1405AD550 (XmPopaOp.c)
 *     XmCmpsOp @ 0x1405ADAD0 (XmCmpsOp.c)
 *     XmScasOp @ 0x1405ADDF0 (XmScasOp.c)
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
