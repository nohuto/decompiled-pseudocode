/*
 * XREFs of imp_WdfInterruptCreate @ 0x1400A2980
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400417C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_DD @ 0x14005676C (WPP_IFR_SF_DD.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A4854 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1400AA6CC (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

int __fastcall imp_WdfInterruptCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_INTERRUPT_CONFIG *Configuration,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFINTERRUPT__ **Interrupt)
{
  unsigned int v9; // edx
  WDFINTERRUPT__ **v10; // r12
  _FX_DRIVER_GLOBALS *v11; // rsi
  unsigned int v12; // edx
  _FX_DRIVER_GLOBALS *v13; // rcx
  int v14; // r8d
  unsigned int v15; // eax
  size_t _a2; // rbx
  int result; // eax
  unsigned __int8 v18; // r8
  void *ParentObject; // rdx
  FxDevice *v20; // r14
  unsigned __int8 m_CallbackFlags; // bl
  unsigned __int8 v22; // r8
  int v23; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptTranslated; // rax
  unsigned __int16 v25; // r9
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptRaw; // rdx
  unsigned __int64 v27; // rcx
  FxObject *pParent; // [rsp+40h] [rbp-61h] BYREF
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp-59h] BYREF
  _WDF_INTERRUPT_CONFIG intConfig; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int64 retaddr; // [rsp+F8h] [rbp+57h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+100h] [rbp+5Fh] BYREF
  FxDevice *pDevice; // [rsp+110h] [rbp+6Fh] BYREF

  pFxDriverGlobals = 0LL;
  pFxInterrupt = 0LL;
  pDevice = 0LL;
  pParent = 0LL;
  memset(&intConfig, 0, sizeof(intConfig));
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !Configuration )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v10 = Interrupt;
  if ( !Interrupt )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v11 = pFxDriverGlobals;
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(pFxDriverGlobals, v9, 0xDu) )
    v15 = v14 + 91;
  else
    v15 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v13, v12, 0xBu) ? 96 : 56;
  _a2 = Configuration->Size;
  if ( (_DWORD)_a2 != 104 )
  {
    if ( (_DWORD)_a2 != 96 && (_DWORD)_a2 != 56 )
    {
      WPP_IFR_SF_DD(v11, v12, 0xCu, 0xAu, WPP_FxInterruptApi_cpp_Traceguids, _a2, v15);
      return -1073741820;
    }
    memset(&intConfig, 0, sizeof(intConfig));
    intConfig.EvtInterruptIsr = Configuration->EvtInterruptIsr;
    intConfig.EvtInterruptDpc = Configuration->EvtInterruptDpc;
    intConfig.ShareVector = WdfUseDefault;
    intConfig.ReportInactiveOnPowerDown = WdfUseDefault;
    memmove(&intConfig, Configuration, _a2);
    intConfig.Size = 104;
    Configuration = &intConfig;
  }
  if ( !Configuration->EvtInterruptIsr )
  {
    WPP_IFR_SF_q(v11, 2u, 0xCu, 0xBu, WPP_FxInterruptApi_cpp_Traceguids, Configuration);
    return -1073741811;
  }
  result = FxValidateObjectAttributes(v11, Attributes, Configuration->AutomaticSerialization == 0);
  if ( result >= 0 )
  {
    if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
    {
      FxObjectHandleGetPtr(v11, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
      v20 = pDevice;
    }
    else
    {
      v20 = pDevice;
      pParent = pDevice;
    }
    if ( v20->m_CurrentPnpState == WdfDevStatePnpInit )
    {
      if ( Configuration->InterruptRaw || Configuration->InterruptTranslated )
      {
        v25 = 13;
        goto LABEL_59;
      }
      if ( Configuration->CanWakeDevice )
      {
        v25 = 14;
        goto LABEL_59;
      }
    }
    else
    {
      LOBYTE(pFxDriverGlobals) = 0;
      FxNonPagedObject::Lock(v20, (unsigned __int8 *)&pFxDriverGlobals, v18);
      m_CallbackFlags = v20->m_CallbackFlags;
      FxNonPagedObject::Unlock(v20, (unsigned __int8)pFxDriverGlobals, v22);
      if ( (m_CallbackFlags & 1) == 0 )
      {
        v23 = -1073741436;
        WPP_IFR_SF_qd(v11, 2u, 0xCu, 0xCu, WPP_FxInterruptApi_cpp_Traceguids, Device, -1073741436);
        return v23;
      }
      if ( !Configuration->InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) == 0LL )
      {
        v23 = -1073741436;
        v25 = 15;
        goto LABEL_60;
      }
      if ( Configuration->ShareVector != WdfUseDefault )
      {
        v23 = -1073741436;
        v25 = 16;
LABEL_60:
        WPP_IFR_SF_qd(v11, 2u, 0xCu, v25, WPP_FxInterruptApi_cpp_Traceguids, Configuration, v23);
        return v23;
      }
      v20 = pDevice;
      if ( Configuration->CanWakeDevice )
      {
        if ( (InterruptTranslated->Flags & 0x20) == 0 )
        {
          v25 = 17;
LABEL_59:
          v23 = -1073741811;
          goto LABEL_60;
        }
        if ( !pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner )
        {
          v25 = 18;
          goto LABEL_59;
        }
        if ( FxDevice::IsPdo(pDevice) )
        {
          v25 = 19;
          goto LABEL_59;
        }
      }
    }
    if ( Configuration->EvtInterruptDpc && Configuration->EvtInterruptWorkItem )
    {
      v25 = 20;
      goto LABEL_59;
    }
    if ( Configuration->PassiveHandling )
    {
      if ( Configuration->SpinLock )
      {
        v25 = 24;
        goto LABEL_59;
      }
    }
    else
    {
      if ( Configuration->WaitLock )
      {
        v25 = 21;
        goto LABEL_59;
      }
      if ( Configuration->CanWakeDevice )
      {
        v25 = 22;
        goto LABEL_59;
      }
    }
    if ( v11->FxVerifierOn )
    {
      InterruptRaw = Configuration->InterruptRaw;
      if ( InterruptRaw )
      {
        result = FxPkgPnp::ValidateInterruptResourceCm(
                   v20->m_PkgPnp,
                   InterruptRaw,
                   Configuration->InterruptTranslated,
                   Configuration);
        if ( result < 0 )
          return result;
        v20 = pDevice;
      }
    }
    result = FxInterrupt::_CreateAndInit(v11, v20, pParent, Attributes, Configuration, &pFxInterrupt);
    if ( result >= 0 )
    {
      if ( pFxInterrupt->m_ObjectSize )
        v27 = (unsigned __int64)pFxInterrupt ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v27 = 0LL;
      *v10 = (WDFINTERRUPT__ *)v27;
    }
  }
  return result;
}
