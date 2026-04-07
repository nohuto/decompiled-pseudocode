/*
 * XREFs of McTemplateU0pq_EtwEventWriteTransfer @ 0x1800CC320
 * Callers:
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180014E80 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pq_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[6]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+90h] [rbp+18h] BYREF
  int v7; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a3;
  v5[3] = 8LL;
  v5[2] = &v6;
  v5[5] = 4LL;
  v5[4] = &v7;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (unsigned int)&UdwmSystemAnimation_DelayShowHide,
           a3,
           3,
           (__int64)v5);
}
