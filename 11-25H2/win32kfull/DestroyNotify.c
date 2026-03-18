/*
 * XREFs of DestroyNotify @ 0x1400CA3C0
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x14002F920 (xxxProcessNotifyWinEvent.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140067260 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeThreadsWinEvents @ 0x1400CA1C0 (FreeThreadsWinEvents.c)
 *     xxxProcessTSFEvent @ 0x1400CADAC (xxxProcessTSFEvent.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x14026936C (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyNotify(_QWORD *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  void **v9; // rcx
  __int64 v10; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42320)) != 1 )
    __int2c();
  v6 = W32GetUserSessionState(v5, v4);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 42320)) != 1 )
    __int2c();
  v8 = (_QWORD *)*a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v9 = (void **)a1[1], *v9 != a1) )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = v9;
  a1[1] = a1;
  *a1 = a1;
  if ( !*((_DWORD *)a1 + 6) )
    HMAssignmentUnlock(a1 + 2);
  v10 = W32GetUserSessionState(v9, v7);
  if ( a1 == (_QWORD *)(v10 + 70624) )
    *(_DWORD *)(v10 + 70696) = 0;
  else
    Win32FreePool(a1);
}
