/*
 * XREFs of McTemplateU0ji_EtwEventWriteTransfer @ 0x1800A5DE0
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180051170 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180051344 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0ji_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v5[2] = a3;
  v7 = 0;
  v6 = 16;
  v8 = &v11;
  v10 = 0;
  v9 = 8;
  return McGenEventWrite_EtwEventWriteTransfer(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, a3, 3LL, (__int64)v5);
}
