/*
 * XREFs of ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18001C4D4
 * Callers:
 *     ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x1800027F4 (-OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z.c)
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x180002BD0 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180003F70 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180004A44 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001C708 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18001CC00 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18001CFF8 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18004AAAC (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateLowRightsRegistryKey(HKEY a1, const unsigned __int16 *a2, int a3, HKEY *a4)
{
  int v8; // eax
  unsigned int v9; // r8d
  unsigned __int16 *v10; // r9
  unsigned int LastError; // ebx
  int v12; // eax
  signed int v13; // edi
  const char *v14; // r9
  HKEY v15; // rax
  int v17; // eax
  unsigned int v18; // [rsp+28h] [rbp-29h]
  unsigned int *v19; // [rsp+48h] [rbp-9h]
  HKEY hKey; // [rsp+58h] [rbp+7h] BYREF
  PSID Sid[2]; // [rsp+60h] [rbp+Fh] BYREF
  char v22; // [rsp+70h] [rbp+1Fh]
  struct _SECURITY_ATTRIBUTES v23; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  memset(&v23, 0, sizeof(v23));
  v23.nLength = 24;
  v8 = DetermineLowRightsKeySecurityDescriptor(a1, &v23.lpSecurityDescriptor);
  LastError = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v8);
    return LastError;
  }
  Sid[1] = &v23;
  v22 = 1;
  hKey = 0LL;
  v12 = SafeRegCreateKeyEx(a1, a2, v9, v10, v18, a3 | ((a3 & 0x20006) != 0 ? 655360 : 0x20000), &v23, &hKey, v19);
  v13 = v12;
  if ( v12 > 0 )
    v13 = (unsigned __int16)v12 | 0x80070000;
  if ( v13 < 0 )
  {
    LastError = -2147024891;
    if ( v13 == -2147024891 )
    {
      if ( hKey )
        RegCloseKey(hKey);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v13);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
      LastError = v13;
    }
    goto LABEL_10;
  }
  Sid[0] = 0LL;
  if ( ConvertStringSidToSidW(L"LW", Sid) )
  {
    if ( (int)SetRegistryKeyIntegrityLevel(hKey, Sid[0]) >= 0
      || (v17 = SetRegistryHandleIntegrityLevel(hKey, Sid[0]), LastError = v17, v17 >= 0) )
    {
      v15 = hKey;
      hKey = 0LL;
      *a4 = v15;
      LocalFree(Sid[0]);
      if ( hKey )
        RegCloseKey(hKey);
      LastError = 0;
      goto LABEL_10;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v17);
    LocalFree(Sid[0]);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x95,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                  v14);
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
LABEL_10:
  operator delete(v23.lpSecurityDescriptor);
  return LastError;
}
