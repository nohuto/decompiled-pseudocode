/*
 * XREFs of ?_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180699E08
 * Callers:
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068D7D4 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z @ 0x180698C88 (-_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180698AF4 (-_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBackupLocationManager::_PersistLnk(
        PCWSTR *this,
        struct IShellLinkW *a2,
        const unsigned __int16 *a3,
        struct _ITEMIDLIST **a4)
{
  struct IShellLinkWVtbl *lpVtbl; // rax
  int KnownFolderPidl; // ebx
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF

  lpVtbl = a2->lpVtbl;
  v10 = 0LL;
  KnownFolderPidl = ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, __int64 *))lpVtbl->QueryInterface)(
                      a2,
                      &GUID_0000010b_0000_0000_c000_000000000046,
                      &v10);
  if ( KnownFolderPidl >= 0 )
  {
    KnownFolderPidl = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD))(*(_QWORD *)v10 + 48LL))(
                        v10,
                        a3,
                        0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( KnownFolderPidl >= 0 )
    {
      KnownFolderPidl = CBackupLocationManager::_CreateKnownFolderPidl(this, a3, a4);
      if ( KnownFolderPidl < 0 )
        return (unsigned int)SHParseDisplayName(a3, 0LL, a4, 0, 0LL);
    }
  }
  return (unsigned int)KnownFolderPidl;
}
