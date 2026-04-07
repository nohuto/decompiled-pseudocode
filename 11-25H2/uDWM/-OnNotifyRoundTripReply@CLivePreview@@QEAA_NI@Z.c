/*
 * XREFs of ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x18006E4A4
 * Callers:
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x18006E400 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180097EBC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

char __fastcall CLivePreview::OnNotifyRoundTripReply(CLivePreview *this, int a2, int a3)
{
  char v3; // bl
  __int64 v6; // rcx
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( a2 == *((_DWORD *)this + 126) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmLivePreviewAnimation_Stop,
        a3,
        1,
        (__int64)v7);
    *((_DWORD *)this + 126) = -1;
    return 1;
  }
  if ( a2 == *((_DWORD *)this + 127) )
  {
    if ( !GetSystemMetrics(8193) && (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(
        v6,
        &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info,
        *((unsigned int *)this + 64));
    *((_DWORD *)this + 127) = -1;
    return 1;
  }
  return v3;
}
