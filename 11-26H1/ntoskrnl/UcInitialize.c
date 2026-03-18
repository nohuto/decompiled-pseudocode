/*
 * XREFs of UcInitialize @ 0x140712834
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     UcpLogUnexpectedCodePathEvent @ 0x140712E1C (UcpLogUnexpectedCodePathEvent.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall UcInitialize(int a1)
{
  unsigned int v1; // ebx
  KIRQL v2; // al
  __int64 v3; // rdi
  KIRQL v4; // si
  __int64 v5; // rdx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 259;
  if ( a1 == 2 )
  {
    WheapPfaLock.Timer.TimerType = 1;
    return 0;
  }
  if ( a1 )
  {
    if ( a1 == 1 && !WheapPfaLock.Timer.TimerDifObjTracking )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E0A020, 0LL, 0LL);
      v2 = KeAcquireSpinLockRaiseToDpc(&UcSpinLock);
      v3 = UcpTriggeredList;
      v4 = v2;
      HIBYTE(WheapPfaLock.Timer.Processor) = 0;
      WheapPfaLock.Timer.TimerDifObjTracking = 1;
      while ( (__int64 *)v3 != &UcpTriggeredList )
      {
        v5 = *(unsigned int *)(v3 - 16);
        v7[0] = *(_DWORD *)(v3 + 24);
        v7[1] = *(_DWORD *)(v3 + 28);
        v7[2] = *(_DWORD *)(v3 + 32);
        UcpLogUnexpectedCodePathEvent(v7, v5);
        v3 = *(_QWORD *)v3;
      }
      v1 = 0;
      KeReleaseSpinLock(&UcSpinLock, v4);
    }
  }
  else if ( !LOBYTE(WheapPfaLock.Timer.Processor) )
  {
    UcSpinLock = 0LL;
    qword_140EF4A58 = (__int64)&UcpTriggeredList;
    UcpTriggeredList = (__int64)&UcpTriggeredList;
    qword_140EF4A68 = (__int64)&UcpOneSettingsClientConfigurationList;
    UcpOneSettingsClientConfigurationList = (__int64)&UcpOneSettingsClientConfigurationList;
    LOBYTE(WheapPfaLock.Timer.Processor) = 1;
    return 0;
  }
  return v1;
}
