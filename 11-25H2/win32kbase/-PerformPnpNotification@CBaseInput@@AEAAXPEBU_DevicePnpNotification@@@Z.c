/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1402105B8
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401166DC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     IsInputProcessingActivated @ 0x140067500 (IsInputProcessingActivated.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetKnownRIMDeviceKind @ 0x140148660 (GetKnownRIMDeviceKind.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x14018A4C0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x14020F598 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int KnownRIMDeviceKind; // eax
  __int64 v13; // r10
  int (*v14)(void); // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  void (__fastcall *v17)(const struct _DevicePnpNotification *); // rax

  if ( !PtiCurrent() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2016);
  if ( IsInputProcessingActivated(v5, v4) )
  {
    v8 = (int *)((char *)a2 + 20);
    if ( (unsigned int)(*((_DWORD *)a2 + 5) - 2) <= 1 )
    {
      if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( CurrentThread != *(struct _KTHREAD **)(W32GetUserSessionState(v10, v9) + 19368) )
        {
LABEL_9:
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2048);
          goto LABEL_10;
        }
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 168LL) & 0x40) == 0 )
        {
          v8 = (int *)((char *)a2 + 20);
          goto LABEL_9;
        }
      }
LABEL_10:
      KnownRIMDeviceKind = GetKnownRIMDeviceKind(*(_QWORD *)a2);
      CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v13, *((_QWORD *)a2 + 1), *v8);
    }
  }
  v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 5416LL);
  if ( v14 && v14() >= 0 )
  {
    v17 = *(void (__fastcall **)(const struct _DevicePnpNotification *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                       v16,
                                                                                       v15)
                                                                                   + 48)
                                                                       + 5424LL);
    if ( v17 )
      v17(a2);
  }
}
