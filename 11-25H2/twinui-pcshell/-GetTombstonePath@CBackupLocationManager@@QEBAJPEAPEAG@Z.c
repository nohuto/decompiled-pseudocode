/*
 * XREFs of ?GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x18066BDD4
 * Callers:
 *     ?_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z @ 0x180672DE0 (-_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802C4C24 (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802C4C48 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBackupLocationManager::GetTombstonePath(PCWSTR *this, unsigned __int16 **a2)
{
  HRESULT Error; // ebx
  LPCITEMIDLIST *p_pidl; // [rsp+20h] [rbp-E0h] BYREF
  LPITEMIDLIST ppidl; // [rsp+28h] [rbp-D8h] BYREF
  char v8; // [rsp+30h] [rbp-D0h]
  LPCITEMIDLIST pidl; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pszPath[264]; // [rsp+40h] [rbp-C0h] BYREF

  *a2 = 0LL;
  pidl = 0LL;
  p_pidl = &pidl;
  ppidl = 0LL;
  v8 = 1;
  Error = SHGetKnownFolderIDList(&FOLDERID_UserPinned, 0x9000u, 0LL, &ppidl);
  wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_pidl);
  if ( Error >= 0 )
  {
    if ( SHGetPathFromIDListW(pidl, pszPath) )
    {
      Error = PathCchAppend(pszPath, 0x104uLL, *this);
      if ( Error >= 0 )
      {
        Error = PathCchAppend(pszPath, 0x104uLL, L"Tombstones");
        if ( Error >= 0 )
        {
          if ( PathFileExistsW(pszPath)
            || CreateDirectoryW(pszPath, 0LL)
            || (Error = ResultFromKnownLastError(), Error >= 0) )
          {
            Error = SHStrDupW(pszPath, a2);
          }
        }
      }
    }
    else
    {
      Error = -2147024882;
    }
  }
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&pidl,
    0LL);
  return (unsigned int)Error;
}
