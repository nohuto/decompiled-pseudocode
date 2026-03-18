/*
 * XREFs of imp_WdfUsbTargetDeviceSelectConfig @ 0x14009DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qDd @ 0x140017BE4 (WPP_IFR_SF_qDd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x140053FFC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_qqddd @ 0x14007F870 (WPP_IFR_SF_qqddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqDLd @ 0x14009D17C (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x14009D2BC (WPP_IFR_SF_qqLd.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x14009F78C (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009FCC4 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A0864 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A0BC4 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSelectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS *v8; // rsi
  __int64 result; // rax
  unsigned int _a2; // ecx
  unsigned int v11; // ebx
  unsigned __int16 v12; // r9
  unsigned int v13; // edi
  unsigned int m_NumInterfaces; // r8d
  _WdfUsbTargetDeviceSelectConfigType Type; // edx
  _URB *_a3; // rax
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rcx
  unsigned __int8 *p_NumberOfConfiguredInterfaces; // rax
  const void *v20; // r10
  int NumberConfiguredPipes; // ecx
  const void *v22; // r10
  unsigned int i; // edi
  _USB_INTERFACE_DESCRIPTOR **v24; // r12
  int v25; // edx
  int m_NumSettings; // ecx
  int v27; // ecx
  const void *v28; // rax
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-30h]
  unsigned __int64 retaddr; // [rsp+88h] [rbp+38h]
  FxUsbDevice *pUsbDevice; // [rsp+90h] [rbp+40h] BYREF
  FxUsbInterface *pUsbInterface; // [rsp+A8h] [rbp+58h] BYREF

  pUsbInterface = 0LL;
  pUsbDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice,
    (_FX_DRIVER_GLOBALS **)&pUsbInterface);
  if ( !Params )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)pUsbInterface, retaddr);
  v8 = (_FX_DRIVER_GLOBALS *)pUsbInterface;
  result = FxVerifierCheckIrqlLevel((_FX_DRIVER_GLOBALS *)pUsbInterface, 0);
  if ( (int)result >= 0 )
  {
    _a2 = Params->Size;
    if ( Params->Size != 32 )
    {
      v11 = -1073741820;
      WPP_IFR_SF_DDd(
        v8,
        (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
        0xEu,
        0xFu,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        _a2,
        0x20u,
        -1073741820);
      return v11;
    }
    if ( (unsigned int)(Params->Type - 1) > 5 )
    {
      v11 = -1073741811;
      WPP_IFR_SF_dd(v8, 2u, 0xEu, 0x10u, WPP_FxUsbDeviceAPI_cpp_Traceguids, 32, -1073741811);
      return v11;
    }
    result = FxValidateObjectAttributes(v8, PipesAttributes, 1);
    if ( (int)result < 0 )
      return result;
    if ( pUsbDevice->m_MismatchedInterfacesInConfigDescriptor )
    {
      v13 = -1073741808;
      WPP_IFR_SF_qDd(
        v8,
        (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
        0xEu,
        0x12u,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        UsbDevice,
        Params->Type,
        0xC0000010);
      return v13;
    }
    m_NumInterfaces = pUsbDevice->m_NumInterfaces;
    if ( !(_BYTE)m_NumInterfaces )
    {
      WPP_IFR_SF_qDd(
        v8,
        (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
        0xEu,
        0x13u,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        UsbDevice,
        Params->Type,
        0);
      return 0LL;
    }
    Type = Params->Type;
    if ( Type == WdfUsbTargetDeviceSelectConfigTypeDeconfig )
      return (unsigned int)FxUsbDevice::Deconfig(pUsbDevice);
    if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeSingleInterface )
    {
      if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
      {
        if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeInterfacesPairs )
        {
          if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeInterfacesDescriptor )
          {
            InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
            p_NumberOfConfiguredInterfaces = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
            if ( !InterfaceDescriptors || !*(_DWORD *)p_NumberOfConfiguredInterfaces )
            {
              v13 = -1073741811;
              WPP_IFR_SF_qqDLd(
                v8,
                Type,
                m_NumInterfaces,
                v12,
                (const _GUID *)ObjectGlobals,
                UsbDevice,
                InterfaceDescriptors,
                *(_DWORD *)p_NumberOfConfiguredInterfaces,
                Params->Type);
              return v13;
            }
            return (unsigned int)FxUsbDevice::SelectConfigDescriptor(pUsbDevice, PipesAttributes, Params);
          }
          else
          {
            if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeUrb )
              return (unsigned int)-1073741811;
            _a3 = Params->Types.Urb.Urb;
            if ( !_a3 || _a3->UrbHeader.Function || _a3->UrbHeader.Length < 0x40u )
            {
              v13 = -1073741811;
              WPP_IFR_SF_qqLd(
                v8,
                (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
                0xEu,
                0x15u,
                WPP_FxUsbDeviceAPI_cpp_Traceguids,
                UsbDevice,
                _a3,
                Type,
                -1073741811);
              return v13;
            }
            return (unsigned int)FxUsbDevice::SelectConfig(pUsbDevice, PipesAttributes, _a3, FxUrbTypeLegacy, 0LL);
          }
        }
        if ( !Params->Types.Descriptor.InterfaceDescriptors )
        {
          v13 = -1073741811;
          if ( pUsbDevice->m_ObjectSize )
            v20 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v20 = 0LL;
          WPP_IFR_SF_qd(v8, 2u, 0xEu, 0x16u, WPP_FxUsbDeviceAPI_cpp_Traceguids, v20, -1073741811);
          return v13;
        }
        NumberConfiguredPipes = Params->Types.SingleInterface.NumberConfiguredPipes;
        if ( (_BYTE)NumberConfiguredPipes != (_BYTE)m_NumInterfaces )
        {
          v13 = -1073741811;
          if ( pUsbDevice->m_ObjectSize )
            v22 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v22 = 0LL;
          WPP_IFR_SF_qddd(
            v8,
            (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
            0xEu,
            0x17u,
            WPP_FxUsbDeviceAPI_cpp_Traceguids,
            v22,
            NumberConfiguredPipes,
            m_NumInterfaces,
            -1073741811);
          return v13;
        }
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= Params->Types.SingleInterface.NumberConfiguredPipes )
          return (unsigned int)FxUsbDevice::SelectConfigMulti(pUsbDevice, PipesAttributes, Params);
        pUsbInterface = 0LL;
        v24 = Params->Types.Descriptor.InterfaceDescriptors;
        FxObjectHandleGetPtr(
          (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
          (unsigned __int64)v24[2 * i],
          0x1204u,
          (void **)&pUsbInterface);
        v25 = LOBYTE(v24[2 * i + 1]);
        m_NumSettings = pUsbInterface->m_NumSettings;
        if ( (unsigned __int8)v25 >= (unsigned __int8)m_NumSettings )
          break;
      }
      v27 = m_NumSettings - 1;
      if ( pUsbDevice->m_ObjectSize )
        v28 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v28 = 0LL;
      v11 = -1073741811;
      WPP_IFR_SF_qqddd(
        v8,
        (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
        0xEu,
        0x18u,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        v28,
        v24[2 * i],
        v25,
        v27,
        -1073741811);
      return v11;
    }
    return (unsigned int)FxUsbDevice::SelectConfigSingle(pUsbDevice, PipesAttributes, Params);
  }
  return result;
}
