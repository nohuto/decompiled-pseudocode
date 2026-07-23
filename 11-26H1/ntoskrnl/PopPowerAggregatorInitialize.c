/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140D11CE4
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     KeInitializeIRTimer @ 0x14044E4C8 (KeInitializeIRTimer.c)
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopBSDiagSetTriageData @ 0x1407E0B90 (PopBSDiagSetTriageData.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 */

__int64 __fastcall PopPowerAggregatorInitialize(int a1)
{
  char *v1; // rdi
  __int64 v2; // r15
  char *v3; // r14
  char *v4; // r12
  __int64 v5; // rsi
  int Common; // edi
  struct _KLOCK_ENTRIES *v7; // r9
  _DWORD Src[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  __int128 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+B0h] [rbp+40h] BYREF
  int Buffer; // [rsp+B8h] [rbp+48h] BYREF
  int v14; // [rsp+C0h] [rbp+50h] BYREF
  PVOID P; // [rsp+C8h] [rbp+58h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    qword_140F0D8A8 = 0LL;
    PopPowerAggregatorLock = 0LL;
    PopPowerAggregatorUmpoInitialized = 0;
    memset_0(PopPowerAggregatorContext, 0, 0x15F8uLL);
    DWORD2(xmmword_140F0D8D0) = 1;
    qword_140F0EEA0 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140F0D8F8) = 0;
    stru_140F0D920.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140F0EEA8 = 0LL;
    qword_140F0EE90 = 0LL;
    stru_140F0D920.Parameter = 0LL;
    stru_140F0D920.List.Flink = 0LL;
    word_140F0D942 = 0;
    KiInitializeTimer2((unsigned __int64)&unk_140F0D940, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    word_140F0D9C8 = 0;
    qword_140F0D9D8 = (__int64)&qword_140F0D9D0;
    qword_140F0D9D0 = (__int64)&qword_140F0D9D0;
    v1 = (char *)&unk_140F0DAAA;
    v2 = 2LL;
    byte_140F0D9CA = 6;
    dword_140F0D9CC = 0;
    v3 = (char *)&unk_140F0DA18;
    v12 = 131080;
    v4 = (char *)&unk_140F0DAB0;
    v5 = 0LL;
    do
    {
      KeInitializeIRTimer((__int64)v3, (__int64)PopPowerAggregatorDozeTimerCallback, v5, (unsigned __int16 *)&v12, 2);
      *(_QWORD *)(v1 - 154) = v5;
      *(_QWORD *)(v1 - 162) = PopPowerAggregatorDozeTimerWorker;
      ++v5;
      *(_QWORD *)(v1 + 14) = v4;
      *(_QWORD *)(v1 + 6) = v1 + 6;
      *(_QWORD *)(v1 - 178) = 0LL;
      *((_WORD *)v1 - 1) = 0;
      v3 += 200;
      *v1 = 6;
      v4 += 200;
      *(_DWORD *)(v1 + 2) = 1;
      v1 += 200;
      --v2;
    }
    while ( v2 );
    return 0;
  }
  if ( a1 != 1 )
  {
    if ( a1 == 3 )
    {
      Buffer = 1;
      ZwUpdateWnfStateData(&WNF_PO_BLUETOOTH_STANDBY_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
      v14 = 1;
      ZwUpdateWnfStateData(&WNF_PO_STANDBY_AUDIO_POLICY, &v14, 4u, 0LL, 0LL, 0, 0);
      PopBSDiagSetTriageData(1, (__int64)PopPowerAggregatorContext, 5624LL, v7);
    }
    return 0;
  }
  Src[1] = 1;
  Src[0] = 0;
  DestinationString = 0LL;
  v11 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Sleep Idle State Disabled");
  Common = PoCaptureReasonContext(Src, 0LL, 0LL, 1, 0LL, &P);
  if ( Common >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, 1, &PopPowerAggregatorIdleDisabledPowerRequest);
    if ( Common >= 0 )
    {
      Common = PoRegisterPowerSettingCallback(
                 0LL,
                 &GUID_LIDCLOSE_ACTION,
                 (PPOWER_SETTING_CALLBACK)PopPowerAggregatorPowerSettingCallback,
                 0LL,
                 0LL);
      if ( Common >= 0 )
        return 0;
    }
    else
    {
      PoDestroyReasonContext(P);
    }
  }
  return (unsigned int)Common;
}
