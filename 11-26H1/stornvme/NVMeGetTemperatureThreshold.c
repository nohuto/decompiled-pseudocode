/*
 * XREFs of NVMeGetTemperatureThreshold @ 0x14000DFE0
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeGetTemperatureThreshold(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(a1 + 220) = -1;
    LocalCommandReuse(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v4 = *(_QWORD *)(a1 + 1104);
    *(_BYTE *)(v4 + 4096) = 10;
    *(_BYTE *)(v4 + 4136) = 4;
    *(_DWORD *)(v4 + 4140) &= 0xFFC0FFFF;
    *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 1016);
    return WaitForCommandComplete(a1, a1 + 1016, a2);
  }
  return result;
}
