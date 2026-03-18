/*
 * XREFs of ?MultiUserDrvReleaseRemoteAdapters@@YAXXZ @ 0x14019BB88
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x14019BAF0 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall MultiUserDrvReleaseRemoteAdapters(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rdx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v2 = *(_QWORD *)(v1 + 1184);
  if ( v2 )
  {
    do
    {
      v3 = *(_QWORD *)(v2 + 128);
      if ( (*(_DWORD *)(v2 + 160) & 0x4000000) != 0 )
      {
        if ( *(_QWORD *)(v2 + 272) )
        {
          DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v1);
          LOBYTE(v5) = 1;
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(DxgkWin32kInterface + 400))(
            *(_QWORD *)(v2 + 272),
            v5,
            *(_QWORD *)(v2 + 280));
        }
      }
      v2 = v3;
    }
    while ( v3 );
  }
}
