/*
 * XREFs of ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z @ 0x180671FC8
 * Callers:
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1806672AC (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180673134 (-_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z @ 0x180674010 (-s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z.c)
 *     ?s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z @ 0x1806743FC (-s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBackupLocationManager::_CreateNewShortcut(
        CBackupLocationManager *this,
        const struct _ITEMIDLIST *a2,
        char *a3,
        int a4,
        unsigned __int16 *a5,
        const unsigned __int16 *a6,
        struct _ITEMIDLIST **a7)
{
  unsigned int v11; // edx
  int NewFile; // ebx
  _QWORD v14[3]; // [rsp+30h] [rbp-D0h] BYREF
  struct IShellLinkW *ppv; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v17[264]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR pszPath[264]; // [rsp+270h] [rbp+170h] BYREF

  NewFile = StringCchCopyW((char *)v17, 260LL, (char *)a5);
  if ( NewFile >= 0 )
  {
    NewFile = CBackupLocationManager::s_ShouldCreateNewFile(v17, v11);
    if ( NewFile >= 0 )
    {
      ppv = 0LL;
      NewFile = CoCreateInstance(&CLSID_ShellLink, 0LL, 3u, &GUID_000214f9_0000_0000_c000_000000000046, (LPVOID *)&ppv);
      if ( NewFile >= 0 )
      {
        NewFile = ((__int64 (__fastcall *)(struct IShellLinkW *, const struct _ITEMIDLIST *))ppv->lpVtbl->SetIDList)(
                    ppv,
                    a2);
        if ( NewFile >= 0 )
        {
          if ( !a6 )
            goto LABEL_20;
          v16 = 0LL;
          NewFile = ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, __int64 *))ppv->lpVtbl->QueryInterface)(
                      ppv,
                      &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
                      &v16);
          if ( NewFile >= 0 )
          {
            v14[2] = 0LL;
            v14[0] = 31LL;
            v14[1] = a6;
            NewFile = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, _QWORD *))(*(_QWORD *)v16 + 48LL))(
                        v16,
                        &PKEY_AppUserModel_ID,
                        v14);
            if ( NewFile >= 0 )
              NewFile = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 56LL))(v16);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            if ( NewFile >= 0 )
            {
LABEL_20:
              if ( (a4 & 0x400000) == 0
                || (a4 & 0x20000000) != 0
                || (NewFile = StringCchCopyW((char *)pszPath, 260LL, a3), NewFile >= 0)
                && (PathRemoveFileSpecW(pszPath),
                    NewFile = ((__int64 (__fastcall *)(struct IShellLinkW *, WCHAR *))ppv->lpVtbl->SetWorkingDirectory)(
                                ppv,
                                pszPath),
                    NewFile >= 0) )
              {
                NewFile = CBackupLocationManager::_PersistLnk(this, ppv, v17, a7);
              }
            }
          }
        }
        ((void (__fastcall *)(struct IShellLinkW *))ppv->lpVtbl->Release)(ppv);
        if ( NewFile >= 0 )
          CBackupLocationManager::s_CopyLocalizedName((const unsigned __int16 *)a3, v17);
      }
    }
  }
  return (unsigned int)NewFile;
}
