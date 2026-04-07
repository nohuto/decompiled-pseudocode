/*
 * XREFs of ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800C8998
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800A9128 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800C8A50 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800C8B90 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall CTetherVisual::Start(CTetherVisual *this, const struct tagPOINT *a2, const struct tagPOINT *a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmTetherVisual_Start,
      (_DWORD)a3,
      1,
      (__int64)v9);
  *((_BYTE *)this + 296) = 1;
  updated = CTetherVisual::UpdatePosition(this, a2, a3);
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xD2u, 0LL);
    CTetherVisual::Stop(this);
  }
  return v7;
}
