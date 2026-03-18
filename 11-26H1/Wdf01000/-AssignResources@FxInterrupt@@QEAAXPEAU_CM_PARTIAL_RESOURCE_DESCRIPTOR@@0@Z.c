/*
 * XREFs of ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x14007BE54
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x14003A9E4 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400AA20C (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ddLLdiDD @ 0x14007C004 (WPP_IFR_SF_ddLLdiDD.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::AssignResources(
        FxInterrupt *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescTrans)
{
  _KINTERRUPT_MODE v6; // edx
  bool v7; // zf
  __int16 v8; // cx
  unsigned __int8 v9; // al
  $960502E47C9DF6615B5929388F661F48 *v10; // rsi
  unsigned int *p_Vector; // rdi
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 v13; // rdx
  FxDeviceBase_vtbl *v14; // rax
  unsigned __int16 v15; // r9
  __int64 v16; // rdx
  void (__fastcall *SetDeviceTelemetryInfoFlags)(FxDeviceBase *, FxDeviceInfoFlags); // rax
  const _GUID *v18; // [rsp+20h] [rbp-58h]

  this->m_InterruptInfo.Group = CmDescTrans->u.MessageInterrupt.Raw.MessageCount;
  this->m_InterruptInfo.TargetProcessorSet = CmDescTrans->u.Interrupt.Affinity;
  this->m_InterruptInfo.ShareDisposition = CmDescTrans->ShareDisposition;
  v6 = CmDescTrans->Flags & 1;
  v7 = this->m_PassiveHandling == 0;
  this->m_InterruptInfo.Mode = v6;
  this->m_InterruptInfo.Irql = CmDescTrans->u.Connection.Class;
  if ( !v7 )
    this->m_InterruptInfo.Irql = 0;
  v8 = CmDescTrans->Flags & 2;
  this->m_InterruptInfo.MessageSignaled = v8 != 0;
  v9 = v6 == Latched && !v8;
  this->m_IsEdgeTriggeredNonMsiInterrupt = v9;
  if ( v8 && CmDescRaw->u.MessageInterrupt.Raw.MessageCount > 1u )
  {
    v10 = &this->96;
    p_Vector = &this->m_InterruptInfo.Vector;
    m_DeviceBase = this->m_DeviceBase;
    v13 = 8LL;
    this->m_InterruptInfo.Vector = CmDescTrans->u.Generic.Start.HighPart + this->m_InterruptInfo.MessageNumber;
    v14 = m_DeviceBase->FxNonPagedObject::FxObject::__vftable;
LABEL_10:
    v14->SetDeviceTelemetryInfoFlags(m_DeviceBase, (FxDeviceInfoFlags)v13);
    goto LABEL_16;
  }
  v10 = &this->96;
  v7 = v8 == 0;
  p_Vector = &this->m_InterruptInfo.Vector;
  m_DeviceBase = this->m_DeviceBase;
  this->m_InterruptInfo.Vector = CmDescTrans->u.Interrupt.Vector;
  v14 = m_DeviceBase->FxNonPagedObject::FxObject::__vftable;
  if ( !v7 )
  {
    v13 = 4LL;
    goto LABEL_10;
  }
  v16 = 1LL;
  SetDeviceTelemetryInfoFlags = v14->SetDeviceTelemetryInfoFlags;
  if ( (CmDescTrans->Flags & 1) != 0 )
    v16 = 2LL;
  SetDeviceTelemetryInfoFlags(m_DeviceBase, (FxDeviceInfoFlags)v16);
LABEL_16:
  if ( this->m_PassiveHandling )
    v10->m_DeviceBase->SetDeviceTelemetryInfoFlags(v10->m_DeviceBase, DeviceInfoPassiveLevelInterrupt);
  this->m_CmTranslatedResource = CmDescTrans;
  WPP_IFR_SF_ddLLdiDD(
    this->m_Globals,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.MessageSignaled,
    v15,
    v18,
    this->m_InterruptInfo.MessageSignaled,
    this->m_InterruptInfo.MessageNumber,
    this->m_Policy,
    this->m_Priority,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    this->m_InterruptInfo.Irql,
    *p_Vector);
}
