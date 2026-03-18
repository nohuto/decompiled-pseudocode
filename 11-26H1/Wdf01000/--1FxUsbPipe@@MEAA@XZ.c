/*
 * XREFs of ??1FxUsbPipe@@MEAA@XZ @ 0x14003BE98
 * Callers:
 *     ??_GFxUsbPipe@@MEAAPEAXI@Z @ 0x14003C320 (--_GFxUsbPipe@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbPipe::~FxUsbPipe(FxUsbPipe *this)
{
  FxUsbInterface *m_UsbInterface; // rdx
  FxUsbPipe **m_ConfiguredPipes; // rcx
  __int64 i; // rax

  m_UsbInterface = this->m_UsbInterface;
  this->__vftable = (FxUsbPipe_vtbl *)FxUsbPipe::`vftable';
  if ( m_UsbInterface )
  {
    m_ConfiguredPipes = m_UsbInterface->m_ConfiguredPipes;
    if ( m_ConfiguredPipes )
    {
      for ( i = 0LL; (unsigned int)i < m_UsbInterface->m_NumberOfConfiguredPipes; i = (unsigned int)(i + 1) )
      {
        if ( m_ConfiguredPipes[i] == this )
        {
          m_ConfiguredPipes[i] = 0LL;
          break;
        }
      }
    }
    this->m_UsbInterface->Release(
      this->m_UsbInterface,
      this,
      1100,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
  }
  this->__vftable = (FxUsbPipe_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this);
}
