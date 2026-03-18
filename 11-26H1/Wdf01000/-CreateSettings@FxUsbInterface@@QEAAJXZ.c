/*
 * XREFs of ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x14009FE88
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x14009F36C (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x14007D610 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x14007D6DC (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     WPP_IFR_SF_dddd @ 0x1400938A8 (WPP_IFR_SF_dddd.c)
 *     WPP_IFR_SF_dddddd @ 0x1400A03B0 (WPP_IFR_SF_dddddd.c)
 */

__int64 __fastcall FxUsbInterface::CreateSettings(FxUsbInterface *this)
{
  FxUsbDevice *m_UsbDevice; // rdi
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  unsigned __int8 m_InterfaceNumber; // r11
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 m_NumSettings; // rdx
  void *v7; // rax
  FX_POOL **v8; // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  unsigned __int8 *p_bLength; // r8
  _USB_COMMON_DESCRIPTOR *v12; // rax
  _USB_INTERFACE_DESCRIPTOR *v13; // rdx
  int bLength; // r8d
  int bDescriptorType; // eax
  int v16; // r9d
  unsigned __int8 i; // di
  int v18; // edx
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // rsi
  unsigned int bNumEndpoints; // ebp
  _USB_COMMON_DESCRIPTOR *v21; // rax
  _USB_CONFIGURATION_DESCRIPTOR *v22; // r11
  __int64 v23; // rdx
  _USB_COMMON_DESCRIPTOR *v24; // r9
  int v25; // esi
  const _GUID *_a4; // [rsp+20h] [rbp-58h]
  FxUsbValidateDescriptorOp globals; // [rsp+30h] [rbp-48h]
  int v28; // [rsp+50h] [rbp-28h]
  __m128i v29; // [rsp+60h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  m_UsbDevice = this->m_UsbDevice;
  DescriptorType = FxUsbFindDescriptorType(
                     (char *)m_UsbDevice->m_ConfigDescriptor,
                     m_UsbDevice->m_ConfigDescriptor->wTotalLength,
                     &m_UsbDevice->m_ConfigDescriptor->bLength,
                     4);
  if ( DescriptorType )
  {
    m_InterfaceNumber = this->m_InterfaceNumber;
    do
    {
      if ( m_InterfaceNumber == DescriptorType[1].bLength )
        ++this->m_NumSettings;
      DescriptorType = FxUsbFindDescriptorType(
                         (char *)m_UsbDevice->m_ConfigDescriptor,
                         m_UsbDevice->m_ConfigDescriptor->wTotalLength,
                         &DescriptorType->bLength + DescriptorType->bLength,
                         4);
    }
    while ( DescriptorType );
  }
  m_Globals = this->m_Globals;
  m_NumSettings = this->m_NumSettings;
  v29.m128i_i64[0] = 0LL;
  v29.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v7 = retaddr;
  else
    v7 = 0LL;
  v8 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v29, 8 * m_NumSettings, m_Globals->Tag, v7);
  this->m_Settings = (FxUsbInterfaceSetting *)v8;
  if ( v8 )
  {
    m_ConfigDescriptor = this->m_UsbDevice->m_ConfigDescriptor;
    p_bLength = &m_ConfigDescriptor->bLength;
    while ( 1 )
    {
      v12 = FxUsbFindDescriptorType((char *)m_ConfigDescriptor, m_ConfigDescriptor->wTotalLength, p_bLength, 4);
      v13 = (_USB_INTERFACE_DESCRIPTOR *)v12;
      if ( !v12 )
        break;
      bLength = v12[1].bLength;
      if ( this->m_InterfaceNumber == (_BYTE)bLength )
      {
        bDescriptorType = v12[1].bDescriptorType;
        v16 = this->m_NumSettings;
        if ( (unsigned __int8)bDescriptorType >= (unsigned __int8)v16 )
        {
          WPP_IFR_SF_dddd(
            this->m_Globals,
            2u,
            0xEu,
            0xBu,
            WPP_FxUsbInterface_cpp_Traceguids,
            bLength,
            v16,
            bDescriptorType,
            -1073741808);
          return 3221225488LL;
        }
        this->m_Settings[bDescriptorType].InterfaceDescriptor = v13;
      }
      p_bLength = &v13->bLength + v13->bLength;
      m_ConfigDescriptor = this->m_UsbDevice->m_ConfigDescriptor;
    }
    for ( i = 0; ; ++i )
    {
      v18 = this->m_NumSettings;
      if ( i >= (unsigned __int8)v18 )
        break;
      InterfaceDescriptor = this->m_Settings[i].InterfaceDescriptor;
      if ( !InterfaceDescriptor )
      {
        WPP_IFR_SF_dddd(
          this->m_Globals,
          2u,
          0xEu,
          0xCu,
          WPP_FxUsbInterface_cpp_Traceguids,
          this->m_InterfaceNumber,
          v18,
          i,
          -1073741808);
        return 3221225488LL;
      }
      bNumEndpoints = InterfaceDescriptor->bNumEndpoints;
      if ( (_BYTE)bNumEndpoints )
      {
        v21 = FxUsbFindDescriptorType(
                (char *)this->m_UsbDevice->m_ConfigDescriptor,
                this->m_UsbDevice->m_ConfigDescriptor->wTotalLength,
                &InterfaceDescriptor->bLength,
                4);
        v24 = (_USB_COMMON_DESCRIPTOR *)(&v22->bLength + v23);
        if ( v21 )
          v24 = v21;
        v25 = FxUsbValidateDescriptorType(
                this->m_Globals,
                v22,
                &InterfaceDescriptor->bLength,
                v24,
                5,
                7uLL,
                globals,
                bNumEndpoints);
        if ( v25 < 0 )
        {
          WPP_IFR_SF_dd(
            this->m_Globals,
            2u,
            0xEu,
            0xDu,
            WPP_FxUsbInterface_cpp_Traceguids,
            this->m_InterfaceNumber,
            v25);
          return (unsigned int)v25;
        }
      }
    }
    return 0LL;
  }
  else
  {
    WPP_IFR_SF_dddddd(
      this->m_Globals,
      this->m_Protocol,
      this->m_InterfaceNumber,
      this->m_NumSettings,
      _a4,
      this->m_NumSettings,
      this->m_InterfaceNumber,
      this->m_Protocol,
      this->m_Class,
      this->m_SubClass,
      v28);
    return 3221225626LL;
  }
}
