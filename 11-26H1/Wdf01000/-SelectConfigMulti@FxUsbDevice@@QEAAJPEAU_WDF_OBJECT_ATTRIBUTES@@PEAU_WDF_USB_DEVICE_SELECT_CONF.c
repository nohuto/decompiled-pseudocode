/*
 * XREFs of ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A0864
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009DCB0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x140053FFC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x14007D6DC (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x14007E344 (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x14009EA58 (-CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INT.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigMulti(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  void *v3; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v7; // r14
  _WDF_OBJECT_ATTRIBUTES *v9; // rbp
  __int64 m_NumInterfaces; // rdx
  ULONG Tag; // r8d
  _USBD_INTERFACE_LIST_ENTRY *v12; // r15
  unsigned __int8 i; // bl
  __int64 v15; // rdi
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  __int64 v17; // r11
  FxUsbInterface *v18; // rcx
  __int64 m_ObjectSize; // rax
  const void *_a1; // rsi
  unsigned int v21; // ebx
  unsigned __int8 v22; // bp
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rbx
  _FX_DRIVER_GLOBALS *v24; // rcx
  unsigned __int8 v25; // al
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rbx
  unsigned __int8 *p_bLength; // rcx
  unsigned __int64 wTotalLength; // rdx
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  _USB_COMMON_DESCRIPTOR *v30; // r11
  _USB_COMMON_DESCRIPTOR *v31; // rcx
  int v32; // edx
  unsigned __int16 v33; // r9
  unsigned __int16 v34; // ax
  const void *v35; // rsi
  FX_POOL **ConfigRequest; // rdi
  int _a4; // [rsp+38h] [rbp-1A0h]
  unsigned __int8 v38; // [rsp+50h] [rbp-188h]
  unsigned __int8 v39; // [rsp+51h] [rbp-187h]
  void *PPObject; // [rsp+58h] [rbp-180h] BYREF
  __m128i v41; // [rsp+60h] [rbp-178h] BYREF
  _FX_DRIVER_GLOBALS **v42; // [rsp+70h] [rbp-168h]
  _WDF_OBJECT_ATTRIBUTES *v43; // [rsp+78h] [rbp-160h]
  unsigned __int8 *p_NumberOfConfiguredInterfaces; // [rsp+80h] [rbp-158h]
  unsigned __int8 bitArray[256]; // [rsp+90h] [rbp-148h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+0h]

  v3 = retaddr;
  p_m_Globals = &this->m_Globals;
  v43 = PipesAttributes;
  v42 = &this->m_Globals;
  m_Globals = this->m_Globals;
  v7 = 0;
  Params->Types.MultiInterface.NumberOfConfiguredInterfaces = 0;
  p_NumberOfConfiguredInterfaces = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
  v9 = PipesAttributes;
  m_NumInterfaces = this->m_NumInterfaces;
  Tag = m_Globals->Tag;
  v41.m128i_i64[0] = 0LL;
  v41.m128i_i64[1] = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v3 = 0LL;
  v41.m128i_i64[0] = (__int64)FxPoolAllocator(
                                m_Globals,
                                &m_Globals->FxPoolFrameworks,
                                &v41,
                                16 * (m_NumInterfaces + 1),
                                Tag,
                                v3);
  v12 = (_USBD_INTERFACE_LIST_ENTRY *)v41.m128i_i64[0];
  if ( !v41.m128i_i64[0] )
    return 3221225626LL;
  if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
  {
    for ( i = 0; i < this->m_NumInterfaces; ++i )
    {
      v15 = i;
      SettingDescriptor = FxUsbInterface::GetSettingDescriptor(this->m_Interfaces[v15], 0);
      v12[v17].InterfaceDescriptor = SettingDescriptor;
      if ( !SettingDescriptor )
      {
        _mm_lfence();
        v18 = this->m_Interfaces[v15];
        m_ObjectSize = this->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !(_WORD)m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xEu, 0x1Du, WPP_FxusbDeviceKm_cpp_Traceguids, _a1, v18->m_InterfaceNumber);
        v21 = -1073741811;
        goto $Done_62;
      }
    }
LABEL_33:
    ConfigRequest = FxUsbDevice::CreateConfigRequest(this, (FX_POOL *)this->m_ConfigDescriptor, v12);
    if ( ConfigRequest )
    {
      v21 = FxUsbDevice::SelectConfig(this, v9, (_URB *)ConfigRequest, FxUrbTypeLegacy, p_NumberOfConfiguredInterfaces);
      FxPoolFree(ConfigRequest);
    }
    else
    {
      v21 = -1073741670;
    }
  }
  else
  {
    v22 = 0;
    memset(bitArray, 0, 0xFFuLL);
    while ( v7 < Params->Types.SingleInterface.NumberConfiguredPipes )
    {
      InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
      v24 = *p_m_Globals;
      PPObject = 0LL;
      FxObjectHandleGetPtr(v24, (unsigned __int64)InterfaceDescriptors[2 * v7], 0x1204u, &PPObject);
      v38 = (unsigned __int8)InterfaceDescriptors[2 * v7 + 1];
      v39 = *((_BYTE *)PPObject + 146);
      v25 = bitArray[v39];
      if ( (v25 & 1) == 0 )
      {
        m_ConfigDescriptor = this->m_ConfigDescriptor;
        bitArray[v39] = v25 | 1;
        p_bLength = &m_ConfigDescriptor->bLength;
        wTotalLength = m_ConfigDescriptor->wTotalLength;
        do
        {
          DescriptorType = FxUsbFindDescriptorType((char *)m_ConfigDescriptor, wTotalLength, p_bLength, 4);
          if ( !DescriptorType )
            break;
          v31 = DescriptorType;
          v30 = 0LL;
          if ( DescriptorType[1].bLength != v39 )
            v31 = 0LL;
          if ( DescriptorType[1].bDescriptorType == v38 )
            v30 = v31;
          p_bLength = &DescriptorType->bLength + DescriptorType->bLength;
        }
        while ( !v30 );
        v12 = (_USBD_INTERFACE_LIST_ENTRY *)v41.m128i_i64[0];
        p_m_Globals = v42;
        *(_QWORD *)(v41.m128i_i64[0] + 16LL * v22) = v30;
        if ( !v30 )
        {
          v21 = -1073741811;
          v32 = v38;
          v33 = 30;
          _a4 = v39;
          goto LABEL_27;
        }
        ++v22;
      }
      ++v7;
    }
    if ( this->m_NumInterfaces <= v22 )
    {
      v9 = v43;
      goto LABEL_33;
    }
    v21 = -1073741811;
    _a4 = this->m_NumInterfaces;
    v33 = 31;
    v32 = v22;
LABEL_27:
    v34 = this->m_ObjectSize;
    v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v34 )
      v35 = 0LL;
    WPP_IFR_SF_qddd(*p_m_Globals, v32, 0xEu, v33, WPP_FxusbDeviceKm_cpp_Traceguids, v35, v32, _a4, -1073741811);
  }
$Done_62:
  FxPoolFree(v12);
  return v21;
}
