/*
 * XREFs of McTemplateU0pddddddd_EtwEventWriteTransfer @ 0x1800D024C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CE8B0 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pddddddd_EtwEventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  _BYTE v11[16]; // [rsp+30h] [rbp-79h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-69h]
  __int64 v13; // [rsp+48h] [rbp-61h]
  int *v14; // [rsp+50h] [rbp-59h]
  __int64 v15; // [rsp+58h] [rbp-51h]
  char *v16; // [rsp+60h] [rbp-49h]
  __int64 v17; // [rsp+68h] [rbp-41h]
  char *v18; // [rsp+70h] [rbp-39h]
  __int64 v19; // [rsp+78h] [rbp-31h]
  char *v20; // [rsp+80h] [rbp-29h]
  __int64 v21; // [rsp+88h] [rbp-21h]
  char *v22; // [rsp+90h] [rbp-19h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  char *v24; // [rsp+A0h] [rbp-9h]
  __int64 v25; // [rsp+A8h] [rbp-1h]
  char *v26; // [rsp+B0h] [rbp+7h]
  __int64 v27; // [rsp+B8h] [rbp+Fh]
  __int64 v28; // [rsp+F0h] [rbp+47h] BYREF
  int v29; // [rsp+F8h] [rbp+4Fh] BYREF

  v29 = a4;
  v28 = a3;
  v13 = 8LL;
  v12 = &v28;
  v15 = 4LL;
  v14 = &v29;
  v17 = 4LL;
  v16 = &a5;
  v19 = 4LL;
  v18 = &a6;
  v20 = &a7;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (unsigned int)&UdwmSystemAnimation_CreateVisual,
           a3,
           9,
           (__int64)v11);
}
