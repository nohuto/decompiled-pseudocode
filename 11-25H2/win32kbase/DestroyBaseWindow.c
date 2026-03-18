/*
 * XREFs of DestroyBaseWindow @ 0x1401C17B0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D25A0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HMDestroyObject @ 0x1400F6780 (HMDestroyObject.c)
 *     CleanupInputDelegation @ 0x14013AEC0 (CleanupInputDelegation.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401C167C (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     HandleBaseWindowDestruction @ 0x140216250 (HandleBaseWindowDestruction.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DestroyBaseWindow(struct tagBWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  void (__fastcall *v5)(struct tagBWND *); // rax
  char **v6; // rsi
  char *v7; // rdi
  __int64 v8; // rax
  __int64 UserSessionState; // rax
  char *v10; // rcx
  __int64 v11; // rdx
  char *v12; // rcx

  *((_DWORD *)a1 + 7) |= 0x80u;
  if ( *((_DWORD *)a1 + 18) )
    CleanupInputDelegation((int *)a1, a2);
  v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48);
  v5 = *(void (__fastcall **)(struct tagBWND *))(v3 + 7248);
  if ( v5 )
    v5(a1);
  if ( *((_QWORD *)a1 + 10) )
  {
    DeleteBaseWindowProperties(a1, v3);
    GreDeleteFastMutex(*((char **)a1 + 10));
    *((_QWORD *)a1 + 10) = 0LL;
  }
  v6 = (char **)((char *)a1 + 96);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (char *)v6 )
      break;
    if ( *((char ***)v7 + 1) != v6 || (v8 = *(_QWORD *)v7, *(char **)(*(_QWORD *)v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = (char *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    UserSessionState = W32GetUserSessionState(v4, v3);
    CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(UserSessionState + 3256), *((_QWORD *)v7 + 2), 7u);
    GreDeleteFastMutex(v7);
  }
  v10 = (char *)*((_QWORD *)a1 + 15);
  if ( v10 )
  {
    GreDeleteFastMutex(v10);
    *((_QWORD *)a1 + 15) = 0LL;
  }
  HandleBaseWindowDestruction(a1);
  v12 = (char *)*((_QWORD *)a1 + 17);
  if ( v12 )
  {
    GreDeleteFastMutex(v12);
    *((_QWORD *)a1 + 17) = 0LL;
  }
  *((_QWORD *)a1 + 7) = 0LL;
  return HMDestroyObject(a1, v11);
}
