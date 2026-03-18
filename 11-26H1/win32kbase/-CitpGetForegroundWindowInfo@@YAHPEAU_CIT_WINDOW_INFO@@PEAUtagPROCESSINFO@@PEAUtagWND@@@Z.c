/*
 * XREFs of ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D6408
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CitpGetForegroundWindowInfo(
        struct _CIT_WINDOW_INFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagWND *a3)
{
  int (*v6)(void); // rax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  void (__fastcall *v22)(struct tagWND *, struct _CIT_WINDOW_INFO *); // rax

  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 1800LL);
  if ( !v6 )
    return 0LL;
  if ( v6() < 0 )
    return 0LL;
  if ( !a3 )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 18944) )
      return 0LL;
    v14 = *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 18944);
    if ( *(struct tagPROCESSINFO **)(v14 + 456) != a2 )
      return 0LL;
    v17 = *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 18944);
    if ( !*(_QWORD *)(v17 + 464) )
      return 0LL;
    v20 = *(_QWORD *)(W32GetUserSessionState(v17, v16, v18) + 18944);
    if ( !*(_QWORD *)(*(_QWORD *)(v20 + 464) + 128LL) )
      return 0LL;
    v8 = *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 18944);
    a3 = *(struct tagWND **)(*(_QWORD *)(v8 + 464) + 128LL);
    if ( !a3 )
      return 0LL;
  }
  v22 = *(void (__fastcall **)(struct tagWND *, struct _CIT_WINDOW_INFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8)
                                                                                      + 48)
                                                                          + 1808LL);
  if ( v22 )
    v22(a3, a1);
  return 1LL;
}
