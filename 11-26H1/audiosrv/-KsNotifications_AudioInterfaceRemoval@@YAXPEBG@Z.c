/*
 * XREFs of ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180068520
 * Callers:
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800684D0 (-DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x18008E518 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?RemoveAt@?$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z @ 0x180123DAC (-RemoveAt@-$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KsNotifications_AudioInterfaceRemoval(const unsigned __int16 *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  CKsNotificationsMonitor *v4; // rdi
  const unsigned __int16 *v5; // rax
  __int64 v6; // rcx
  int v7; // r8d

  EnterCriticalSection(&g_csKsNotificationMonitors);
  v2 = (_QWORD *)g_lstKsNotificationMonitors;
  while ( v2 )
  {
    v3 = v2;
    v4 = (CKsNotificationsMonitor *)v2[2];
    v2 = (_QWORD *)*v2;
    v5 = a1;
    do
    {
      v6 = *(const unsigned __int16 *)((char *)v5 + *((_QWORD *)v4 + 2) - (_QWORD)a1);
      v7 = *v5 - (_DWORD)v6;
      if ( v7 )
        break;
      ++v5;
    }
    while ( (_DWORD)v6 );
    if ( !v7 )
    {
      TList<CKsNotificationsMonitor>::RemoveAt(v6, v3);
      CKsNotificationsMonitor::Dispose(v4);
      (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  LeaveCriticalSection(&g_csKsNotificationMonitors);
}
