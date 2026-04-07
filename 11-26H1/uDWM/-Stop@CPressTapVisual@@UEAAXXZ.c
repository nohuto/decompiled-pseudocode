/*
 * XREFs of ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800BC640
 * Callers:
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800BC2D0 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800BC720 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800BC6B0 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 */

void __fastcall CPressTapVisual::Stop(CPressTapVisual *this)
{
  __int64 v2; // r8
  int v3; // r8d
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  CPressTapVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0, v2);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmPressTapVisual_End,
      v3,
      1,
      (__int64)v4);
}
