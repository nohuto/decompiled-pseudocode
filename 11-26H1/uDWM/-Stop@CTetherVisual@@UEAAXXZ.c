/*
 * XREFs of ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800C8A50
 * Callers:
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800C8534 (--1CTetherVisual@@MEAA@XZ.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800C88CC (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800C8998 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800C8C00 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800C8B10 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 *     ?UpdateVisual@CTetherVisual@@IEAAJXZ @ 0x1800C8C84 (-UpdateVisual@CTetherVisual@@IEAAJXZ.c)
 */

void __fastcall CTetherVisual::Stop(CTetherVisual *this)
{
  int v2; // r8d
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  CTetherVisual::StopTimer(this);
  CTetherVisual::UpdateVisual(this);
  if ( *((_BYTE *)this + 296) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmTetherVisual_End,
      v2,
      1,
      (__int64)v3);
  *((_BYTE *)this + 296) = 0;
}
