/*
 * XREFs of BindCtx_SetMode @ 0x18068D664
 * Callers:
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18068E1DC (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x180698A04 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 *     ?_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180698AF4 (-_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BindCtx_SetMode(__int64 a1, __int64 a2, LPBC *a3)
{
  HRESULT BindCtx; // ebx
  LPBC v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  *a3 = 0LL;
  BindCtx = CreateBindCtx(0, a3);
  if ( BindCtx >= 0 )
  {
    v5 = *a3;
    v7[0] = 16LL;
    v7[1] = 4096LL;
    BindCtx = ((__int64 (__fastcall *)(LPBC, _QWORD *))v5->lpVtbl->SetBindOptions)(v5, v7);
    if ( BindCtx < 0 )
      SafeRelease<IShellItemArray>((__int64 *)a3);
  }
  return (unsigned int)BindCtx;
}
