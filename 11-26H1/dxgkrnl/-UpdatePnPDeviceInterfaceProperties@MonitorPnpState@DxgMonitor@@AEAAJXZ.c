/*
 * XREFs of ?UpdatePnPDeviceInterfaceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ @ 0x140422F38
 * Callers:
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x1403E251C (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorPnpState::UpdatePnPDeviceInterfaceProperties(DxgMonitor::MonitorPnpState *this)
{
  unsigned int v1; // ebx
  _WORD *v3; // rsi
  __int64 result; // rax
  int v5; // eax
  int v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 1) )
    return 3221226021LL;
  if ( !*((_BYTE *)this + 16) )
    return 3221226021LL;
  v3 = (_WORD *)((char *)this + 48);
  if ( !*((_QWORD *)this + 7) || !*v3 )
    return 3221226021LL;
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, &v7);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  result = IoSetDeviceInterfacePropertyData(v3, &DEVPKEY_Monitor_AdapterLuid, 0LL, 0LL, 8, 8, &v7);
  if ( (int)result >= 0 )
  {
    v5 = IoSetDeviceInterfacePropertyData(v3, &DEVPKEY_Monitor_TargetId, 0LL, 0LL, 7, 4, &v6);
    if ( v5 < 0 )
      return (unsigned int)v5;
    return v1;
  }
  return result;
}
