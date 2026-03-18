/*
 * XREFs of CleanupResources @ 0x1401B9768
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     LockQCursor @ 0x140104650 (LockQCursor.c)
 *     CleanupGDI @ 0x140136A50 (CleanupGDI.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x14014CA8C (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     CleanupPowerRequestList @ 0x140155E20 (CleanupPowerRequestList.c)
 *     ApiSetEditionUnloadCursorsAndIcons @ 0x140196CC8 (ApiSetEditionUnloadCursorsAndIcons.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CleanupResources(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int (*v14)(void); // rax
  void (*v15)(void); // rax

  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36392) = 1;
  HYDRA_HINT(0x20000LL, v2);
  CleanupPowerRequestList(v4, v3);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( CurrentProcessWin32Process )
  {
    v8 = -*(_QWORD *)CurrentProcessWin32Process;
    v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v7;
  }
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 320); i; i = *(_QWORD *)(i + 704) )
  {
    v8 = *(_QWORD *)(i + 472);
    if ( v8 )
      LockQCursor(v8, 0LL);
  }
  ApiSetEditionUnloadCursorsAndIcons(v8, v7);
  v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48);
  v14 = *(int (**)(void))(v13 + 3632);
  if ( v14 )
  {
    if ( v14() >= 0 )
    {
      v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48);
      v15 = *(void (**)(void))(v13 + 3640);
      if ( v15 )
        v15();
    }
  }
  CleanupGDI(v13, v12);
}
