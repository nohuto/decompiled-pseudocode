/*
 * XREFs of UcInitialize @ 0x14071752C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     UcpLogUnexpectedCodePathEvent @ 0x140717B14 (UcpLogUnexpectedCodePathEvent.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
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
    WheapPfaLock.WaitBlockFill6[96] = 1;
    return 0;
  }
  if ( a1 )
  {
    if ( a1 == 1 && !WheapPfaLock.WaitBlockFill6[81] )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E0A020, 0LL, 0LL);
      v2 = KeAcquireSpinLockRaiseToDpc(&UcSpinLock);
      v3 = UcpTriggeredList;
      v4 = v2;
      *(_WORD *)&WheapPfaLock.WaitBlockFill11[81] = 1;
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
  else if ( !WheapPfaLock.WaitBlockFill6[80] )
  {
    UcSpinLock = 0LL;
    qword_140EF4DB8 = (__int64)&UcpTriggeredList;
    UcpTriggeredList = (__int64)&UcpTriggeredList;
    qword_140EF4DD8 = (__int64)&UcpOneSettingsClientConfigurationList;
    UcpOneSettingsClientConfigurationList = (__int64)&UcpOneSettingsClientConfigurationList;
    WheapPfaLock.WaitBlockFill6[80] = 1;
    return 0;
  }
  return v1;
}
