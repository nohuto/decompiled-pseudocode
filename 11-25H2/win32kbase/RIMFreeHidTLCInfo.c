/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1401E6AF0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1401380A4 (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1401F4828 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x14002A8F4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401305CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMFreeHidTLCInfo(PVOID **Buffer, __int64 a2)
{
  __int64 UserSessionState; // rax
  PVOID *v4; // rcx
  PVOID *v5; // rax
  char v6; // [rsp+48h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(Buffer, a2);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v6,
    (struct RIMLOCK *)(UserSessionState + 104));
  if ( *((_DWORD *)Buffer + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 209);
  if ( *((_DWORD *)Buffer + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
  if ( *((_DWORD *)Buffer + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 211);
  if ( *((_DWORD *)Buffer + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 212);
  if ( *((_DWORD *)Buffer + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 213);
  v4 = *Buffer;
  if ( (*Buffer)[1] != Buffer || (v5 = Buffer[1], *v5 != Buffer) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( !*((_DWORD *)Buffer + 11) )
    GreDeleteFastMutex((char *)Buffer);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6);
}
