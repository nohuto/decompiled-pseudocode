/*
 * XREFs of InitializeGreCSRSS @ 0x140180418
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1401D8B30 (Win32kBaseUserInitialize.c)
 * Callees:
 *     DrvNotifySessionStateChange @ 0x1401804C0 (DrvNotifySessionStateChange.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 InitializeGreCSRSS()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  unsigned int (*v2)(void); // rax
  __int64 v3; // rcx
  int (*v4)(void); // rax
  __int64 v5; // rcx
  unsigned int (*v6)(void); // rax

  v1 = 0;
  if ( (int)DrvNotifySessionStateChange(0LL) >= 0 )
  {
    v2 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v0) + 48) + 3728LL);
    if ( v2 )
    {
      if ( !v2() )
      {
        v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24) + 2672LL);
        if ( !v4 || v4() < 0 )
          return 1LL;
        v6 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24) + 2680LL);
        if ( v6 )
        {
          LOBYTE(v1) = v6() != 0;
          return v1;
        }
      }
    }
  }
  return 0LL;
}
