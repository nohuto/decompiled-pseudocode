/*
 * XREFs of McTemplateU0qq_EtwEventWriteTransfer @ 0x1800B8C38
 * Callers:
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800B8410 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qq_EtwEventWriteTransfer(__int64 a1, int a2, int a3, int a4)
{
  _QWORD v5[6]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+90h] [rbp+18h] BYREF
  int v7; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a3;
  v5[3] = 4LL;
  v5[2] = &v6;
  v5[5] = 4LL;
  v5[4] = &v7;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           a2,
           a3,
           3,
           (__int64)v5);
}
