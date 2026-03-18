/*
 * XREFs of PoDestroyReasonContext @ 0x14050A3C0
 * Callers:
 *     ExpDeleteTimer @ 0x1403AC3E0 (ExpDeleteTimer.c)
 *     NtSetTimerEx @ 0x140436460 (NtSetTimerEx.c)
 *     PoRegisterSystemState @ 0x140436880 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140436B4C (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x140436C50 (PoCreatePowerRequest.c)
 *     NtSetTimer @ 0x140436D00 (NtSetTimer.c)
 *     ExpSetTimerObject @ 0x1406CEDA8 (ExpSetTimerObject.c)
 *     NtCancelTimer @ 0x1406CF780 (NtCancelTimer.c)
 *     PoCreatePowerLimitRequest @ 0x1407CA2A0 (PoCreatePowerLimitRequest.c)
 *     PoSetPowerLimitValue @ 0x1407CA570 (PoSetPowerLimitValue.c)
 *     PopFreePowerLimitRequest @ 0x1407CADDC (PopFreePowerLimitRequest.c)
 *     PoCreateThermalRequest @ 0x1407CB550 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1407CB670 (PoDeleteThermalRequest.c)
 *     NtSetThreadExecutionState @ 0x1407D2150 (NtSetThreadExecutionState.c)
 *     NtInitiatePowerAction @ 0x140A37400 (NtInitiatePowerAction.c)
 *     PopPowerRequestDelete @ 0x140AD6100 (PopPowerRequestDelete.c)
 *     NtSetSystemPowerState @ 0x140BFD2E0 (NtSetSystemPowerState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140CCFC98 (PopInitializeHighPerfPowerRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140D0B4DC (PopPowerAggregatorInitialize.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_DWORD *)P )
    goto LABEL_5;
  v2 = (void *)P[1];
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x67446F50u);
  if ( *(_DWORD *)P )
  {
LABEL_5:
    v3 = (void *)P[2];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x78435250u);
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
