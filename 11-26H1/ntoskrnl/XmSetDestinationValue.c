/*
 * XREFs of XmSetDestinationValue @ 0x1404A1FE0
 * Callers:
 *     XmGroup2ByByte @ 0x1404A10C0 (XmGroup2ByByte.c)
 *     XmFlagsRegister @ 0x1404A1330 (XmFlagsRegister.c)
 *     XmOpcodeRegister @ 0x1404A1370 (XmOpcodeRegister.c)
 *     XmGroup45General @ 0x1404A1540 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x1404A15E0 (XmGroup1Immediate.c)
 *     XmGroup1General @ 0x1404A1C20 (XmGroup1General.c)
 *     XmAccumImmediate @ 0x1404A1F50 (XmAccumImmediate.c)
 *     XmAccumRegister @ 0x1405AE6F0 (XmAccumRegister.c)
 *     XmGeneralBitOffset @ 0x1405AE850 (XmGeneralBitOffset.c)
 *     XmGroup2By1 @ 0x1405AE980 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x1405AE9E0 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x1405AEA40 (XmGroup3General.c)
 *     XmGroup7General @ 0x1405AEAE0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1405AEB40 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1405AEC90 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1405AED10 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1405AEF50 (XmPopGeneral.c)
 *     XmPushPopSegment @ 0x1405AF020 (XmPushPopSegment.c)
 *     XmShiftDouble @ 0x1405AF120 (XmShiftDouble.c)
 *     XmPopaOp @ 0x1405AFD60 (XmPopaOp.c)
 *     XmCmpsOp @ 0x1405B02E0 (XmCmpsOp.c)
 *     XmScasOp @ 0x1405B0600 (XmScasOp.c)
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
