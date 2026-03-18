/*
 * XREFs of UsbhDispatch_PortChangeQueueEvent @ 0x1400068F0
 * Callers:
 *     UsbhQueuePauseChange @ 0x140003C48 (UsbhQueuePauseChange.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x1400068C8 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhHubProcessIsr @ 0x14000AC30 (UsbhHubProcessIsr.c)
 *     UsbhPCE_QueueChange @ 0x140034868 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1400442B4 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_QueueDriverReset @ 0x1400443C0 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_SoftDisconnect @ 0x1400446D8 (UsbhPCE_SoftDisconnect.c)
 *     UsbhPCE_wChangeERROR @ 0x1400447D8 (UsbhPCE_wChangeERROR.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 */

__int64 __fastcall UsbhDispatch_PortChangeQueueEvent(int a1, int a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
