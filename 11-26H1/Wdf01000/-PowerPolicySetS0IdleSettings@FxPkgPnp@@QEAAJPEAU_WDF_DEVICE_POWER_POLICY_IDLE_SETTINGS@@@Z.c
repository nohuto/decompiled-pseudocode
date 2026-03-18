/*
 * XREFs of ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x14003FA3C
 * Callers:
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x14003F3F0 (imp_WdfDeviceAssignS0IdleSettings.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x14003DDF4 (-ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x14003DF1C (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x14003F12C (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x14003F5CC (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1400403C4 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x14004BEE8 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x14004C474 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_DD @ 0x14005676C (WPP_IFR_SF_DD.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x14007A67C (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x14007A790 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 *     WPP_IFR_SF_LLd @ 0x14007EC2C (WPP_IFR_SF_LLd.c)
 *     WPP_IFR_SF_sd @ 0x14007F544 (WPP_IFR_SF_sd.c)
 *     ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083054 (-UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall FxPkgPnp::PowerPolicySetS0IdleSettings(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  FxPowerPolicyOwnerSettings *m_Owner; // r14
  _WDF_TRI_STATE v3; // eax
  IdleTimeoutManagement *p_m_TimeoutMgmt; // r14
  unsigned __int8 v7; // r12
  _DEVICE_POWER_STATE DxState; // esi
  FxDevice *m_Device; // rcx
  unsigned __int8 Set; // r13
  unsigned int IdleTimeout; // r15d
  _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings; // eax
  int result; // eax
  unsigned __int8 v14; // r12
  _WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE IdleTimeoutType; // ecx
  char v16; // cl
  FxPowerPolicyOwnerSettings *v17; // rcx
  _WDF_TRI_STATE ExcludeD3Cold; // ecx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // eax
  _DEVICE_POWER_STATE _a2; // eax
  unsigned __int8 v21; // dl
  unsigned int v22; // r8d
  _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake; // ecx
  _FX_DRIVER_GLOBALS *v24; // rcx
  unsigned __int16 v25; // r9
  unsigned __int8 v26; // dl
  void (__fastcall *SetD3ColdSupport)(void *, unsigned __int8); // rax
  FxPowerPolicyOwnerSettings *v28; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  __int64 i; // rcx
  _WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE v31; // eax
  unsigned __int8 m_DirectedTransitionsSupported; // r15
  const char *v33; // rcx
  FxDevice *v34; // rcx
  signed int inited; // eax
  signed int v36; // r15d
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned __int8 v39; // r13
  unsigned __int64 m_PoFxDeviceFlags; // rax
  unsigned __int64 v41; // rax
  bool v42; // zf
  const _GUID *_a1; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+40h] [rbp-C8h]
  unsigned __int8 State[4]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int8 Enabled; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int8 v47; // [rsp+4Dh] [rbp-BBh]
  _UNICODE_STRING childrenOptionalName; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE *v49; // [rsp+60h] [rbp-A8h]
  _UNICODE_STRING valueName; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING useWdfTimerForPofxName; // [rsp+78h] [rbp-90h] BYREF
  _BYTE useWdfTimerForPofxName_buffer[56]; // [rsp+88h] [rbp-80h] OVERLAPPED BYREF
  __int64 v53; // [rsp+C0h] [rbp-48h]
  wchar_t v54; // [rsp+C8h] [rbp-40h]
  _BYTE childrenOptionalName_buffer_8[80]; // [rsp+D8h] [rbp-30h] OVERLAPPED BYREF
  int v56; // [rsp+128h] [rbp+20h]
  wchar_t v57; // [rsp+12Ch] [rbp+24h]
  _OWORD v58[4]; // [rsp+138h] [rbp+30h] BYREF
  wchar_t v59; // [rsp+178h] [rbp+70h]

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v3 = Settings->Enabled;
  State[3] = 0;
  p_m_TimeoutMgmt = &m_Owner->m_IdleSettings.m_TimeoutMgmt;
  v7 = 0;
  DxState = PowerDeviceD3;
  if ( v3 == WdfTrue )
  {
    State[0] = 1;
  }
  else if ( v3 == WdfUseDefault )
  {
    State[0] = 1;
    if ( KeGetCurrentIrql() )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x30u, WPP_FxPkgPnp_cpp_Traceguids);
    }
    else
    {
      m_Device = this->m_Device;
      *(_OWORD *)&useWdfTimerForPofxName_buffer[8] = *(_OWORD *)L"WdfDefaultIdleInWorkingState";
      v54 = aWdfdefaultidle[28];
      childrenOptionalName.Buffer = (wchar_t *)3801144;
      *(_OWORD *)&useWdfTimerForPofxName_buffer[24] = *(_OWORD *)L"ltIdleInWorkingState";
      v49 = &useWdfTimerForPofxName_buffer[8];
      *(_OWORD *)&useWdfTimerForPofxName_buffer[40] = *(_OWORD *)L"WorkingState";
      *(_QWORD *)&valueName.Length = 0LL;
      v53 = *(_QWORD *)L"tate";
      if ( (int)FxDevice::OpenSettingsKey(m_Device, (void **)&valueName, 0x20000u) >= 0 )
      {
        *(_DWORD *)&childrenOptionalName.Length = 0;
        if ( FxRegKey::_QueryULong(
               *(void **)&valueName.Length,
               (_UNICODE_STRING *)&childrenOptionalName.Buffer,
               (unsigned int *)&childrenOptionalName.Length) >= 0 )
          State[0] = *(_DWORD *)&childrenOptionalName.Length != 0;
      }
      if ( *(_QWORD *)&valueName.Length )
        ZwClose(*(HANDLE *)&valueName.Length);
    }
  }
  else
  {
    State[0] = 0;
  }
  Set = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set;
  v47 = Set;
  if ( this->m_CapsQueried || KeGetCurrentIrql() || (result = FxPkgPnp::QueryForCapabilities(this), result >= 0) )
  {
    if ( Settings->IdleCaps == IdleCannotWakeFromS0 )
    {
      DxState = Settings->DxState;
      State[3] = 0;
      if ( DxState == PowerDeviceMaximum )
        DxState = PowerDeviceD3;
      goto LABEL_12;
    }
    if ( (unsigned int)(Settings->IdleCaps - 2) >= 2 )
      goto LABEL_12;
    DxState = Settings->DxState;
    State[3] = 1;
    _a2 = FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(this, PowerSystemWorking);
    if ( DxState == PowerDeviceMaximum )
    {
      DxState = _a2;
      if ( (unsigned int)(_a2 - 2) > 2 )
      {
LABEL_43:
        WPP_IFR_SF_DD(this->m_Globals, v21, 0xCu, 0x31u, WPP_FxPkgPnp_cpp_Traceguids, _a2, -1073741101);
        return -1073741101;
      }
      if ( _a2 > PowerDeviceD2 )
      {
        if ( Settings->IdleCaps == IdleUsbSelectiveSuspend )
          goto LABEL_43;
LABEL_12:
        IdleTimeout = Settings->IdleTimeout;
        if ( !IdleTimeout )
          IdleTimeout = 5000;
        UserControlOfIdleSettings = Settings->UserControlOfIdleSettings;
        *(_DWORD *)&valueName.Length = IdleTimeout;
        if ( UserControlOfIdleSettings == IdleAllowUserControl )
        {
          result = FxPkgPnp::UpdateWmiInstanceForS0Idle(this, AddInstance);
          if ( result < 0 )
            return result;
          if ( Settings->Enabled == WdfUseDefault )
          {
            if ( Set || KeGetCurrentIrql() )
            {
              State[0] = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
            }
            else
            {
              v34 = this->m_Device;
              *(_DWORD *)&useWdfTimerForPofxName_buffer[40] = *(_DWORD *)L"te";
              *(_WORD *)&useWdfTimerForPofxName_buffer[44] = SourceString[18];
              *(_QWORD *)&useWdfTimerForPofxName.Length = &useWdfTimerForPofxName_buffer[8];
              *(_OWORD *)&useWdfTimerForPofxName_buffer[8] = *(_OWORD *)L"IdleInWorkingState";
              valueName.Buffer = (wchar_t *)2490404;
              *(_OWORD *)&useWdfTimerForPofxName_buffer[24] = *(_OWORD *)L"rkingState";
              childrenOptionalName.Buffer = 0LL;
              if ( (int)FxDevice::OpenSettingsKey(v34, (void **)&childrenOptionalName.Buffer, 0x20000u) >= 0 )
              {
                *(_DWORD *)&childrenOptionalName.Length = 0;
                if ( FxRegKey::_QueryULong(
                       childrenOptionalName.Buffer,
                       (_UNICODE_STRING *)&valueName.Buffer,
                       (unsigned int *)&childrenOptionalName.Length) >= 0 )
                  State[0] = *(_DWORD *)&childrenOptionalName.Length != 0;
              }
              if ( childrenOptionalName.Buffer )
                ZwClose(childrenOptionalName.Buffer);
            }
          }
          v7 = 1;
        }
        else if ( UserControlOfIdleSettings == IdleDoNotAllowUserControl )
        {
          v28 = this->m_PowerPolicyMachine.m_Owner;
          WmiInstance = v28->m_IdleSettings.WmiInstance;
          if ( WmiInstance )
            FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, v28->m_IdleSettings.WmiInstance);
        }
        if ( !Set )
        {
          this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set = 1;
          this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Overridable = v7;
        }
        v14 = 0;
        if ( Settings->Size > 0x1C )
        {
          if ( Set )
          {
            IdleTimeoutType = Settings->IdleTimeoutType;
            if ( IdleTimeoutType == SystemManagedIdleTimeout
              || (v42 = IdleTimeoutType == SystemManagedIdleTimeoutWithHint, v16 = 0, v42) )
            {
              v16 = 1;
            }
            if ( v16 != ((p_m_TimeoutMgmt->m_IdleTimeoutStatus & 2) != 0) )
            {
              v33 = "should";
              if ( (p_m_TimeoutMgmt->m_IdleTimeoutStatus & 2) == 0 )
                v33 = "should not";
              WPP_IFR_SF_sd(
                this->m_Globals,
                (unsigned __int8)"should not",
                0xCu,
                0x36u,
                WPP_FxPkgPnp_cpp_Traceguids,
                v33,
                -1073741808);
              FxVerifierDbgBreakPoint(this->m_Globals);
              return -1073741808;
            }
          }
          else
          {
            v31 = Settings->IdleTimeoutType;
            if ( v31 == SystemManagedIdleTimeout || v31 == SystemManagedIdleTimeoutWithHint )
            {
              result = IdleTimeoutManagement::UseSystemManagedIdleTimeout(p_m_TimeoutMgmt, this->m_Globals);
              if ( result < 0 )
                return result;
              if ( (p_m_TimeoutMgmt->m_IdleTimeoutStatus & 4) != 0 )
              {
                m_DirectedTransitionsSupported = p_m_TimeoutMgmt->m_DirectedTransitionsSupported;
              }
              else
              {
                m_DirectedTransitionsSupported = unk_1400C90DA;
                if ( this->m_Globals->WdfBindInfo->Version.Minor >= 0x1F )
                  m_DirectedTransitionsSupported = 1;
              }
              m_Globals = this->m_Globals;
              State[1] = m_DirectedTransitionsSupported;
              State[2] = 0;
              WdfBindInfo = m_Globals->WdfBindInfo;
              LODWORD(m_Globals) = p_m_TimeoutMgmt->m_IdleTimeoutStatus;
              v39 = WdfBindInfo->Version.Minor >= 0x21;
              Enabled = v39;
              if ( ((unsigned __int8)m_Globals & 4) != 0 )
              {
                v14 = (p_m_TimeoutMgmt->m_PoFxDeviceFlags & 6) == 6;
                State[2] = v14;
              }
              if ( KeGetCurrentIrql() )
              {
                WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x35u, WPP_FxPkgPnp_cpp_Traceguids);
              }
              else
              {
                v58[0] = *(_OWORD *)L"WdfDirectedPowerTransitionEnable";
                v58[1] = *(_OWORD *)L"tedPowerTransitionEnable";
                v59 = aWdfdirectedpow_0[32];
                v58[2] = *(_OWORD *)L"TransitionEnable";
                v58[3] = *(_OWORD *)L"onEnable";
                *(_QWORD *)&useWdfTimerForPofxName.Length = v58;
                valueName.Buffer = (wchar_t *)4325440;
                FxPkgPnp::ReadRegistryWdfSetting(this, (const _UNICODE_STRING *)&valueName.Buffer, (bool *)&State[1]);
                *(_OWORD *)childrenOptionalName_buffer_8 = *(_OWORD *)L"WdfDirectedPowerTransitionChildrenOptional";
                v56 = *(_DWORD *)L"al";
                *(_OWORD *)&childrenOptionalName_buffer_8[32] = *(_OWORD *)L"TransitionChildrenOptional";
                *(_OWORD *)&childrenOptionalName_buffer_8[16] = *(_OWORD *)L"tedPowerTransitionChildrenOptional";
                v57 = aWdfdirectedpow[42];
                *(_OWORD *)&childrenOptionalName_buffer_8[64] = *(_OWORD *)L"enOptional";
                *(_OWORD *)&childrenOptionalName_buffer_8[48] = *(_OWORD *)L"onChildrenOptional";
                childrenOptionalName.Buffer = (wchar_t *)5636180;
                v49 = childrenOptionalName_buffer_8;
                FxPkgPnp::ReadRegistryWdfSetting(
                  this,
                  (const _UNICODE_STRING *)&childrenOptionalName.Buffer,
                  (bool *)&State[2]);
                *(_DWORD *)&useWdfTimerForPofxName_buffer[48] = *(_DWORD *)L"x";
                *(_OWORD *)&useWdfTimerForPofxName_buffer[8] = *(_OWORD *)L"WdfUseWdfTimerForPofx";
                *(_QWORD *)&useWdfTimerForPofxName_buffer[40] = *(_QWORD *)L"rPofx";
                *(_OWORD *)&useWdfTimerForPofxName_buffer[24] = *(_OWORD *)L"fTimerForPofx";
                useWdfTimerForPofxName.Buffer = (wchar_t *)2883626;
                *(_QWORD *)useWdfTimerForPofxName_buffer = &useWdfTimerForPofxName_buffer[8];
                FxPkgPnp::ReadRegistryWdfSetting(
                  this,
                  (const _UNICODE_STRING *)&useWdfTimerForPofxName.Buffer,
                  (bool *)&Enabled);
                m_DirectedTransitionsSupported = State[1];
                v39 = Enabled;
                v14 = State[2];
              }
              m_PoFxDeviceFlags = p_m_TimeoutMgmt->m_PoFxDeviceFlags;
              p_m_TimeoutMgmt->m_DirectedTransitionsSupported = m_DirectedTransitionsSupported;
              if ( v14 )
                v41 = m_PoFxDeviceFlags | 6;
              else
                v41 = m_PoFxDeviceFlags & 0xFFFFFFFFFFFFFFF9uLL;
              p_m_TimeoutMgmt->m_PoFxDeviceFlags = v41;
              IdleTimeout = *(_DWORD *)&valueName.Length;
              p_m_TimeoutMgmt->m_UseWdfTimerForPofx = v39;
              Set = v47;
            }
          }
        }
        if ( Settings->IdleCaps == IdleCannotWakeFromS0 && Settings->Size > 0x18 )
        {
          PowerUpIdleDeviceOnSystemWake = Settings->PowerUpIdleDeviceOnSystemWake;
          if ( PowerUpIdleDeviceOnSystemWake )
          {
            if ( PowerUpIdleDeviceOnSystemWake != WdfTrue )
              goto LABEL_28;
            this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 1;
            v24 = this->m_Globals;
            if ( !v24->FxVerboseOn )
              goto LABEL_28;
            v25 = 55;
            goto LABEL_50;
          }
          this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 0;
          v24 = this->m_Globals;
          if ( v24->FxVerboseOn )
          {
            v25 = 56;
LABEL_50:
            WPP_IFR_SF_(v24, 5u, 0xCu, v25, WPP_FxPkgPnp_cpp_Traceguids);
          }
        }
LABEL_28:
        v17 = this->m_PowerPolicyMachine.m_Owner;
        if ( !v17->m_IdleSettings.UsbSSCapabilityKnown )
        {
          IdleCaps = Settings->IdleCaps;
          if ( IdleCaps == IdleUsbSelectiveSuspend )
          {
            for ( i = 0LL; i < 2; ++i )
              *(&this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.UsbSSCapable + i) = 1;
          }
          else if ( IdleCaps == IdleCanWakeFromS0 )
          {
            v17->m_IdleSettings.UsbSSCapabilityKnown = 1;
          }
        }
        this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.WakeFromS0Capable = State[3];
        this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState = DxState;
        if ( (p_m_TimeoutMgmt->m_IdleTimeoutStatus & 2) != 0 && !p_m_TimeoutMgmt->m_UseWdfTimerForPofx )
        {
          if ( !Set )
            this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)-1LL;
          if ( Settings->IdleTimeoutType == SystemManagedIdleTimeoutWithHint )
            this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_NextIdleTimeoutHint = IdleTimeout;
        }
        else
        {
          this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)(-10000LL * IdleTimeout);
        }
        if ( Settings->Size > 0x1C )
        {
          ExcludeD3Cold = Settings->ExcludeD3Cold;
          if ( ExcludeD3Cold != WdfUseDefault )
          {
            if ( ExcludeD3Cold )
            {
              if ( ExcludeD3Cold != WdfTrue )
                WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x39u, WPP_FxPkgPnp_cpp_Traceguids, ExcludeD3Cold);
              v26 = 0;
            }
            else
            {
              v26 = 1;
            }
            this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.D3ColdCapabilityKnown = 1;
            this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.D3ColdSupported = v26;
            SetD3ColdSupport = this->m_D3ColdInterface.SetD3ColdSupport;
            if ( SetD3ColdSupport )
              ((void (__fastcall *)(void *))SetD3ColdSupport)(this->m_D3ColdInterface.Context);
          }
        }
        FxPkgPnp::PowerPolicySetS0IdleState(this, State[0]);
        return 0;
      }
    }
    else
    {
      if ( DxState > _a2 )
      {
        WPP_IFR_SF_LLd(this->m_Globals, v21, v22, 0x32u, _a1, DxState, _a2, v44);
        return -1073741101;
      }
      if ( DxState > PowerDeviceD2 )
      {
        if ( Settings->IdleCaps == IdleUsbSelectiveSuspend )
        {
          WPP_IFR_SF_DD(this->m_Globals, v21, 0xCu, 0x33u, WPP_FxPkgPnp_cpp_Traceguids, DxState, -1073741101);
          return -1073741101;
        }
        goto LABEL_12;
      }
    }
    if ( Settings->IdleCaps == IdleUsbSelectiveSuspend )
    {
      inited = FxPowerPolicyMachine::InitUsbSS(&this->m_PowerPolicyMachine);
      v36 = inited;
      if ( inited < 0 )
      {
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x34u, WPP_FxPkgPnp_cpp_Traceguids, inited);
        return v36;
      }
    }
    goto LABEL_12;
  }
  return result;
}
