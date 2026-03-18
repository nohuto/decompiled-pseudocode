/*
 * XREFs of NtTokenManagerOpenSectionAndEvents @ 0x140063E00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtTokenManagerOpenSectionAndEvents(void *a1, void *a2, void *a3, void *a4)
{
  __int64 Win32kImportTable; // rax
  int SessionTokenManager; // edi
  __int64 v10; // rbx
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  HANDLE v13; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Src; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h] BYREF

  Src = (HANDLE)-1LL;
  v16 = 0LL;
  v13 = (HANDLE)-1LL;
  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Win32kImportTable = DxgkGetWin32kImportTable();
  if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
  {
    v15 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v15);
    if ( SessionTokenManager >= 0 )
    {
      v10 = v15;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, HANDLE *, __int64 *, HANDLE *, HANDLE *))(*(_QWORD *)v15 + 56LL))(
                              v15,
                              &Src,
                              &v16,
                              &v13,
                              &Handle);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
  }
  if ( a1 && a2 && a3 && a4 )
  {
    RtlCopyToUser(a1, &Src, 8uLL);
    RtlCopyToUser(a2, &v16, 8uLL);
    RtlCopyToUser(a3, &v13, 8uLL);
    RtlCopyToUser(a4, &Handle, 8uLL);
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager < 0 )
  {
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
    if ( v13 != (HANDLE)-1LL )
      ObCloseHandle(v13, 1);
    if ( Src != (HANDLE)-1LL )
      ObCloseHandle(Src, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
