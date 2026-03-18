/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x140153C6C
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x140153C50 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x1401ED9C0 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x140033268 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x140033288 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x140181408 (rimHandlePnpWaitersOnOwnedDevices.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(char *Buffer)
{
  _BYTE *v1; // rsi
  __int64 v3; // rdi
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = (_BYTE *)*((_QWORD *)Buffer + 11);
  v3 = *((unsigned int *)Buffer + 24);
  RIMLockExclusive((__int64)(v1 + 104));
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v3);
  RIMUnlockExclusive((__int64)(v1 + 104));
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)&v1[8 * v3 + 224]);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v5);
  if ( !*(_QWORD *)&v1[8 * (unsigned int)v3 + 224] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1676LL);
  *(_QWORD *)&v1[8 * (unsigned int)v3 + 224] = 0LL;
  *(_DWORD *)&v1[4 * (unsigned int)v3 + 296] = 0;
  if ( v1[80] || v1[81] )
  {
    GreDeleteFastMutex(Buffer);
    *(_QWORD *)&v1[8 * (unsigned int)v3 + 312] = 0LL;
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v5);
  return ObfDereferenceObject(v1);
}
