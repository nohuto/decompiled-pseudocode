/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x14013E518
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x14013DFAC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1400CFCDC (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     IsInputProcessingActivated @ 0x1400D10D0 (IsInputProcessingActivated.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     GetKnownRIMDeviceKind @ 0x1401818AC (GetKnownRIMDeviceKind.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1401AFB50 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int KnownRIMDeviceKind; // eax
  __int64 v14; // r10
  int (*v15)(void); // rax
  __int64 v16; // rcx
  void (__fastcall *v17)(const struct _DevicePnpNotification *); // rax

  if ( !PtiCurrent((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2007LL);
  if ( IsInputProcessingActivated(v5, v4, v6) )
  {
    IsEnabledDeviceUsageNoInline = Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline();
    v7 = *((unsigned int *)a2 + 5);
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( (_DWORD)v7 != 2 && (_DWORD)v7 != 3 && (_DWORD)v7 != 6 )
        goto LABEL_15;
    }
    else if ( (unsigned int)(v7 - 2) > 1 )
    {
      goto LABEL_15;
    }
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *(struct _KTHREAD **)(W32GetUserSessionState(v10, v9, v11) + 19400)
        || (*(_DWORD *)(*(_QWORD *)a2 + 168LL) & 0x40) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2049LL);
      }
    }
    KnownRIMDeviceKind = GetKnownRIMDeviceKind(*(_QWORD *)a2);
    CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v14, *((_QWORD *)a2 + 1), *((unsigned int *)a2 + 5));
  }
LABEL_15:
  v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48) + 4976LL);
  if ( v15 && v15() >= 0 )
  {
    v17 = *(void (__fastcall **)(const struct _DevicePnpNotification *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16)
                                                                                   + 48)
                                                                       + 4984LL);
    if ( v17 )
      v17(a2);
  }
}
