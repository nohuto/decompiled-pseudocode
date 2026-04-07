/*
 * XREFs of ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x18003E00C
 * Callers:
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x18003DF60 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18008B5D4 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

char __fastcall CLivePreview::OnNotifyRoundTripReply(CLivePreview *this, int a2, int a3)
{
  char v3; // bl
  __int64 v6; // rcx
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( a2 == *((_DWORD *)this + 106) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmLivePreviewAnimation_Stop,
        a3,
        1,
        (__int64)v7);
    *((_DWORD *)this + 106) = -1;
    return 1;
  }
  if ( a2 == *((_DWORD *)this + 107) )
  {
    if ( !GetSystemMetrics(8193) && (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(
        v6,
        &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info,
        *((unsigned int *)this + 50));
    *((_DWORD *)this + 107) = -1;
    return 1;
  }
  return v3;
}
