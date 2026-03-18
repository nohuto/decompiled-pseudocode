/*
 * XREFs of RIMFreePointerDevice @ 0x1401E3C1C
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     CleanupTouchExtensibility @ 0x1401A1BD8 (CleanupTouchExtensibility.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1401E45C0 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMCmFreePointerDeviceContacts @ 0x14019D0D0 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E4710 (RIMRemoveFromActiveDevices.c)
 *     ApiSetFreePointerDeviceCalData @ 0x140225DE8 (ApiSetFreePointerDeviceCalData.c)
 *     ApiSetFreePointerDeviceCalibrationInfo @ 0x140225E48 (ApiSetFreePointerDeviceCalibrationInfo.c)
 */

void __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  char *v7; // rcx
  char *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char *v11; // rcx
  char *v12; // rcx
  char *v13; // rcx
  char *v14; // rcx
  char *v15; // rcx
  _QWORD *v16; // rax

  RIMRemoveFromActiveDevices((struct RawInputManagerObject *)a1);
  v5 = *(_QWORD **)(a1 + 432);
  while ( v5 != (_QWORD *)(a1 + 432) )
  {
    v6 = v5 - 115;
    v4 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6 == (_QWORD *)a2 )
    {
      if ( (_QWORD *)v5[1] != v4 || (v16 = (_QWORD *)v4[1], (_QWORD *)*v16 != v4) )
        __fastfail(3u);
      *v16 = v5;
      v5[1] = v16;
      v4[1] = v4;
      *v4 = v4;
      break;
    }
  }
  v7 = *(char **)(a2 + 1032);
  if ( v7 )
  {
    GreDeleteFastMutex(v7);
    *(_QWORD *)(a2 + 1032) = 0LL;
  }
  v8 = *(char **)(a2 + 936);
  if ( v8 )
  {
    GreDeleteFastMutex(v8);
    *(_QWORD *)(a2 + 936) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 400);
  if ( v9 )
  {
    ApiSetFreePointerDeviceCalData(v9, v5, v4);
    ApiSetFreePointerDeviceCalibrationInfo(*(_QWORD *)(a2 + 400));
    *(_QWORD *)(a2 + 400) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2);
  v10 = *(_QWORD *)(a2 + 768);
  if ( v10 )
  {
    v11 = *(char **)(v10 + 24);
    if ( v11 )
    {
      GreDeleteFastMutex(v11);
      *(_QWORD *)(*(_QWORD *)(a2 + 768) + 24LL) = 0LL;
    }
    v12 = *(char **)(*(_QWORD *)(a2 + 768) + 16LL);
    if ( v12 )
    {
      GreDeleteFastMutex(v12);
      *(_QWORD *)(*(_QWORD *)(a2 + 768) + 16LL) = 0LL;
    }
    GreDeleteFastMutex(*(char **)(a2 + 768));
    *(_QWORD *)(a2 + 768) = 0LL;
  }
  v13 = *(char **)(a2 + 384);
  if ( v13 )
  {
    GreDeleteFastMutex(v13);
    *(_QWORD *)(a2 + 384) = 0LL;
  }
  v14 = *(char **)(a2 + 824);
  if ( v14 )
  {
    GreDeleteFastMutex(v14);
    *(_QWORD *)(a2 + 824) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 368) & 0x400) != 0 )
  {
    if ( *(_DWORD *)(a1 + 720) < *(_DWORD *)(a2 + 776) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 982);
    *(_DWORD *)(a1 + 720) -= *(_DWORD *)(a2 + 776);
  }
  if ( *(_QWORD *)(a2 + 920) != a2 + 920 )
    __int2c();
  v15 = *(char **)(a2 + 1072);
  if ( v15 )
  {
    GreDeleteFastMutex(v15);
    *(_QWORD *)(a2 + 1072) = 0LL;
  }
  GreDeleteFastMutex((char *)a2);
}
