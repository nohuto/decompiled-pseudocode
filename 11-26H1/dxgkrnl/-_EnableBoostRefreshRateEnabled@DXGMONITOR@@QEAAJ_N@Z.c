/*
 * XREFs of ?_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z @ 0x1402763EC
 * Callers:
 *     ?MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z @ 0x14026E560 (-MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x14027FA6C (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_EnableBoostRefreshRateEnabled(DXGMONITOR *this, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int v5; // ebp
  int updated; // esi
  unsigned int v7; // edx
  char v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h]

  v2 = a2;
  if ( a2
    && (*(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 40LL))(
                     *((_QWORD *)this + 21),
                     &v8) & 0x20) == 0 )
  {
    return 3221225659LL;
  }
  v5 = *((_DWORD *)this + 82);
  *((_DWORD *)this + 82) = v2;
  updated = DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(this, 2u);
  if ( updated < 0 )
    *((_DWORD *)this + 82) = v5;
  v7 = *((_DWORD *)this + 45);
  v9 = 0LL;
  DxgkLogCodePointPacket(0x79u, v7, v2, 0, 0LL);
  return (unsigned int)updated;
}
