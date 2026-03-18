/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x14017D760
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x14017D680 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x140092C7C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDirectStopDeviceClassNotifications(char *a1, __int64 a2, int a3)
{
  char v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // edx
  int v10; // edi
  int v11; // r8d
  _BYTE *v12; // rbx
  unsigned int i; // esi
  int v14; // eax
  char v15; // bl
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      116,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v10 >= 0 )
  {
    v12 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v12[81] )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3491LL);
    }
    for ( i = 0; i <= 2; ++i )
    {
      v14 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v12, i);
      v10 = v14;
    }
    RIMUnlockExclusive((__int64)(v12 + 104));
    ObfDereferenceObject(v12);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v15 = 0;
  }
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v11);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 19368),
      4,
      1,
      117,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
