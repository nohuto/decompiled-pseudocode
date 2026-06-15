/*
 * XREFs of ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x1800027F4
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180002654 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x180002A70 (-GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180004A44 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18001C4D4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800281CC (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

__int64 __fastcall OpenStoreKey(struct IAudioSessionInfo *a1, HKEY *a2)
{
  int v4; // ebx
  unsigned __int64 v5; // r8
  int PropKeyPath; // eax
  int LowRightsRegistryKey; // edi
  unsigned int v8; // esi
  bool v9; // sf
  unsigned int v11; // esi
  bool v12; // sf
  __int64 v13; // rdx
  int phkResult; // [rsp+20h] [rbp-E0h]
  int phkResulta; // [rsp+20h] [rbp-E0h]
  HKEY hKey[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR SubKey[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v4 = RpcImpersonateClient(0LL);
  if ( v4 && v4 != 1725 && v4 != 1765 )
  {
    v12 = v4 < 0;
    if ( v4 > 0 )
    {
      v4 = (unsigned __int16)v4 | 0x80070000;
      v12 = v4 < 0;
    }
    if ( v12 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v4,
        phkResult);
    return (unsigned int)v4;
  }
  PropKeyPath = GetPropKeyPath(a1, SubKey, v5);
  LowRightsRegistryKey = PropKeyPath;
  if ( PropKeyPath < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)PropKeyPath,
      phkResult);
  }
  else
  {
    v8 = 131103;
    hKey[0] = 0LL;
    LowRightsRegistryKey = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x2001Fu, hKey);
    if ( LowRightsRegistryKey == 5 )
    {
      v8 = 131097;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        hKey,
        0LL);
      LowRightsRegistryKey = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x20019u, hKey);
    }
    v9 = LowRightsRegistryKey < 0;
    if ( LowRightsRegistryKey > 0 )
    {
      LowRightsRegistryKey = (unsigned __int16)LowRightsRegistryKey | 0x80070000;
      v9 = LowRightsRegistryKey < 0;
    }
    if ( v9 )
    {
      v11 = -2147024894;
      if ( LowRightsRegistryKey == -2147024894 )
      {
        if ( hKey[0] )
          RegCloseKey(hKey[0]);
        goto LABEL_21;
      }
      v13 = 223LL;
    }
    else
    {
      LowRightsRegistryKey = CreateLowRightsRegistryKey(hKey[0], L"Audio\\PolicyConfig\\PropertyStore", v8, a2);
      if ( LowRightsRegistryKey >= 0 )
      {
        if ( hKey[0] )
          RegCloseKey(hKey[0]);
        if ( !v4 )
          RpcRevertToSelf();
        return 0LL;
      }
      v11 = -2147024891;
      if ( LowRightsRegistryKey == -2147024891 )
      {
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
LABEL_21:
        if ( !v4 )
          RpcRevertToSelf();
        return v11;
      }
      v13 = 225LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)LowRightsRegistryKey,
      phkResulta);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
  }
  if ( !v4 )
    RpcRevertToSelf();
  return (unsigned int)LowRightsRegistryKey;
}
