/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1401305B0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x140131EEC (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1402102A4 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401316BC (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMFreeHidTLCInfo(PVOID **Buffer, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID *v8; // rcx
  PVOID *v9; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState((_DWORD)Buffer, a2, a3);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v10,
    (struct RIMLOCK *)(UserSessionState + 104));
  if ( *((_DWORD *)Buffer + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 209LL);
  if ( *((_DWORD *)Buffer + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 210LL);
  if ( *((_DWORD *)Buffer + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 211LL);
  if ( *((_DWORD *)Buffer + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 212LL);
  if ( *((_DWORD *)Buffer + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 213LL);
  v8 = *Buffer;
  if ( (*Buffer)[1] != Buffer || (v9 = Buffer[1], *v9 != Buffer) )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = v9;
  if ( !*((_DWORD *)Buffer + 11) )
    GreDeleteFastMutex((char *)Buffer, v5, v6, v7);
  if ( v10 )
    RIMUnlockExclusive(v10);
}
