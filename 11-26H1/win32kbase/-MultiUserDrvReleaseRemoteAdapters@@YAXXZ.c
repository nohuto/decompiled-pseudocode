/*
 * XREFs of ?MultiUserDrvReleaseRemoteAdapters@@YAXXZ @ 0x1401B5E2C
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1401B5D90 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall MultiUserDrvReleaseRemoteAdapters(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 DxgkWin32kInterface; // rax
  __int64 v6; // rdx

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v3 = *(_QWORD *)(v2 + 1272);
  if ( v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 128);
      if ( (*(_DWORD *)(v3 + 160) & 0x4000000) != 0 )
      {
        if ( *(_QWORD *)(v3 + 272) )
        {
          DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v2, v1);
          LOBYTE(v6) = 1;
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(DxgkWin32kInterface + 400))(
            *(_QWORD *)(v3 + 272),
            v6,
            *(_QWORD *)(v3 + 280));
        }
      }
      v3 = v4;
    }
    while ( v4 );
  }
}
