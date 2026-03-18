/*
 * XREFs of RIMCmActiveContactsBegin @ 0x140075F1C
 * Callers:
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     rimIsWakeablePointerFrame @ 0x14007B3D8 (rimIsWakeablePointerFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 **__fastcall RIMCmActiveContactsBegin(__int64 **a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 **v5; // rsi
  __int64 *v6; // rcx
  __int64 *v7; // r9
  __int64 i; // r8
  unsigned int v9; // edx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-10h]

  if ( !*(_DWORD *)(a2 + 1008) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 461LL);
  v4 = a2 + 1000;
  if ( !*(_QWORD *)v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 48LL);
  if ( !*(_DWORD *)(v4 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 49LL);
  v5 = *(__int64 ***)v4;
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 81LL);
  if ( !*(_DWORD *)(v4 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 82LL);
  v6 = *v5;
  *(_OWORD *)a1 = v4;
  v7 = *a1;
  for ( i = **a1; ; v6 = *(__int64 **)(i + 16 * v10) )
  {
    v9 = *((_DWORD *)a1 + 2);
    a1[2] = v6;
    if ( v6 != (__int64 *)(i + 16LL * v9) )
      break;
    v10 = v9 + 1;
    *((_DWORD *)a1 + 2) = v10;
    if ( (unsigned int)v10 >= *((_DWORD *)v7 + 2) )
    {
      if ( (_DWORD)v10 != *((_DWORD *)v7 + 2) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 99LL);
      v11 = *a1;
      if ( !**a1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
      if ( !*((_DWORD *)v11 + 2) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
      *((_QWORD *)&v13 + 1) = *((unsigned int *)v11 + 2);
      *(_QWORD *)&v13 = v11;
      v14 = *v11 + 16LL * DWORD2(v13);
      *(_OWORD *)a1 = v13;
      a1[2] = (__int64 *)v14;
      return a1;
    }
  }
  return a1;
}
