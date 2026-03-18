/*
 * XREFs of ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x140015C40
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x140004B78 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfUsbTargetDeviceIsConnectedSynchronous @ 0x140015C80 (imp_WdfUsbTargetDeviceIsConnectedSynchronous.c)
 * Callees:
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140015D90 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 */

int __fastcall FxUsbDevice::IsConnected(FxUsbDevice *this)
{
  int result; // eax
  unsigned int portStatus; // [rsp+38h] [rbp+10h] BYREF

  portStatus = 0;
  result = FxUsbDevice::GetPortStatus(this, &portStatus);
  if ( result >= 0 && (portStatus & 2) == 0 )
    return -1073741632;
  return result;
}
