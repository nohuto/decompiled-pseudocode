/*
 * XREFs of DestroyBaseWindow @ 0x1401EA340
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004D5C0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     CleanupInputDelegation @ 0x1400B8D00 (CleanupInputDelegation.c)
 *     HMDestroyObject @ 0x1401186A0 (HMDestroyObject.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401EA218 (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     HandleBaseWindowDestruction @ 0x14021B6B0 (HandleBaseWindowDestruction.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DestroyBaseWindow(struct tagBWND *a1, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall *v8)(struct tagBWND *); // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char **v12; // rsi
  char *v13; // rdi
  __int64 v14; // rax
  __int64 UserSessionState; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rcx

  *((_DWORD *)a1 + 7) |= 0x80u;
  if ( *((_DWORD *)a1 + 18) )
    CleanupInputDelegation(a1, a2, a3);
  v4 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48);
  v8 = *(void (__fastcall **)(struct tagBWND *))(v4 + 6808);
  if ( v8 )
    v8(a1);
  if ( *((_QWORD *)a1 + 10) )
  {
    DeleteBaseWindowProperties(a1, v4, v6);
    GreDeleteFastMutex(*((char **)a1 + 10), v9, v10, v11);
    *((_QWORD *)a1 + 10) = 0LL;
  }
  v12 = (char **)((char *)a1 + 96);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 == (char *)v12 )
      break;
    if ( *((char ***)v13 + 1) != v12 || (v14 = *(_QWORD *)v13, *(char **)(*(_QWORD *)v13 + 8LL) != v13) )
      __fastfail(3u);
    *v12 = (char *)v14;
    *(_QWORD *)(v14 + 8) = v12;
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(UserSessionState + 3256), *((_QWORD *)v13 + 2), 7);
    GreDeleteFastMutex(v13, v16, v17, v18);
  }
  v19 = (char *)*((_QWORD *)a1 + 15);
  if ( v19 )
  {
    GreDeleteFastMutex(v19, v4, v6, v7);
    *((_QWORD *)a1 + 15) = 0LL;
  }
  HandleBaseWindowDestruction(a1);
  v23 = (char *)*((_QWORD *)a1 + 17);
  if ( v23 )
  {
    GreDeleteFastMutex(v23, v20, v21, v22);
    *((_QWORD *)a1 + 17) = 0LL;
  }
  *((_QWORD *)a1 + 7) = 0LL;
  return HMDestroyObject(a1, v20, v21);
}
