/*
 * XREFs of ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140002E6C
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateUrb @ 0x140002CF0 (imp_WdfUsbTargetDeviceCreateUrb.c)
 * Callees:
 *     ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x1400030A0 (--0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z.c)
 *     USBD_UrbAllocate @ 0x1400031CC (USBD_UrbAllocate.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x140003450 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     USBD_UrbFree @ 0x140066BC0 (USBD_UrbFree.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxUsbDevice::CreateUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *ParentObject; // rdx
  _FX_DRIVER_GLOBALS *v10; // r14
  int v11; // ebx
  signed int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  FxUsbUrb *v15; // rax
  FxObject *v16; // rax
  FxObject *v17; // r14
  WDFMEMORY__ *hMemory; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  _URB *urbLocal; // [rsp+A0h] [rbp+40h] BYREF
  FxObject *pParent; // [rsp+A8h] [rbp+48h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  hMemory = 0LL;
  pParent = 0LL;
  if ( !Attributes )
    goto LABEL_6;
  if ( Attributes->Size != 56 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_qddd(
      m_Globals,
      (unsigned __int8)Attributes,
      6u,
      0xBu,
      WPP_FxValidateFunctions_hpp_Traceguids,
      Attributes,
      56,
      Attributes->Size,
      -1073741820);
    goto LABEL_21;
  }
  ParentObject = Attributes->ParentObject;
  if ( ParentObject )
  {
    FxObjectHandleGetPtr(m_Globals, ParentObject, 0x1000u, (void **)&pParent);
    v10 = pParent->m_Globals;
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, pParent) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x21u, WPP_FxUsbDevice_cpp_Traceguids);
      v11 = -1073741811;
      goto LABEL_21;
    }
  }
  else
  {
LABEL_6:
    v10 = m_Globals;
    pParent = this;
  }
  v11 = FxValidateObjectAttributes(v10, Attributes, 0);
  if ( v11 < 0 )
    goto LABEL_21;
  if ( !UrbMemory )
    FxVerifierNullBugCheck(v10, retaddr);
  *UrbMemory = 0LL;
  v12 = USBD_UrbAllocate(this->m_USBDHandle, &urbLocal);
  v11 = v12;
  if ( v12 < 0 )
  {
    urbLocal = 0LL;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x22u, WPP_FxUsbDevice_cpp_Traceguids, v12);
LABEL_21:
    if ( urbLocal )
      USBD_UrbFree(this->m_USBDHandle, urbLocal);
    return (unsigned int)v11;
  }
  v15 = (FxUsbUrb *)FxObjectHandleAlloc2(v10, v13, 0x88uLL, v14, Attributes, 0, FxObjectTypeExternal);
  if ( !v15 || (FxUsbUrb::FxUsbUrb(v15, v10, this->m_USBDHandle, urbLocal, 0x98uLL), (v17 = v16) == 0LL) )
  {
    v11 = -1073741670;
    goto LABEL_21;
  }
  urbLocal = 0LL;
  v11 = FxObject::Commit(v16, Attributes, (void **)&hMemory, pParent, 1u);
  if ( v11 < 0 )
  {
    FxObject::DeleteFromFailedCreate(v17);
    goto LABEL_21;
  }
  *UrbMemory = hMemory;
  if ( Urb )
    *Urb = (_URB *)((__int64 (__fastcall *)(FxObject *))v17[1].SelfDestruct)(&v17[1]);
  return (unsigned int)v11;
}
