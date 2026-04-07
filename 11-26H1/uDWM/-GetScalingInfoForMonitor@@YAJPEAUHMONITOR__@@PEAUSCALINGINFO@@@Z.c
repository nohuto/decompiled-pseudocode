/*
 * XREFs of ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180061530
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180061344 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800615BC (-Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall GetScalingInfoForMonitor(HMONITOR a1, struct SCALINGINFO *a2)
{
  __int64 result; // rax
  int v4; // ecx
  __int128 v5; // xmm1
  __int128 v6; // [rsp+20h] [rbp-30h] BYREF
  __int128 v7; // [rsp+30h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-10h]

  *(_QWORD *)&v6 = 100LL;
  *((_QWORD *)&v6 + 1) = 0x6000000064LL;
  v8 = 0;
  v7 = 0LL;
  result = CImmersiveOrPrimaryMonitor::Init((CImmersiveOrPrimaryMonitor *)&v6, a1);
  v4 = v8;
  v5 = v7;
  *(_OWORD *)a2 = v6;
  *((_OWORD *)a2 + 1) = v5;
  *((_DWORD *)a2 + 8) = v4;
  return result;
}
