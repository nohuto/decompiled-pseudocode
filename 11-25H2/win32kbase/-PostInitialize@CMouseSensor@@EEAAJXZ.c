/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1402146D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isInputVirtualizationEnabled @ 0x1400CF034 (isInputVirtualizationEnabled.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1401580C8 (--0CMouseProcessor@@IEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021EA98 (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this)
{
  unsigned int v1; // ebx
  CMouseProcessor *v3; // rax
  CMouseProcessor *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v1 = 0;
  if ( *((_QWORD *)this + 167) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 62);
  *((_QWORD *)this + 167) = 0LL;
  v3 = (CMouseProcessor *)Win32AllocPoolZInitImpl(256LL, 0x1418uLL, 0x504D7270u);
  if ( v3 && (v4 = CMouseProcessor::CMouseProcessor(v3)) != 0LL )
  {
    *((_QWORD *)this + 167) = v4;
    if ( isInputVirtualizationEnabled(v6, v5) )
      CIVChannel::Initialize((CMouseSensor *)((char *)this + 1264));
  }
  else
  {
    v1 = -1073741801;
  }
  *((_QWORD *)this + 182) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 352) / 0x3E8;
  result = v1;
  *((_QWORD *)this + 183) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 358) / 0x3E8;
  return result;
}
