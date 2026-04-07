/*
 * XREFs of ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180053038
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180052E4C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800530C8 (-Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall GetScalingInfoForMonitor(HMONITOR a1, struct SCALINGINFO *a2)
{
  __int64 result; // rax
  int v4; // ecx
  __int128 v5; // xmm1
  __int128 v6; // [rsp+20h] [rbp-60h]
  __int128 v7; // [rsp+48h] [rbp-38h] BYREF
  __int128 v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-18h]

  v9 = 0;
  *(_QWORD *)&v6 = 100LL;
  *((_QWORD *)&v6 + 1) = 0x6000000064LL;
  v8 = 0LL;
  v7 = v6;
  result = CImmersiveOrPrimaryMonitor::Init((CImmersiveOrPrimaryMonitor *)&v7, a1);
  v4 = v9;
  v5 = v8;
  *(_OWORD *)a2 = v7;
  *((_OWORD *)a2 + 1) = v5;
  *((_DWORD *)a2 + 8) = v4;
  return result;
}
