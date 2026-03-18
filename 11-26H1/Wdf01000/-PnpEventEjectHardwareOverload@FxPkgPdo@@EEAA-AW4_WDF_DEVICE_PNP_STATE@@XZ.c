/*
 * XREFs of ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1400A3390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x140067FA8 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventEjectHardwareOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v5; // rcx
  signed int _a1; // eax
  int _a3; // esi
  unsigned int v8; // ebp
  unsigned int v9; // edx
  FxVerifierDownlevelOption v10; // r9d
  _FX_DRIVER_GLOBALS *v11; // rcx
  FxDeviceDescriptionEntry *m_Description; // rdx
  FxChildList *m_DeviceList; // rbp
  int updated; // eax
  FxDeviceBase *v15; // rcx
  const void *v16; // rax
  unsigned __int16 v17; // dx
  _DEVICE_OBJECT *_a2; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  MxEvent *p_m_ScanEvent; // rcx
  _FX_DRIVER_GLOBALS *v21; // rax
  MxEvent *event; // [rsp+60h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_Method = this->m_DeviceEject.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( !m_Method )
    goto LABEL_8;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v5 = 0LL;
  _a1 = m_Method((WDFDEVICE__ *)v5);
  _a3 = _a1;
  if ( _a1 < 0 )
  {
    v8 = 258;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x11u, WPP_FxPkgPdo_cpp_Traceguids, _a1);
    if ( _a3 == -1073741637 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxPkgPdo_cpp_Traceguids);
      if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(this->m_Globals, v9, 0xBu, v10) )
        FxVerifierDbgBreakPoint(v11);
    }
  }
  else
  {
LABEL_8:
    m_Description = this->m_Description;
    m_DeviceList = m_Description->m_DeviceList;
    updated = FxChildList::UpdateAsMissing(m_DeviceList, m_Description->m_IdentificationDescription);
    v15 = this->m_DeviceBase;
    _a3 = updated;
    v16 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v17 = v15->m_ObjectSize;
    _a2 = v15->m_DeviceObject.m_DeviceObject;
    m_Globals = this->m_Globals;
    if ( _a3 < 0 )
    {
      if ( !v17 )
        v16 = 0LL;
      WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0xFu, WPP_FxPkgPdo_cpp_Traceguids, v16, _a2, _a3);
    }
    else
    {
      if ( !v17 )
        v16 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0xEu, WPP_FxPkgPdo_cpp_Traceguids, v16, _a2);
    }
    p_m_ScanEvent = &m_DeviceList->m_ScanEvent;
    event = &m_DeviceList->m_ScanEvent;
    v21 = this->m_Globals;
    if ( v21->FxVerboseOn )
    {
      WPP_IFR_SF_q(v21, 5u, 0xCu, 0x10u, WPP_FxPkgPdo_cpp_Traceguids, &event);
      p_m_ScanEvent = event;
    }
    KeWaitForSingleObject(p_m_ScanEvent, Executive, 0, 0, 0LL);
    v8 = 260;
  }
  this->m_PendingPnPIrp->IoStatus.Status = _a3;
  KeSetEvent(&this->m_DeviceEjectProcessed->m_Event, 0, 0);
  return v8;
}
