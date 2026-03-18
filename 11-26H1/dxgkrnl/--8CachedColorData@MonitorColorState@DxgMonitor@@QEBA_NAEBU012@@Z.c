/*
 * XREFs of ??8CachedColorData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z @ 0x140362EA4
 * Callers:
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DxgMonitor::MonitorColorState::CachedColorData::operator==(_BYTE *a1, _BYTE *a2)
{
  return *a1 == *a2 && RtlCompareMemory(a1 + 4, a2 + 4, 0x20uLL) == 32;
}
