/*
 * XREFs of RIMCmDeactivateContact @ 0x1401310A4
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x140071E80 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 * Callees:
 *     RIMCmIsContactSuppressed @ 0x14007615C (RIMCmIsContactSuppressed.c)
 *     ?DeactivateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK@Z @ 0x1401312FC (-DeactivateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK@Z.c)
 *     rimReleaseCursor @ 0x140131388 (rimReleaseCursor.c)
 *     rimFindLastDeviceFrame @ 0x140131724 (rimFindLastDeviceFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_QWORD *__fastcall RIMCmDeactivateContact(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 LastDeviceFrame; // rax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r14
  int v11; // ebp
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  unsigned int *v14; // rsi
  _QWORD *result; // rax
  __int64 v16; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    LastDeviceFrame = rimFindLastDeviceFrame(*(_QWORD *)(v2 + 320), v2);
    v6 = LastDeviceFrame;
    if ( LastDeviceFrame )
    {
      v7 = 0;
      if ( *(_DWORD *)(LastDeviceFrame + 24) )
      {
        do
        {
          v8 = *(_QWORD *)(v6 + 232);
          v9 = 192LL * v7;
          if ( *(unsigned __int16 *)(v9 + v8 + 8) == *(_DWORD *)(a2 + 4) && (*(_DWORD *)(v9 + v8 + 28) & 0x2000006) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131080LL, 336LL);
          ++v7;
        }
        while ( v7 != *(_DWORD *)(v6 + 24) );
      }
    }
  }
  v10 = (__int64 *)(a1 + 984);
  v11 = -__CFSHR__(*(_DWORD *)(a2 + 32), 3);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 345LL);
  v12 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v12 + 8) != a2 + 16 || (v13 = *(_QWORD **)(a2 + 24), *v13 != a2 + 16) )
LABEL_22:
    __fastfail(3u);
  *v13 = v12;
  v14 = (unsigned int *)(a1 + 1016);
  *(_QWORD *)(v12 + 8) = v13;
  if ( !*(_DWORD *)(a1 + 1016) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 349LL);
  --*v14;
  if ( !(unsigned int)RIMCmIsContactSuppressed(a2) )
  {
    if ( !*(_DWORD *)(a1 + 1020) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 353LL);
      v14 = (unsigned int *)(a1 + 1016);
    }
    --*(_DWORD *)(a1 + 1020);
  }
  if ( *v14 < *(_DWORD *)(a1 + 1020) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 356LL);
  InputTraceLogging::RIM::DeactivateContact((const struct RIMDEV *)v2, *(_DWORD *)(a2 + 4), *(_DWORD *)a2, *v14);
  if ( !v11 && (*(_DWORD *)(a1 + 776) > 1u || (*(_DWORD *)(a1 + 368) & 0x20) != 0) )
    rimReleaseCursor(a1, *(unsigned int *)(a2 + 4));
  result = memset((void *)a2, 0, 0xB30uLL);
  if ( !v11 )
  {
    v16 = *v10;
    result = (_QWORD *)(a2 + 16);
    if ( *(__int64 **)(*v10 + 8) != v10 )
      goto LABEL_22;
    *result = v16;
    *(_QWORD *)(a2 + 24) = v10;
    *(_QWORD *)(v16 + 8) = result;
    *v10 = (__int64)result;
  }
  return result;
}
