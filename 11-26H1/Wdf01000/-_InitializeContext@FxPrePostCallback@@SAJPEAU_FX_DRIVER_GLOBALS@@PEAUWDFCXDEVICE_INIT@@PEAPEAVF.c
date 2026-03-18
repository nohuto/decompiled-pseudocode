/*
 * XREFs of ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x140021E9C
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14002008C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPrePostCallback::_InitializeContext(
        _FX_DRIVER_GLOBALS *Globals,
        WDFCXDEVICE_INIT *CxInit,
        FxCxPnpPowerCallbackContext **Context,
        unsigned __int8 CallbackType)
{
  void *EvtCxDevicePreD0Exit; // rbx
  void *EvtCxDevicePostD0Exit; // rdi
  void *EvtCxDevicePreArmWakeFromSxFailedCleanup; // rsi
  bool v11; // zf
  unsigned int Tag; // ecx
  void *v13; // rax
  FxCxPnpPowerCallbackContext *v14; // rax
  FxPoolTypeOrPoolFlags v15; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( CallbackType <= 0xAu )
  {
    if ( CallbackType == 10 )
    {
      EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0Exit;
      EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0Exit;
      goto LABEL_8;
    }
    if ( CallbackType > 5u )
    {
      switch ( CallbackType )
      {
        case 6u:
          EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSx;
          EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromSx;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxFailedCleanup;
          goto LABEL_9;
        case 7u:
          EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxWithReason;
          EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromSxWithReason;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup;
          goto LABEL_9;
        case 8u:
          EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryPostHardwareEnabled;
          EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0EntryPostHardwareEnabled;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryPostHardwareEnabledFailedCleanup;
          goto LABEL_9;
        case 9u:
          EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreReleaseHardware;
          EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostReleaseHardware;
          goto LABEL_8;
      }
    }
    else
    {
      switch ( CallbackType )
      {
        case 5u:
          EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromS0;
          EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromS0;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromS0FailedCleanup;
          goto LABEL_9;
        case 0u:
          EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePrePrepareHardware;
          EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostPrepareHardware;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePrePrepareHardwareFailedCleanup;
          goto LABEL_9;
        case 1u:
          EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0Entry;
          EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0Entry;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryFailedCleanup;
          goto LABEL_9;
        case 2u:
          EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoInit;
          EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoInit;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoInitFailedCleanup;
          goto LABEL_9;
        case 3u:
          EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestart;
          EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoRestart;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartFailedCleanup;
          goto LABEL_9;
        case 4u:
          EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartEx;
          EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoRestartEx;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartExFailedCleanup;
          goto LABEL_9;
      }
    }
    goto LABEL_12;
  }
  if ( CallbackType <= 0x10u )
  {
    switch ( CallbackType )
    {
      case 0x10u:
        EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreDisarmWakeFromS0;
        EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostDisarmWakeFromS0;
        goto LABEL_8;
      case 0xBu:
        EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoSuspend;
        EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoSuspend;
        goto LABEL_8;
      case 0xCu:
        EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoSuspendEx;
        EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoSuspendEx;
        goto LABEL_8;
      case 0xDu:
        EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoFlush;
        EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoFlush;
        goto LABEL_8;
      case 0xEu:
        EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoCleanup;
        EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoCleanup;
        goto LABEL_8;
      case 0xFu:
        EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSurpriseRemoval;
        EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSurpriseRemoval;
        goto LABEL_8;
    }
    goto LABEL_12;
  }
  switch ( CallbackType )
  {
    case 0x11u:
      EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreDisarmWakeFromSx;
      EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostDisarmWakeFromSx;
      goto LABEL_8;
    case 0x12u:
      EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreWakeFromS0Triggered;
      EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostWakeFromS0Triggered;
      goto LABEL_8;
    case 0x13u:
      EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreWakeFromSxTriggered;
      EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostWakeFromSxTriggered;
      goto LABEL_8;
  }
  if ( CallbackType != 20 )
  {
LABEL_12:
    *Context = 0LL;
    return 0LL;
  }
  EvtCxDevicePreD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0ExitPreHardwareDisabled;
  EvtCxDevicePostD0Exit = CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0ExitPreHardwareDisabled;
LABEL_8:
  EvtCxDevicePreArmWakeFromSxFailedCleanup = 0LL;
LABEL_9:
  if ( !EvtCxDevicePreD0Exit && !EvtCxDevicePostD0Exit && !EvtCxDevicePreArmWakeFromSxFailedCleanup )
    goto LABEL_12;
  v11 = Globals->FxPoolTrackingOn == 0;
  Tag = Globals->Tag;
  *(_QWORD *)&v15.UsePoolType = 0LL;
  v15.u.PoolFlags = 64LL;
  if ( v11 )
    v13 = 0LL;
  else
    v13 = retaddr;
  v14 = (FxCxPnpPowerCallbackContext *)FxPoolAllocator(Globals, &Globals->FxPoolFrameworks, &v15, 0x20uLL, Tag, v13);
  if ( v14 )
  {
    v14->m_CallbackType = CallbackType;
    v14->m_PreCallbackSuccessful = 0;
    v14->u.Generic.PreCallback = EvtCxDevicePreD0Exit;
    v14->u.Generic.PostCallback = EvtCxDevicePostD0Exit;
    v14->u.Generic.CleanupCallback = EvtCxDevicePreArmWakeFromSxFailedCleanup;
    *Context = v14;
    return 0LL;
  }
  WPP_IFR_SF_(Globals, 2u, 0x12u, 0xAu, WPP_CxPnpPowerCallbacks_cpp_Traceguids);
  return 3221225626LL;
}
