/*
 * XREFs of UsbhDispatch_PortChangeQueueNullEvent @ 0x14001E924
 * Callers:
 *     UsbhPCE_Enable @ 0x140013680 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x140013878 (UsbhPCE_Resume.c)
 *     UsbhPCE_Disable @ 0x140013E18 (UsbhPCE_Disable.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhPCE_wRun @ 0x14001DD9C (UsbhPCE_wRun.c)
 *     UsbhHubRunPortChangeQueue @ 0x14001DE80 (UsbhHubRunPortChangeQueue.c)
 *     UsbhPCE_psSUSPEND @ 0x14003517C (UsbhPCE_psSUSPEND.c)
 *     UsbhPCE_BusDisconnect @ 0x140043A00 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_BusReset @ 0x140043AC0 (UsbhPCE_BusReset.c)
 *     UsbhPCE_Close @ 0x140043C48 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x140043D08 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_ResumeDone @ 0x140043FCC (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x14004408C (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SD_Resume @ 0x14004414C (UsbhPCE_SD_Resume.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEvent @ 0x14001E94C (UsbhDispatch_PortChangeQueueEvent.c)
 */

__int64 __fastcall UsbhDispatch_PortChangeQueueNullEvent(int a1, int a2, int a3, int a4)
{
  return UsbhDispatch_PortChangeQueueEvent(a1, a2, a3, a4, 0LL, 0, 0LL);
}
