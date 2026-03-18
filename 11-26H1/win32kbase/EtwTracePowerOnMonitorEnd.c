/*
 * XREFs of EtwTracePowerOnMonitorEnd @ 0x140148A94
 * Callers:
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1401D5828 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1400F4FF8 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePowerOnMonitorEnd(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &PowerOnMonitorEnd, a3, a1);
  return result;
}
