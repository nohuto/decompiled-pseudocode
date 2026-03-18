/*
 * XREFs of ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400AA32C
 * Callers:
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400AA20C (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x14001A8D0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x14001AA98 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14001AE64 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x14001C730 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x14001DFA8 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxInterrupt::InitializeWorker(
        FxInterrupt *this,
        FxObject *Parent,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  unsigned __int16 m_Type; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _WDF_TRI_STATE ReportInactiveOnPowerDown; // ecx
  unsigned __int8 PassiveHandling; // al
  WDFSPINLOCK__ *SpinLock; // rdx
  unsigned __int64 *p_m_Lock; // rax
  FxDeviceBase *v12; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int8 v14; // r9
  __int64 result; // rax
  unsigned int v16; // r9d
  WDFWAITLOCK__ *v17; // rdx
  signed int v18; // eax
  unsigned int v19; // esi
  signed int v20; // eax
  unsigned int v21; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *v23; // rsi
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-40h] BYREF
  WDFWAITLOCK__ *waitLock; // [rsp+C0h] [rbp+40h] BYREF
  IFxHasCallbacks *callbacks; // [rsp+C8h] [rbp+48h] BYREF
  FxObject *tmpObject; // [rsp+D0h] [rbp+50h] BYREF

  m_Type = Parent->m_Type;
  m_Globals = this->m_Globals;
  this->m_EvtInterruptIsr = Configuration->EvtInterruptIsr;
  this->m_EvtInterruptDpc = Configuration->EvtInterruptDpc;
  this->m_EvtInterruptWorkItem = Configuration->EvtInterruptWorkItem;
  ReportInactiveOnPowerDown = Configuration->ReportInactiveOnPowerDown;
  tmpObject = 0LL;
  callbacks = 0LL;
  if ( ReportInactiveOnPowerDown )
  {
    if ( ReportInactiveOnPowerDown == WdfTrue )
      this->m_UseSoftDisconnect = 1;
  }
  else
  {
    this->m_UseSoftDisconnect = 0;
  }
  PassiveHandling = Configuration->PassiveHandling;
  this->m_PassiveHandling = PassiveHandling;
  SpinLock = Configuration->SpinLock;
  if ( SpinLock )
  {
    waitLock = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)SpinLock, 0x1024u, (void **)&waitLock);
    *((_BYTE *)waitLock + 121) = 1;
    p_m_Lock = (unsigned __int64 *)(waitLock + 28);
LABEL_9:
    this->m_SpinLock = p_m_Lock;
    goto LABEL_10;
  }
  if ( !PassiveHandling )
  {
    p_m_Lock = &this->m_BuiltInSpinLock.m_Lock;
    goto LABEL_9;
  }
LABEL_10:
  v12 = FxDeviceBase::_SearchForDevice((unsigned __int64)Parent, &callbacks);
  m_DeviceBase = this->m_DeviceBase;
  if ( !m_DeviceBase || v12 != m_DeviceBase || (unsigned __int16)(m_Type - 4098) > 1u )
  {
    m_ObjectSize = Parent->m_ObjectSize;
    v23 = (const void *)((unsigned __int64)Parent ^ 0xFFFFFFFFFFFFFFF8uLL);
    v21 = -1073741811;
    if ( !m_ObjectSize )
      v23 = 0LL;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0x12u, WPP_InterruptObject_cpp_Traceguids, v23, Configuration, 0xC000000D);
    return v21;
  }
  if ( Configuration->EvtInterruptWorkItem )
  {
    v14 = 1;
  }
  else if ( Configuration->EvtInterruptDpc )
  {
    v14 = 0;
  }
  else
  {
    v14 = this->m_PassiveHandling != 0;
  }
  result = FxObject::_GetEffectiveLock(
             Parent,
             callbacks,
             Configuration->AutomaticSerialization,
             v14,
             &this->m_CallbackLock,
             &tmpObject);
  if ( (int)result >= 0 )
  {
    if ( m_Type == 4099 )
      FxObject::MarkNoDeleteDDI(Parent, ObjectLock);
    if ( this->m_PassiveHandling )
    {
      v17 = Configuration->WaitLock;
      if ( v17 )
        FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)v17, 0x1023u, (void **)&this->m_WaitLock);
      if ( !this->m_WaitLock )
      {
        waitLock = 0LL;
        attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
        memset(&attributes, 0, 24);
        attributes.Size = 56;
        memset(&attributes.ParentObject, 0, 24);
        attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
        v18 = FxWaitLock::_Create(m_Globals, &attributes, 0LL, 0, &waitLock);
        v19 = v18;
        if ( v18 < 0 )
        {
          WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x13u, WPP_InterruptObject_cpp_Traceguids, v18);
          return v19;
        }
        FxObjectHandleGetPtr(m_Globals, (unsigned __int64)waitLock, 0x1023u, (void **)&this->m_WaitLock);
        this->m_DisposeWaitLock = 1;
      }
    }
    if ( !this->m_EvtInterruptWorkItem && (!unk_1400C9090 || !this->m_EvtInterruptDpc) )
      return 0LL;
    v20 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SystemWorkItem,
            v16);
    v21 = v20;
    if ( v20 >= 0 )
      return 0LL;
    WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x14u, WPP_InterruptObject_cpp_Traceguids, v20);
    return v21;
  }
  return result;
}
