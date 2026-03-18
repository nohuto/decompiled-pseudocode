/*
 * XREFs of DrvChangeD3RequestsState @ 0x140141730
 * Callers:
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 * Callees:
 *     UserIsRemoteConnection @ 0x14007F600 (UserIsRemoteConnection.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvChangeD3RequestsState(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 i; // rbx
  __int64 DxgkWin32kInterface; // rax
  __int64 v8; // rdx

  v2 = a1;
  if ( !UserIsRemoteConnection(a1, a2) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3) + 88) + 1096LL); i; i = *(_QWORD *)(i + 128) )
    {
      if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4);
        LOBYTE(v8) = v2;
        (*(void (__fastcall **)(_QWORD, __int64))(DxgkWin32kInterface + 664))(*(_QWORD *)(i + 232), v8);
      }
    }
  }
  return 0LL;
}
