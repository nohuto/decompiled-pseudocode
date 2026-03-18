/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140219CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isInputVirtualizationEnabled @ 0x140117990 (isInputVirtualizationEnabled.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x140222284 (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d

  v1 = 0;
  if ( *((_QWORD *)this + 166) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 74);
  *((_QWORD *)this + 166) = 0LL;
  v3 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x504B7270u);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)v3 = &CBaseProcessor::`vftable';
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_DWORD *)(v3 + 24) = 0;
    *((_QWORD *)this + 166) = v3;
    if ( isInputVirtualizationEnabled((int)&CBaseProcessor::`vftable', v4, v5) )
      CIVChannel::Initialize((CKeyboardSensor *)((char *)this + 1264));
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
