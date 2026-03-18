/*
 * XREFs of ??1FxUsbDevice@@MEAA@XZ @ 0x14003BF80
 * Callers:
 *     ??_EFxUsbDevice@@MEAAPEAXI@Z @ 0x14003C4F0 (--_EFxUsbDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbDevice::~FxUsbDevice(FxUsbDevice *this)
{
  void (__fastcall *m_BusInterfaceDereference)(void *); // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  FxUsbInterface **m_Interfaces; // rcx

  this->__vftable = (FxUsbDevice_vtbl *)FxUsbDevice::`vftable';
  m_BusInterfaceDereference = this->m_BusInterfaceDereference;
  if ( m_BusInterfaceDereference )
  {
    m_BusInterfaceDereference(this->m_BusInterfaceContext);
    this->m_BusInterfaceDereference = 0LL;
  }
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  if ( m_ConfigDescriptor )
  {
    FxPoolFree(m_ConfigDescriptor);
    this->m_ConfigDescriptor = 0LL;
  }
  m_Interfaces = this->m_Interfaces;
  if ( m_Interfaces )
  {
    FxPoolFree(m_Interfaces);
    this->m_Interfaces = 0LL;
  }
  this->m_NumInterfaces = 0;
  this->__vftable = (FxUsbDevice_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this);
}
