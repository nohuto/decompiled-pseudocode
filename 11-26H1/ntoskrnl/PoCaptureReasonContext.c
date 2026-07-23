/*
 * XREFs of PoCaptureReasonContext @ 0x140425E58
 * Callers:
 *     NtSetTimerEx @ 0x1404253F0 (NtSetTimerEx.c)
 *     PoRegisterSystemState @ 0x140425810 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140425ADC (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x140425BE0 (PoCreatePowerRequest.c)
 *     NtSetTimer @ 0x140425C90 (NtSetTimer.c)
 *     PoCreatePowerLimitRequest @ 0x1407CD340 (PoCreatePowerLimitRequest.c)
 *     PoSetPowerLimitValue @ 0x1407CD610 (PoSetPowerLimitValue.c)
 *     PoCreateThermalRequest @ 0x1407CE5F0 (PoCreateThermalRequest.c)
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 *     NtInitiatePowerAction @ 0x1409F2FC0 (NtInitiatePowerAction.c)
 *     NtSetSystemPowerState @ 0x140C032E0 (NtSetSystemPowerState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140CD5E40 (PopInitializeHighPerfPowerRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140D11CE4 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PopCaptureReasonContext @ 0x1404279AC (PopCaptureReasonContext.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     PoGetRequester @ 0x140603108 (PoGetRequester.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoCaptureReasonContext(_OWORD *Src, __int64 a2, __int64 a3, char a4, __int64 a5, PVOID *a6)
{
  char v7; // si
  _OWORD *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rcx
  int Requester; // edi
  _OWORD v12[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v7 = a2;
  v8 = Src;
  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  *a6 = 0LL;
  if ( Src && (_BYTE)a2 )
  {
    if ( !a4 )
    {
      ProbeForRead(Src, 0x28uLL, 4u);
      RtlCopyFromUser(v12, v8, 0x28uLL);
      v8 = v12;
    }
    LOBYTE(a2) = v7;
    result = PopCaptureReasonContext(v8, a2, a5, a6);
  }
  else
  {
    result = PopCaptureReasonContext(Src, a2, a5, a6);
  }
  if ( (int)result >= 0 )
  {
    LOBYTE(v10) = v7;
    Requester = PoGetRequester(v10, a3, *a6);
    if ( Requester < 0 )
    {
      if ( *a6 )
      {
        ExFreePoolWithTag(*a6, 0x78435250u);
        *a6 = 0LL;
      }
    }
    return (unsigned int)Requester;
  }
  return result;
}
