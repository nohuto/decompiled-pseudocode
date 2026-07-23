/*
 * XREFs of PoDestroyReasonContext @ 0x140503E30
 * Callers:
 *     ExpDeleteTimer @ 0x1403B60F0 (ExpDeleteTimer.c)
 *     NtSetTimerEx @ 0x1404253F0 (NtSetTimerEx.c)
 *     PoRegisterSystemState @ 0x140425810 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140425ADC (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x140425BE0 (PoCreatePowerRequest.c)
 *     NtSetTimer @ 0x140425C90 (NtSetTimer.c)
 *     ExpSetTimerObject @ 0x1406D2DD8 (ExpSetTimerObject.c)
 *     NtCancelTimer @ 0x1406D37B0 (NtCancelTimer.c)
 *     PoCreatePowerLimitRequest @ 0x1407CD340 (PoCreatePowerLimitRequest.c)
 *     PoSetPowerLimitValue @ 0x1407CD610 (PoSetPowerLimitValue.c)
 *     PopFreePowerLimitRequest @ 0x1407CDE7C (PopFreePowerLimitRequest.c)
 *     PoCreateThermalRequest @ 0x1407CE5F0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1407CE710 (PoDeleteThermalRequest.c)
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 *     NtInitiatePowerAction @ 0x1409F2FC0 (NtInitiatePowerAction.c)
 *     PopPowerRequestDelete @ 0x140AD30B0 (PopPowerRequestDelete.c)
 *     NtSetSystemPowerState @ 0x140C032E0 (NtSetSystemPowerState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140CD5E40 (PopInitializeHighPerfPowerRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140D11CE4 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
