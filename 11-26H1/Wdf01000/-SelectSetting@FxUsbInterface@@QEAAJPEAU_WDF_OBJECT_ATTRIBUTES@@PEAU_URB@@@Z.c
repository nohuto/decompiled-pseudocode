/*
 * XREFs of ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074C44
 * Callers:
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x140074B20 (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x14007FDA0 (imp_WdfUsbInterfaceSelectSetting.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1400A0250 (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x140013DB0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1400177F0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x14001D928 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14002A290 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14002AE00 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x140055F5C (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x140055FD0 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x14007E7A8 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x14009E11C (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 */

__int64 __fastcall FxUsbInterface::SelectSetting(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _FILE_OBJECT *Urb)
{
  unsigned __int8 v5; // dl
  unsigned int v6; // edi
  unsigned int _a2; // eax
  int v8; // esi
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  FX_POOL **v15; // r12
  unsigned __int8 i; // r13
  FX_POOL **v17; // rax
  FxIoTarget *v18; // rax
  FxIoTarget *v19; // r15
  signed int v20; // eax
  unsigned __int16 v21; // r9
  FxObject **v22; // rbx
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+40h] [rbp-C8h] BYREF
  _LIST_ENTRY pendHead; // [rsp+50h] [rbp-B8h] BYREF
  FxSyncRequest request; // [rsp+60h] [rbp-A8h] BYREF
  void *retaddr; // [rsp+1D0h] [rbp+C8h]
  _USBD_INTERFACE_INFORMATION *InterfaceInfo; // [rsp+1D8h] [rbp+D0h]

  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, this->m_Globals, 0LL, 0LL);
  v6 = 0;
  if ( !this->m_ConfiguredPipes || this->m_CurAlternateSetting != BYTE3(Urb->FsContext2) )
  {
    request.__vftable = (FxSyncRequest_vtbl *)&pendHead.Blink;
    pendHead.Blink = (_LIST_ENTRY *)&pendHead.Blink;
    _a2 = (unsigned __int16)Urb->Type;
    if ( (unsigned __int16)_a2 >= 0x18u )
    {
      v8 = FxRequestBase::ValidateTarget(
             *(FxRequestBase **)&request.m_ClearContextOnDestroy,
             (unsigned __int64)this->m_UsbDevice);
      if ( v8 >= 0 )
      {
        InterfaceInfo = (_USBD_INTERFACE_INFORMATION *)&Urb->FsContext2;
        LODWORD(v9) = ((unsigned int)LOWORD(Urb->FsContext2) - 24) / 0x18;
        if ( (_BYTE)v9 )
          v10 = 8LL * (unsigned __int8)v9;
        else
          v10 = 8LL;
        m_Globals = this->m_Globals;
        v12 = retaddr;
        options.Timeout = 0LL;
        pendHead.Flink = (_LIST_ENTRY *)64;
        if ( !m_Globals->FxPoolTrackingOn )
          v12 = 0LL;
        v15 = FxPoolAllocator(
                m_Globals,
                &m_Globals->FxPoolFrameworks,
                (__m128i *)&options.Timeout,
                v10,
                m_Globals->Tag,
                v12);
        if ( v15 )
        {
          for ( i = 0; i < (unsigned __int8)v9; ++i )
          {
            v17 = FxObjectHandleAlloc2(this->m_Globals, v13, 0x1B0uLL, v14, PipesAttributes, 0, FxObjectTypeExternal);
            if ( v17 )
            {
              FxUsbPipe::FxUsbPipe((FxUsbPipe *)v17, this->m_Globals, this->m_UsbDevice);
              v19 = v18;
            }
            else
            {
              v19 = 0LL;
            }
            v15[i] = (FX_POOL *)v19;
            if ( !v19 )
            {
              v20 = -1073741670;
              v8 = -1073741670;
              v21 = 18;
              goto LABEL_25;
            }
            v20 = FxIoTarget::Init(v19, this->m_UsbDevice->m_DeviceBase);
            v8 = v20;
            if ( v20 < 0 )
            {
              v21 = 19;
              goto LABEL_25;
            }
            v20 = FxObject::Commit(v19, PipesAttributes, 0LL, this, 1u);
            v8 = v20;
            if ( v20 < 0 )
            {
              v21 = 20;
LABEL_25:
              WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v21, WPP_FxUsbInterface_cpp_Traceguids, v20);
              goto LABEL_26;
            }
          }
          if ( this->m_ConfiguredPipes )
            FxUsbDevice::CleanupInterfacePipesAndDelete(this->m_UsbDevice, this);
          options.Timeout = 0x500000010LL;
          pendHead.Flink = (_LIST_ENTRY *)-20000000LL;
          FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, Urb, FxUrbTypeLegacy, 0LL);
          v8 = FxIoTarget::SubmitSync(
                 this->m_UsbDevice,
                 *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                 (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                 0LL);
          if ( v8 >= 0 )
          {
            this->m_NumberOfConfiguredPipes = v9;
            this->m_ConfiguredPipes = (FxUsbPipe **)v15;
            FxUsbInterface::SetInfo(this, InterfaceInfo);
            goto LABEL_32;
          }
LABEL_26:
          if ( (_BYTE)v9 )
          {
            v22 = (FxObject **)v15;
            v9 = (unsigned __int8)v9;
            do
            {
              if ( *v22 )
                FxObject::DeleteFromFailedCreate(*v22);
              ++v22;
              --v9;
            }
            while ( v9 );
          }
          FxPoolFree(v15);
        }
        else
        {
          v8 = -1073741670;
          WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxUsbInterface_cpp_Traceguids, 0xC000009A);
        }
      }
LABEL_32:
      v6 = v8;
    }
    else
    {
      v6 = -1073741811;
      WPP_IFR_SF_DDd(this->m_Globals, v5, 0xEu, 0x10u, WPP_FxUsbInterface_cpp_Traceguids, _a2, 0x18u, -1073741811);
    }
  }
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return v6;
}
