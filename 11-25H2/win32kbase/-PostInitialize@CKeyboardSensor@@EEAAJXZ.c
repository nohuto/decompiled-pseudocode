/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140213C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isInputVirtualizationEnabled @ 0x1400CF034 (isInputVirtualizationEnabled.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021EA98 (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = 0;
  if ( *((_QWORD *)this + 167) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 74);
  *((_QWORD *)this + 167) = 0LL;
  v3 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x504B7270u);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)v3 = &CBaseProcessor::`vftable';
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_DWORD *)(v3 + 24) = 0;
    *((_QWORD *)this + 167) = v3;
    if ( isInputVirtualizationEnabled((__int64)&CBaseProcessor::`vftable', v4) )
      CIVChannel::Initialize((CKeyboardSensor *)((char *)this + 1264));
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
