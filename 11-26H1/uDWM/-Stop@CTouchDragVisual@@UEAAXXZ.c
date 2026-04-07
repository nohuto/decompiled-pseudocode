/*
 * XREFs of ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800796F0
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18008782C (--1CTouchDragVisual@@MEAA@XZ.c)
 * Callees:
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180006510 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall CTouchDragVisual::Stop(CTouchDragVisual *this)
{
  __int64 v2; // r8
  int v3; // r8d
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  CTouchVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0, v2);
  if ( !*((_BYTE *)this + 421) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmTouchDragVisual_End,
        v3,
        1,
        (__int64)v4);
    *((_BYTE *)this + 421) = 1;
  }
}
