/*
 * XREFs of ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x140065BB8
 * Callers:
 *     ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x140065AD0 (-GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 *     imp_WdfUsbTargetPipeGetInformation @ 0x140065B50 (imp_WdfUsbTargetPipeGetInformation.c)
 * Callees:
 *     ?GetMaxPacketSize@FxUsbPipe@@QEAAKXZ @ 0x140065C20 (-GetMaxPacketSize@FxUsbPipe@@QEAAKXZ.c)
 *     ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x140065D4C (-GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ.c)
 */

void __fastcall FxUsbPipe::GetInformation(FxUsbPipe *this, _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  unsigned int MaxPacketSize; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  _WDF_USB_PIPE_TYPE v7; // edx

  MaxPacketSize = FxUsbPipe::GetMaxPacketSize(this);
  *(_DWORD *)(v5 + 4) = MaxPacketSize;
  *(_BYTE *)(v5 + 8) = *(_BYTE *)(v4 + 386);
  *(_BYTE *)(v5 + 9) = *(_BYTE *)(v4 + 387);
  v6 = *(int *)(v4 + 388);
  if ( (unsigned int)v6 >= 4 )
    v7 = WdfUsbPipeTypeInvalid;
  else
    v7 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[v6];
  PipeInformation->PipeType = v7;
  PipeInformation->MaximumTransferSize = *(_DWORD *)(v4 + 400);
  PipeInformation->SettingIndex = FxUsbInterface::GetConfiguredSettingIndex(*(FxUsbInterface **)(v4 + 368));
}
