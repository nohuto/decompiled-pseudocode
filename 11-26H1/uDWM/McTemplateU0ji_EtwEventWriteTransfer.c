/*
 * XREFs of McTemplateU0ji_EtwEventWriteTransfer @ 0x1800989C0
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18003EAFC (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18003ECD0 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0ji_EtwEventWriteTransfer(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD v5[6]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+98h] [rbp+20h] BYREF

  v6 = a4;
  v5[2] = a3;
  v5[4] = &v6;
  v5[3] = 16LL;
  v5[5] = 8LL;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           a2,
           a3,
           3,
           (__int64)v5);
}
