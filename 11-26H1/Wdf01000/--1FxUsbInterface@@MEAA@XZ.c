/*
 * XREFs of ??1FxUsbInterface@@MEAA@XZ @ 0x14003CAA4
 * Callers:
 *     ??_EFxUsbInterface@@MEAAPEAXI@Z @ 0x14009FE50 (--_EFxUsbInterface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbInterface::~FxUsbInterface(FxUsbInterface *this)
{
  FxUsbDevice *m_UsbDevice; // rdx
  FxUsbInterface **m_Interfaces; // rcx
  unsigned __int8 i; // al
  FxUsbPipe **m_ConfiguredPipes; // rcx
  FxUsbInterfaceSetting *m_Settings; // rcx

  m_UsbDevice = this->m_UsbDevice;
  this->__vftable = (FxUsbInterface_vtbl *)FxUsbInterface::`vftable';
  m_Interfaces = m_UsbDevice->m_Interfaces;
  if ( m_Interfaces )
  {
    for ( i = 0; i < m_UsbDevice->m_NumInterfaces; ++i )
    {
      if ( m_Interfaces[i] == this )
      {
        m_Interfaces[i] = 0LL;
        break;
      }
    }
  }
  m_ConfiguredPipes = this->m_ConfiguredPipes;
  if ( m_ConfiguredPipes )
  {
    FxPoolFree(m_ConfiguredPipes);
    this->m_ConfiguredPipes = 0LL;
  }
  m_Settings = this->m_Settings;
  this->m_NumberOfConfiguredPipes = 0;
  if ( m_Settings )
  {
    FxPoolFree(m_Settings);
    this->m_Settings = 0LL;
  }
  this->m_UsbDevice->Release(
    this->m_UsbDevice,
    this,
    76,
    "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbinterface.cpp");
  FxNonPagedObject::~FxNonPagedObject(this);
}
