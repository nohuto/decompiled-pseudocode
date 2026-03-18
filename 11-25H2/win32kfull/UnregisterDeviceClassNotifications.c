/*
 * XREFs of UnregisterDeviceClassNotifications @ 0x140126F10
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401263A8 (xxxRemoteDisconnect.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?EnterMediaCrit@@YAXXZ @ 0x140126FC4 (-EnterMediaCrit@@YAXXZ.c)
 *     ?LeaveMediaCrit@@YAXXZ @ 0x14026F448 (-LeaveMediaCrit@@YAXXZ.c)
 */

void UnregisterDeviceClassNotifications()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rdi
  void *v4; // rbx
  PVOID **v5; // rdi
  PVOID *v6; // rbx
  PVOID *v7; // rax

  EnterMediaCrit();
  UserSessionState = W32GetUserSessionState(v1, v0);
  v3 = UserSessionState;
  v4 = *(void **)(UserSessionState + 69880);
  if ( v4 )
  {
    *(_QWORD *)(UserSessionState + 69880) = 0LL;
    LeaveMediaCrit();
    IoUnregisterPlugPlayNotification(v4);
    EnterMediaCrit();
  }
  v5 = (PVOID **)(v3 + 69888);
  while ( 1 )
  {
    v6 = *v5;
    if ( (*v5)[1] != v5 || (v7 = (PVOID *)*v6, *((PVOID **)*v6 + 1) != v6) )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = v5;
    LeaveMediaCrit();
    if ( v6 == (PVOID *)v5 )
      break;
    IoUnregisterPlugPlayNotification(v6[3]);
    Win32FreePool(v6);
    EnterMediaCrit();
  }
}
