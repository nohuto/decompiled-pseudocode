/*
 * XREFs of ?GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z @ 0x1403FFACC
 * Callers:
 *     ?_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14027E5C8 (-_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_T.c)
 *     ?MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z @ 0x1403FFA10 (-MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z.c)
 * Callees:
 *     ?MonitorAreSpecializedDisplaysSupported@@YAHXZ @ 0x14005C520 (-MonitorAreSpecializedDisplaysSupported@@YAHXZ.c)
 */

void __fastcall DxgMonitor::MonitorUsageState::GetPseudoSpecializedState(
        DxgMonitor::MonitorUsageState *this,
        bool *a2,
        bool *a3,
        bool *a4)
{
  bool v7; // zf
  int v8; // eax

  *a4 = *((_BYTE *)this + 21);
  *a2 = 0;
  v7 = (unsigned int)MonitorAreSpecializedDisplaysSupported() == 0;
  v8 = *((_DWORD *)this + 4);
  *a3 = !v7;
  if ( v8 )
  {
    if ( !*((_BYTE *)this + 21) )
      goto LABEL_5;
    if ( v8 != 2 )
      return;
  }
  *a2 = !v7;
LABEL_5:
  if ( v8 == 2 )
  {
    if ( *((_BYTE *)this + 22) )
    {
      *a2 = 1;
      *a3 = 1;
    }
  }
}
