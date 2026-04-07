/*
 * XREFs of McTemplateU0j_EtwEventWriteTransfer @ 0x1800A5D84
 * Callers:
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x1800508EC (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18007CFB4 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0j_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v7 = 0;
  v5 = a3;
  v6 = 16;
  return McGenEventWrite_EtwEventWriteTransfer(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, a3, 2LL, (__int64)v4);
}
