/*
 * XREFs of ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x140276288
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403F3AF8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(DXGMONITOR *this)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d
  char v4; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]

  v9 = 0LL;
  v10 = 0;
  v2 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( !v2 || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 184LL))(v2, &v9) < 0 )
    return 3221226021LL;
  v3 = v9;
  v4 = *((_BYTE *)this + 176);
  v5 = v4 | 0x80;
  v6 = v4 & 0x7F;
  if ( (unsigned int)v9 >= HIDWORD(v9) )
  {
    v3 = HIDWORD(v9);
    v5 = v6;
  }
  v7 = *((_BYTE *)this + 177);
  *((_BYTE *)this + 176) = v5;
  *((_BYTE *)this + 177) = v7 & 0xFE | (v3 < 0x400);
  return 0LL;
}
