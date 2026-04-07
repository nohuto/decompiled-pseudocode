/*
 * XREFs of ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ @ 0x180078B40
 * Callers:
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x1800E2064 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall CWindowArrangementTransition::OnWindowArrangementEnd(
        CWindowArrangementTransition *this,
        __int64 a2,
        int a3)
{
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 16) )
  {
    *((_QWORD *)this + 1) = 0LL;
    *((_BYTE *)this + 16) = 0;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmGlassSheetFadeOut_Start,
        a3,
        1,
        (__int64)v3);
  }
}
