/*
 * XREFs of ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x140065344
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403F1C50 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(
        DMMVIDEOPRESENTTARGET *this,
        unsigned int a2,
        int a3)
{
  char v3; // r11
  __int64 v4; // rax
  int v5; // r9d
  __int64 v6; // r8

  v3 = a3;
  v4 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)this + (*((_DWORD *)this + 98) & 0x1F) + 17) = MEMORY[0xFFFFF78000000320];
  v5 = *((_DWORD *)this + 98) + 1;
  *((_DWORD *)this + 98) = v5;
  if ( !a3 )
    return 0;
  v6 = 0LL;
  if ( v4 > a2 )
    v6 = v4 - a2;
  if ( *((_QWORD *)this + (((unsigned __int8)v5 - v3) & 0x1F) + 17) <= v6 || *((_BYTE *)this + 396) )
    return 0;
  *((_BYTE *)this + 396) = 1;
  return 1;
}
