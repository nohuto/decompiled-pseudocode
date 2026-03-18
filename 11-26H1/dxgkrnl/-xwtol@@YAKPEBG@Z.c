/*
 * XREFs of ?xwtol@@YAKPEBG@Z @ 0x14042A730
 * Callers:
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x14019BD70 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1403E398C (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ParseModeCap @ 0x140415F80 (ParseModeCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xwtol(const unsigned __int16 *a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax

  v2 = 0;
  while ( 1 )
  {
    v3 = *a1;
    if ( v3 >= 0x30 && v3 <= 0x39 )
    {
      v2 = v3 + 2 * (5 * v2 - 24);
      goto LABEL_6;
    }
    if ( v3 != 32 )
      return v2;
LABEL_6:
    ++a1;
  }
}
