/*
 * XREFs of ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x14021A1BC
 * Callers:
 *     GetCursorUpdateHandle @ 0x14021B574 (GetCursorUpdateHandle.c)
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1400D0FF0 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x140135A68 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140198440 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x14021849C (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 */

void *__fastcall CMouseSensor::GetCursorUpdateHandle(CMouseSensor *this, int a2, int a3)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 DispatcherHandleByName; // rdi
  int v7; // r8d
  __int64 CurrentProcess; // rax
  void *SensorHostingProcessHandle; // rdi
  void *v10; // rax
  void *TargetHandle; // [rsp+70h] [rbp+18h] BYREF

  if ( !IsInputThread((int)this, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 160);
  TargetHandle = (void *)-1LL;
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName((__int64)this, 0xDu, 0);
    if ( DispatcherHandleByName )
    {
      CurrentProcess = PsGetCurrentProcess(v5);
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
      v10 = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 0xDu, 0);
      if ( v10
        && ZwDuplicateObject(
             SensorHostingProcessHandle,
             v10,
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
  if ( TargetHandle == (void *)-1LL && (unsigned int)CBaseProcessor::GetExecutionEnvironment(v5, v4, v7) == 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 210);
  return TargetHandle;
}
