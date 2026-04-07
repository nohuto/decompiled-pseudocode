/*
 * XREFs of ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x180080730
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18002D6B0 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18008069C (--1CTouchDragVisual@@MEAA@XZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x18009A580 (-StopTimer@CTouchDragVisual@@MEAAJXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

void __fastcall CTouchDragVisual::Stop(CTouchDragVisual *this)
{
  __int64 v2; // r8
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  CTouchDragVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( !*((_BYTE *)this + 401) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmTouchDragVisual_End,
        v2,
        1LL,
        (__int64)v3);
    *((_BYTE *)this + 401) = 1;
  }
}
