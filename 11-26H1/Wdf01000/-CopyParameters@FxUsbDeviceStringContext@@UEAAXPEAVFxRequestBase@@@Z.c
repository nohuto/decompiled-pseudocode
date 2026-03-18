/*
 * XREFs of ?CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x14009F280
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140065DC0 (-CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

void __fastcall FxUsbDeviceStringContext::CopyParameters(FxUsbDeviceStringContext *this, FxRequestBase *Request)
{
  unsigned __int8 bLength; // cl
  unsigned __int64 v5; // rax
  unsigned __int64 RequiredSize; // rdi
  IFxMemory *v7; // rsi
  IFxMemory *m_RequestMemory; // rcx
  void *(__fastcall *GetBuffer)(IFxMemory *); // rax
  _USB_STRING_DESCRIPTOR *m_StringDescriptor; // rbx
  void *v11; // rax

  bLength = this->m_StringDescriptor->bLength;
  if ( (bLength & 1) != 0 || bLength < 2u )
  {
    this->m_CompletionParams.IoStatus.Status = -1073741668;
  }
  else if ( Request->m_Irp.m_Irp->IoStatus.Status >= 0 )
  {
    this->m_UsbParameters.Parameters.DeviceString.RequiredSize = bLength - 2;
    v5 = this->m_RequestMemory->GetBufferSize(this->m_RequestMemory);
    RequiredSize = this->m_UsbParameters.Parameters.DeviceString.RequiredSize;
    if ( RequiredSize <= v5 )
    {
      m_RequestMemory = this->m_RequestMemory;
      this->m_CompletionParams.IoStatus.Information = RequiredSize;
      GetBuffer = m_RequestMemory->GetBuffer;
    }
    else
    {
      v7 = this->m_RequestMemory;
      this->m_CompletionParams.IoStatus.Status = -2147483643;
      RequiredSize = v7->GetBufferSize(v7);
      m_RequestMemory = v7;
      GetBuffer = v7->GetBuffer;
    }
    m_StringDescriptor = this->m_StringDescriptor;
    v11 = GetBuffer(m_RequestMemory);
    memmove(v11, m_StringDescriptor->bString, RequiredSize);
  }
  FxUsbRequestContext::CopyParameters(this, Request);
}
