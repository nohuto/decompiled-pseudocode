/*
 * XREFs of McTemplateU0jq_EtwEventWriteTransfer @ 0x18008AC98
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003F510 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0jq_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[6]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+98h] [rbp+20h] BYREF

  v6 = a4;
  v5[2] = a3;
  v5[4] = &v6;
  v5[3] = 16LL;
  v5[5] = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (unsigned int)&UdwmAnimationClock_Create,
           a3,
           3,
           (__int64)v5);
}
