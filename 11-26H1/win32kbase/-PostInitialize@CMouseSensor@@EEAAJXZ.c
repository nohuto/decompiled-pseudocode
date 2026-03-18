/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x14021A330
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x14010FE18 (--0CMouseProcessor@@IEAA@XZ.c)
 *     isInputVirtualizationEnabled @ 0x140117990 (isInputVirtualizationEnabled.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x140222284 (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this)
{
  unsigned int v1; // ebx
  CMouseProcessor *v3; // rax
  CMouseProcessor *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 result; // rax

  v1 = 0;
  if ( *((_QWORD *)this + 166) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 62);
  *((_QWORD *)this + 166) = 0LL;
  v3 = (CMouseProcessor *)Win32AllocPoolZInitImpl(256LL, 0x1420uLL, 0x504D7270u);
  if ( v3 && (v4 = CMouseProcessor::CMouseProcessor(v3)) != 0LL )
  {
    *((_QWORD *)this + 166) = v4;
    if ( isInputVirtualizationEnabled(v6, v5, v7) )
      CIVChannel::Initialize((CMouseSensor *)((char *)this + 1264));
  }
  else
  {
    v1 = -1073741801;
  }
  *((_QWORD *)this + 181) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 350) / 0x3E8;
  result = v1;
  *((_QWORD *)this + 182) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 356) / 0x3E8;
  return result;
}
