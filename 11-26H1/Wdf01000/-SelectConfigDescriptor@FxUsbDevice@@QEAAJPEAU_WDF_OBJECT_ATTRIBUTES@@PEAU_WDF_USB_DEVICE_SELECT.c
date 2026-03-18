/*
 * XREFs of ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009FCC4
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009DCB0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x140053FFC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x14009EA58 (-CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INT.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigDescriptor(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  FX_POOL *ConfigurationDescriptor; // r14
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rsi
  __int64 NumInterfaceDescriptors; // rbx
  __int64 v8; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  bool v13; // zf
  ULONG Tag; // r8d
  void *v15; // rcx
  FX_POOL **v16; // rax
  _USBD_INTERFACE_LIST_ENTRY *v17; // rbp
  unsigned int v18; // ebx
  FX_POOL **v19; // rcx
  __int64 v20; // rdx
  FX_POOL *v21; // rax
  FX_POOL **ConfigRequest; // rax
  FX_POOL **v23; // rsi
  __m128i v24; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  ConfigurationDescriptor = (FX_POOL *)Params->Types.Descriptor.ConfigurationDescriptor;
  InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
  NumInterfaceDescriptors = Params->Types.Descriptor.NumInterfaceDescriptors;
  v8 = 0LL;
  m_Globals = this->m_Globals;
  while ( (unsigned int)v8 < (unsigned int)NumInterfaceDescriptors )
  {
    if ( !InterfaceDescriptors[v8] )
      return 3221225485LL;
    v8 = (unsigned int)(v8 + 1);
  }
  v11 = (unsigned int)(NumInterfaceDescriptors + 1);
  if ( (unsigned int)v11 < (unsigned int)NumInterfaceDescriptors )
    return 3221225621LL;
  v12 = 16 * v11;
  if ( v12 > 0xFFFFFFFF )
    return 3221225621LL;
  v13 = m_Globals->FxPoolTrackingOn == 0;
  Tag = m_Globals->Tag;
  v24.m128i_i64[0] = 0LL;
  v24.m128i_i64[1] = 64LL;
  if ( v13 )
    v15 = 0LL;
  else
    v15 = retaddr;
  v16 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v24, (unsigned int)v12, Tag, v15);
  v17 = (_USBD_INTERFACE_LIST_ENTRY *)v16;
  if ( v16 )
  {
    if ( (_DWORD)NumInterfaceDescriptors )
    {
      v19 = v16;
      v20 = NumInterfaceDescriptors;
      do
      {
        v21 = (FX_POOL *)*InterfaceDescriptors++;
        *v19 = v21;
        v19 += 2;
        --v20;
      }
      while ( v20 );
    }
    if ( !ConfigurationDescriptor )
      ConfigurationDescriptor = (FX_POOL *)this->m_ConfigDescriptor;
    ConfigRequest = FxUsbDevice::CreateConfigRequest(this, ConfigurationDescriptor, v17);
    v23 = ConfigRequest;
    if ( ConfigRequest )
    {
      v18 = FxUsbDevice::SelectConfig(this, PipesAttributes, (_URB *)ConfigRequest, FxUrbTypeLegacy, 0LL);
      FxPoolFree(v23);
    }
    else
    {
      v18 = -1073741670;
    }
    FxPoolFree(v17);
  }
  else
  {
    v18 = -1073741670;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x13u, WPP_FxUsbDevice_cpp_Traceguids, 0xC000009A);
  }
  return v18;
}
