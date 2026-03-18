/*
 * XREFs of CleanupResources @ 0x1401DFE50
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 *     LockQCursor @ 0x1400B945C (LockQCursor.c)
 *     CleanupPowerRequestList @ 0x140193020 (CleanupPowerRequestList.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CleanupResources(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  __int64 i; // rbx
  __int64 v14; // rcx
  int (*v15)(void); // rax
  void (*v16)(void); // rax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  int (*v20)(void); // rax
  void (*v21)(void); // rax

  *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 36432) = 1;
  UserSessionState = W32GetUserSessionState(v4, v3, v5);
  *(_DWORD *)(UserSessionState + 68928) |= 0x20000u;
  CleanupPowerRequestList(v8, v7, v9);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
  if ( CurrentProcessWin32Process )
  {
    v12 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 328); i; i = *(_QWORD *)(i + 696) )
  {
    v12 = *(_QWORD *)(i + 464);
    if ( v12 )
      LockQCursor(v12, 0LL);
  }
  v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48);
  v15 = *(int (**)(void))(v14 + 1816);
  if ( v15 )
  {
    if ( v15() >= 0 )
    {
      v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v14) + 48);
      v16 = *(void (**)(void))(v14 + 1824);
      if ( v16 )
        v16();
    }
  }
  v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v14) + 48);
  v20 = *(int (**)(void))(v18 + 3200);
  if ( v20 )
  {
    if ( v20() >= 0 )
    {
      v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v18) + 48);
      v21 = *(void (**)(void))(v18 + 3208);
      if ( v21 )
        v21();
    }
  }
  CleanupGDI(v18, v17, v19);
}
