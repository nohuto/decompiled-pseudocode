/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x14017516C
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x140175150 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x14020C0C0 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x14017524C (rimHandlePnpWaitersOnOwnedDevices.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEnterEditionCrit @ 0x1401C50EC (ApiSetEnterEditionCrit.c)
 *     ApiSetLeaveEditionCrit @ 0x140228290 (ApiSetLeaveEditionCrit.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(char *Buffer)
{
  _BYTE *v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9

  v1 = (_BYTE *)*((_QWORD *)Buffer + 11);
  v3 = *((unsigned int *)Buffer + 24);
  RIMLockExclusive((__int64)(v1 + 104));
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v3);
  RIMUnlockExclusive((__int64)(v1 + 104));
  v4 = (unsigned int)v3;
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)&v1[8 * v3 + 224]);
  v6 = ApiSetEnterEditionCrit();
  if ( !*(_QWORD *)&v1[8 * v4 + 224] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1688LL);
  *(_QWORD *)&v1[8 * v4 + 224] = 0LL;
  *(_DWORD *)&v1[4 * v4 + 296] = 0;
  if ( v1[80] || v1[81] )
  {
    GreDeleteFastMutex(Buffer, v5, v7, v8);
    *(_QWORD *)&v1[8 * v4 + 312] = 0LL;
  }
  if ( !v6 )
    ApiSetLeaveEditionCrit();
  return ObfDereferenceObject(v1);
}
