/*
 * XREFs of ?ClearColorProfile@MonitorColorState@DxgMonitor@@QEAAJXZ @ 0x140361DC0
 * Callers:
 *     ?MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z @ 0x140361CE4 (-MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::ClearColorProfile(DxgMonitor::MonitorColorState *this)
{
  _OWORD v2[3]; // [rsp+30h] [rbp-30h] BYREF

  memset(v2, 0, 36);
  *(_OWORD *)((char *)this + 200) = v2[0];
  *(_OWORD *)((char *)this + 216) = v2[1];
  *(_OWORD *)((char *)this + 344) = 0u;
  *((_DWORD *)this + 58) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  return (unsigned __int8)-!DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources(this);
}
