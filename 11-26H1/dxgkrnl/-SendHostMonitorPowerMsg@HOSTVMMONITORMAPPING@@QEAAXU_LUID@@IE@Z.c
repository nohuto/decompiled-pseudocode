/*
 * XREFs of ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x1400604B8
 * Callers:
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E6F0 (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     _lambda_3e10a6c53a076eca3525754a494039ed_::operator() @ 0x140081630 (_lambda_3e10a6c53a076eca3525754a494039ed_--operator().c)
 */

void __fastcall HOSTVMMONITORMAPPING::SendHostMonitorPowerMsg(KSPIN_LOCK *this, struct _LUID a2, int a3, char a4)
{
  char *v4; // rbx
  HOSTVMMONITORMAPPING *v6; // rbx
  HOSTVMMONITORMAPPING *v7; // rdx
  _QWORD v8[5]; // [rsp+20h] [rbp-50h] BYREF
  char *v9; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  char v11; // [rsp+68h] [rbp-8h]
  struct _LUID v12; // [rsp+98h] [rbp+28h] BYREF
  int v13; // [rsp+A0h] [rbp+30h] BYREF
  char v14; // [rsp+A8h] [rbp+38h] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  v4 = (char *)(this + 2);
  v11 = 0;
  v9 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v6 = (HOSTVMMONITORMAPPING *)*this;
  v8[0] = &v12;
  v8[1] = &v13;
  v8[2] = &v14;
  v11 = 1;
  do
  {
    if ( v6 == (HOSTVMMONITORMAPPING *)this )
      break;
    v7 = v6;
    v6 = *(HOSTVMMONITORMAPPING **)v6;
  }
  while ( (unsigned __int8)lambda_3e10a6c53a076eca3525754a494039ed_::operator()(v8, v7) );
  if ( v11 )
  {
    v11 = 0;
    *((_QWORD *)v9 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
