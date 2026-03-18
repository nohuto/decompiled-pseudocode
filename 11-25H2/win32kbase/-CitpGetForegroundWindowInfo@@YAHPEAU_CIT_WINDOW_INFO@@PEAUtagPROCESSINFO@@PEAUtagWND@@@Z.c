/*
 * XREFs of ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007D8FC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CitpGetForegroundWindowInfo(
        struct _CIT_WINDOW_INFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagWND *a3)
{
  int (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void (__fastcall *v17)(struct tagWND *, struct _CIT_WINDOW_INFO *); // rax

  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2024LL);
  if ( !v6 )
    return 0LL;
  if ( v6() < 0 )
    return 0LL;
  if ( !a3 )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v8, v7) + 18904) )
      return 0LL;
    v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18904);
    if ( *(struct tagPROCESSINFO **)(v12 + 464) != a2 )
      return 0LL;
    v14 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18904);
    if ( !*(_QWORD *)(v14 + 472) )
      return 0LL;
    v16 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18904);
    if ( !*(_QWORD *)(*(_QWORD *)(v16 + 472) + 128LL) )
      return 0LL;
    a3 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 18904) + 472LL) + 128LL);
    if ( !a3 )
      return 0LL;
  }
  v17 = *(void (__fastcall **)(struct tagWND *, struct _CIT_WINDOW_INFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable()
                                                                                      + 48)
                                                                          + 2032LL);
  if ( v17 )
    v17(a3, a1);
  return 1LL;
}
