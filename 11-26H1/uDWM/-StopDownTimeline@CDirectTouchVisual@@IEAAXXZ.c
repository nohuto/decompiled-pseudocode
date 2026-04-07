/*
 * XREFs of ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180006558
 * Callers:
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x180002A30 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180005F38 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180006480 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall CDirectTouchVisual::StopDownTimeline(CDirectTouchVisual *this, __int64 a2, int a3)
{
  CTimelineBase *v4; // rcx
  _BYTE v5[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 38) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmDirectTouchDownAnimation_End,
        a3,
        1,
        (__int64)v5);
    v4 = (CTimelineBase *)*((_QWORD *)this + 38);
    if ( v4 )
    {
      CTimelineBase::Release(v4);
      *((_QWORD *)this + 38) = 0LL;
    }
  }
}
