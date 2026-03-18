/*
 * XREFs of UsbhDispatch_PortChangeQueueEvent @ 0x14001E94C
 * Callers:
 *     UsbhQueuePauseChange @ 0x1400142C4 (UsbhQueuePauseChange.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x14001E924 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhPCE_QueueChange @ 0x140030160 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x140043DD8 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_QueueDriverReset @ 0x140043EE4 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_SoftDisconnect @ 0x1400441FC (UsbhPCE_SoftDisconnect.c)
 *     UsbhPCE_wChangeERROR @ 0x1400442FC (UsbhPCE_wChangeERROR.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 */

__int64 __fastcall UsbhDispatch_PortChangeQueueEvent(int a1, int a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
