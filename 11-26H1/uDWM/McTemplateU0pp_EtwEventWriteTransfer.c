/*
 * XREFs of McTemplateU0pp_EtwEventWriteTransfer @ 0x1800BFACC
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18002AB54 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18003A69C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18006580C (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 McTemplateU0pp_EtwEventWriteTransfer(__int64 a1, int a2, ...)
{
  _QWORD v3[6]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v4; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+18h]
  va_list va1; // [rsp+98h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v4 = va_arg(va1, _QWORD);
  v3[3] = 8LL;
  va_copy((va_list)&v3[2], va);
  v3[5] = 8LL;
  va_copy((va_list)&v3[4], va1);
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           a2,
           v4,
           3,
           (__int64)v3);
}
