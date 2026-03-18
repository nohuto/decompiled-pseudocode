/*
 * XREFs of ?OnDwmWindowNotificationClientRegistered@@YAJH@Z @ 0x1402CF6E0
 * Callers:
 *     NtUserDwmWindowNotificationsEnabled @ 0x1402B1900 (NtUserDwmWindowNotificationsEnabled.c)
 * Callees:
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x14003139C (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140290E10 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 *     DwmAsyncNotifyForegroundChange @ 0x1402957B0 (DwmAsyncNotifyForegroundChange.c)
 *     DwmAsyncWindowNotificationsStateSynced @ 0x1403477D8 (DwmAsyncWindowNotificationsStateSynced.c)
 */

__int64 __fastcall OnDwmWindowNotificationClientRegistered(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *i; // rsi
  __int64 v13; // rdi
  int v14; // ebx
  void *v15; // rax
  __int64 v16; // rdi
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rdx
  CHECKPOINT *v22; // rax
  void *v23; // rax
  __int64 UserSessionState; // rax

  if ( (_DWORD)a1 )
  {
    v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19176);
    *(_DWORD *)(v2 + 48) |= 0x400u;
    if ( *(_QWORD *)(W32GetUserSessionState(v2, v3) + 18928) )
    {
      v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18928);
      if ( *(_QWORD *)(v5 + 128) )
      {
        v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18928);
        v7 = **(_QWORD **)(v6 + 128);
        v9 = (void *)ReferenceDwmApiPort(v6, v8);
        DwmAsyncNotifyForegroundChange(v9, v7);
      }
    }
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19176) + 8LL) + 24LL);
    for ( i = *(__int64 **)(v11 + 112); i; i = (__int64 *)i[11] )
    {
      v13 = *i;
      v14 = *(_DWORD *)(i[5] + 28);
      v15 = (void *)ReferenceDwmApiPort(v11, v10);
      DwmAsyncChildStyleChange(v15, v13, 4294967280LL, v14);
      v16 = *i;
      v17 = *(_DWORD *)(i[5] + 24);
      v20 = (void *)ReferenceDwmApiPort(v19, v18);
      DwmAsyncChildStyleChange(v20, v16, 4294967276LL, v17);
      v22 = CHECKPOINT::Get((const struct tagWND *)i, v21);
      if ( v22 )
        CHECKPOINT::SendNormalToDwm(v22, (const struct tagWND *)i);
    }
    v23 = (void *)ReferenceDwmApiPort(v11, v10);
    DwmAsyncWindowNotificationsStateSynced(v23);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    *(_DWORD *)(*(_QWORD *)(UserSessionState + 19176) + 48LL) &= ~0x400u;
  }
  return 0LL;
}
