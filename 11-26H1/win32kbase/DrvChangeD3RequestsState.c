/*
 * XREFs of DrvChangeD3RequestsState @ 0x14000C07C
 * Callers:
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 * Callees:
 *     UserIsRemoteConnection @ 0x14000C100 (UserIsRemoteConnection.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvChangeD3RequestsState(char a1)
{
  __int64 v2; // rcx
  __int64 i; // rbx
  __int64 DxgkWin32kInterface; // rax
  __int64 v6; // rdx

  if ( !(unsigned int)UserIsRemoteConnection() )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v2) + 88) + 1184LL); i; i = *(_QWORD *)(i + 128) )
    {
      if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
        LOBYTE(v6) = a1;
        (*(void (__fastcall **)(_QWORD, __int64))(DxgkWin32kInterface + 664))(*(_QWORD *)(i + 232), v6);
      }
    }
  }
  return 0LL;
}
