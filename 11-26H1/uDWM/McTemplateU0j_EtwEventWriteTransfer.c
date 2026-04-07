/*
 * XREFs of McTemplateU0j_EtwEventWriteTransfer @ 0x180098968
 * Callers:
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18003FA78 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18006E624 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0j_EtwEventWriteTransfer(__int64 a1, int a2, __int64 a3)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF

  v4[2] = a3;
  v4[3] = 16LL;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           a2,
           a3,
           2,
           (__int64)v4);
}
