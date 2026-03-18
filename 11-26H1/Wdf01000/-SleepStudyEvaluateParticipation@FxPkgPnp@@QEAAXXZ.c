/*
 * XREFs of ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1400A7F14
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400821F0 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x14003DF1C (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x14003F12C (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x140067C5C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1400A7D60 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 *     ?MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P6AJPEAU2@PEAX@Z33@Z @ 0x1400ACA98 (-MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

void __fastcall FxPkgPnp::SleepStudyEvaluateParticipation(FxPkgPnp *this)
{
  bool v2; // di
  FxDevice *m_Device; // rcx
  _SLEEP_STUDY_INTERFACE *Pool2; // rax
  int (__fastcall *v5)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *); // r8
  unsigned __int16 v6; // r9
  int _a2; // r8d
  FxDeviceBase *v8; // rcx
  unsigned __int16 v9; // ax
  const void *_a1; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v13; // rcx
  void *OutputBufferLength; // [rsp+20h] [rbp-29h]
  _POWER_PLATFORM_INFORMATION platformInfo; // [rsp+40h] [rbp-9h] BYREF
  unsigned int Value; // [rsp+44h] [rbp-5h] BYREF
  void *Key; // [rsp+48h] [rbp-1h] BYREF
  _UNICODE_STRING valueName; // [rsp+50h] [rbp+7h] BYREF
  _WNF_STATE_NAME wnfStateName; // [rsp+60h] [rbp+17h] BYREF
  wchar_t valueName_buffer[16]; // [rsp+68h] [rbp+1Fh] BYREF

  wnfStateName = WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED;
  platformInfo.AoAc = 0;
  v2 = 0;
  valueName.Buffer = valueName_buffer;
  *(_QWORD *)&valueName.Length = 2097182LL;
  wcscpy(valueName_buffer, L"SleepstudyState");
  if ( !this->m_PowerPolicyMachine.m_Owner || unk_1400C90D9 == 1 )
    goto LABEL_20;
  m_Device = this->m_Device;
  Key = 0LL;
  if ( (int)FxDevice::OpenSettingsKey(m_Device, &Key, 0x20000u) >= 0 )
  {
    Value = 0;
    if ( FxRegKey::_QueryULong(Key, &valueName, &Value) >= 0 )
      v2 = Value != 0;
  }
  FxAutoRegKey::~FxAutoRegKey((FxAutoRegKey *)&Key);
  if ( !v2 )
    goto LABEL_20;
  if ( ZwPowerInformation(PlatformInformation, 0LL, 0, &platformInfo, 1u) < 0 )
  {
    v6 = 16;
    goto LABEL_17;
  }
  if ( platformInfo.AoAc )
  {
    Pool2 = (_SLEEP_STUDY_INTERFACE *)ExAllocatePool2(64LL, 32LL, 1397970260LL);
    if ( !Pool2 )
    {
      v6 = 17;
LABEL_17:
      m_DeviceBase = this->m_DeviceBase;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      v13 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v13 = 0LL;
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, v6, WPP_FxPkgPnpKM_cpp_Traceguids, v13);
      goto LABEL_20;
    }
    this->m_SleepStudy = Pool2;
    _a2 = MxWnf::MxSubscribeWnfStateChange(&Pool2->WnfContext, &wnfStateName, v5, this, OutputBufferLength);
    if ( _a2 >= 0 )
    {
      FxPkgPnp::SleepStudyEvaluateDripsConstraint(this, 1u);
      return;
    }
    v8 = this->m_DeviceBase;
    v9 = v8->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v9 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x12u, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
  }
LABEL_20:
  this->m_SleepStudyTrackReferences = 0;
}
