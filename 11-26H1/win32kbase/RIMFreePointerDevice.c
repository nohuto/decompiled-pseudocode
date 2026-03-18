/*
 * XREFs of RIMFreePointerDevice @ 0x140130280
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x14012E9F4 (RIMReleasePointerDeviceInfo.c)
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     CleanupTouchExtensibility @ 0x1401C5B00 (CleanupTouchExtensibility.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RIMRemoveFromCurrentPointerDevicesList @ 0x14012EB44 (RIMRemoveFromCurrentPointerDevicesList.c)
 *     RIMCmFreePointerDeviceContacts @ 0x14012EBA0 (RIMCmFreePointerDeviceContacts.c)
 *     RIMRemoveFromActiveDevices @ 0x140131468 (RIMRemoveFromActiveDevices.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetFreePointerDeviceCalData @ 0x140228010 (ApiSetFreePointerDeviceCalData.c)
 *     ApiSetFreePointerDeviceCalibrationInfo @ 0x140228070 (ApiSetFreePointerDeviceCalibrationInfo.c)
 */

void __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rcx
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  char *v13; // rcx
  char *v14; // rcx
  char *v15; // rcx
  char *v16; // rcx
  char *v17; // rcx

  RIMRemoveFromActiveDevices((struct RawInputManagerObject *)a1);
  RIMRemoveFromCurrentPointerDevicesList(a1, (_QWORD *)a2);
  v7 = *(char **)(a2 + 1032);
  if ( v7 )
  {
    GreDeleteFastMutex(v7, v4, v5, v6);
    *(_QWORD *)(a2 + 1032) = 0LL;
  }
  v8 = *(char **)(a2 + 936);
  if ( v8 )
  {
    GreDeleteFastMutex(v8, v4, v5, v6);
    *(_QWORD *)(a2 + 936) = 0LL;
  }
  if ( *(_QWORD *)(a2 + 400) )
  {
    ApiSetFreePointerDeviceCalData();
    ApiSetFreePointerDeviceCalibrationInfo(*(_QWORD *)(a2 + 400));
    *(_QWORD *)(a2 + 400) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2, v4, v5, v6);
  v12 = *(_QWORD *)(a2 + 768);
  if ( v12 )
  {
    v13 = *(char **)(v12 + 24);
    if ( v13 )
    {
      GreDeleteFastMutex(v13, v9, v10, v11);
      *(_QWORD *)(*(_QWORD *)(a2 + 768) + 24LL) = 0LL;
    }
    v14 = *(char **)(*(_QWORD *)(a2 + 768) + 16LL);
    if ( v14 )
    {
      GreDeleteFastMutex(v14, v9, v10, v11);
      *(_QWORD *)(*(_QWORD *)(a2 + 768) + 16LL) = 0LL;
    }
    GreDeleteFastMutex(*(char **)(a2 + 768), v9, v10, v11);
    *(_QWORD *)(a2 + 768) = 0LL;
  }
  v15 = *(char **)(a2 + 384);
  if ( v15 )
  {
    GreDeleteFastMutex(v15, v9, v10, v11);
    *(_QWORD *)(a2 + 384) = 0LL;
  }
  v16 = *(char **)(a2 + 824);
  if ( v16 )
  {
    GreDeleteFastMutex(v16, v9, v10, v11);
    *(_QWORD *)(a2 + 824) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 368) & 0x400) != 0 )
  {
    if ( *(_DWORD *)(a1 + 720) < *(_DWORD *)(a2 + 776) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 982LL);
    *(_DWORD *)(a1 + 720) -= *(_DWORD *)(a2 + 776);
  }
  if ( *(_QWORD *)(a2 + 920) != a2 + 920 )
    __int2c();
  v17 = *(char **)(a2 + 1072);
  if ( v17 )
  {
    GreDeleteFastMutex(v17, v9, v10, v11);
    *(_QWORD *)(a2 + 1072) = 0LL;
  }
  GreDeleteFastMutex((char *)a2, v9, v10, v11);
}
