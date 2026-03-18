/*
 * XREFs of ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x140214564
 * Callers:
 *     GetCursorUpdateHandle @ 0x1402160F4 (GetCursorUpdateHandle.c)
 * Callees:
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1400DA790 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104744 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401AA348 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x14020FA34 (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 */

void *__fastcall CMouseSensor::GetCursorUpdateHandle(CMouseSensor *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 DispatcherHandleByName; // rdi
  __int64 CurrentProcess; // rax
  void *SensorHostingProcessHandle; // rdi
  void *v8; // rax
  void *TargetHandle; // [rsp+70h] [rbp+18h] BYREF

  if ( !IsInputThread((__int64)this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 160);
  TargetHandle = (void *)-1LL;
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName((__int64)this, 0xDu, 0);
    if ( DispatcherHandleByName )
    {
      CurrentProcess = PsGetCurrentProcess(v4, v3);
      if ( (int)ObDuplicateObject(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
                  DispatcherHandleByName,
                  CurrentProcess,
                  &TargetHandle,
                  0,
                  0,
                  6,
                  1) < 0 )
        TargetHandle = (void *)-1LL;
    }
  }
  else
  {
    SensorHostingProcessHandle = (void *)CBaseInput::GetSensorHostingProcessHandle(this);
    if ( SensorHostingProcessHandle != (void *)-1LL )
    {
      v8 = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 0xDu, 0);
      if ( v8
        && ZwDuplicateObject(
             SensorHostingProcessHandle,
             v8,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x100000u,
             0,
             2u) < 0 )
      {
        TargetHandle = (void *)-1LL;
      }
      ZwClose(SensorHostingProcessHandle);
    }
  }
  if ( TargetHandle == (void *)-1LL && (unsigned int)CBaseProcessor::GetExecutionEnvironment(v4, v3) == 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
  return TargetHandle;
}
