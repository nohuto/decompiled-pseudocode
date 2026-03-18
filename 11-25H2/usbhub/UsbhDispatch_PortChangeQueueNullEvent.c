/*
 * XREFs of UsbhDispatch_PortChangeQueueNullEvent @ 0x1400068C8
 * Callers:
 *     UsbhPCE_Disable @ 0x140003E98 (UsbhPCE_Disable.c)
 *     UsbhPCE_wRun @ 0x140004C18 (UsbhPCE_wRun.c)
 *     UsbhHubRunPortChangeQueue @ 0x140005E40 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessIsr @ 0x14000AC30 (UsbhHubProcessIsr.c)
 *     UsbhPCE_Enable @ 0x14000D168 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x14000D350 (UsbhPCE_Resume.c)
 *     UsbhPCE_psSUSPEND @ 0x140036F5C (UsbhPCE_psSUSPEND.c)
 *     UsbhPCE_BusDisconnect @ 0x140043EDC (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_BusReset @ 0x140043F9C (UsbhPCE_BusReset.c)
 *     UsbhPCE_Close @ 0x140044124 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x1400441E4 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_ResumeDone @ 0x1400444A8 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x140044568 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SD_Resume @ 0x140044628 (UsbhPCE_SD_Resume.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEvent @ 0x1400068F0 (UsbhDispatch_PortChangeQueueEvent.c)
 */

__int64 __fastcall UsbhDispatch_PortChangeQueueNullEvent(int a1, int a2, int a3, int a4)
{
  return UsbhDispatch_PortChangeQueueEvent(a1, a2, a3, a4, 0LL, 0, 0LL);
}
