/*
 * XREFs of ?GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z @ 0x1400835DC
 * Callers:
 *     imp_WdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x14007D270 (imp_WdfUsbTargetDeviceRetrieveConfigDescriptor.c)
 * Callees:
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall FxUsbDevice::GetConfigDescriptor(
        FxUsbDevice *this,
        void *ConfigDescriptor,
        unsigned __int16 *ConfigDescriptorLength)
{
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rdx
  __int64 result; // rax
  unsigned __int16 wTotalLength; // r8
  unsigned __int16 v9; // cx
  unsigned int v10; // ebx

  m_ConfigDescriptor = this->m_ConfigDescriptor;
  if ( ConfigDescriptor )
  {
    wTotalLength = m_ConfigDescriptor->wTotalLength;
    v9 = *ConfigDescriptorLength;
    v10 = *ConfigDescriptorLength < wTotalLength ? 0xC0000023 : 0;
    if ( *ConfigDescriptorLength >= wTotalLength )
      v9 = m_ConfigDescriptor->wTotalLength;
    memmove(ConfigDescriptor, m_ConfigDescriptor, v9);
    result = v10;
    *ConfigDescriptorLength = this->m_ConfigDescriptor->wTotalLength;
  }
  else
  {
    *ConfigDescriptorLength = m_ConfigDescriptor->wTotalLength;
    return 3221225507LL;
  }
  return result;
}
