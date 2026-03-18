/*
 * XREFs of InitializeGreCSRSS @ 0x14006D744
 * Callers:
 *     Win32kBaseUserInitialize @ 0x14016B320 (Win32kBaseUserInitialize.c)
 * Callees:
 *     DrvNotifySessionStateChange @ 0x14006DAB0 (DrvNotifySessionStateChange.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 InitializeGreCSRSS()
{
  unsigned int v0; // ebx
  unsigned int (*v1)(void); // rax
  int (*v2)(void); // rax
  unsigned int (*v3)(void); // rax

  v0 = 0;
  if ( (int)DrvNotifySessionStateChange(0LL) >= 0 )
  {
    v1 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 4176LL);
    if ( v1 )
    {
      if ( !v1() )
      {
        v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2648LL);
        if ( !v2 || v2() < 0 )
          return 1LL;
        v3 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2656LL);
        if ( v3 )
        {
          LOBYTE(v0) = v3() != 0;
          return v0;
        }
      }
    }
  }
  return 0LL;
}
