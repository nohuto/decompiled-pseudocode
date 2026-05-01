/*
 * XREFs of ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x180125630
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x180125910 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180125060 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x1801274CC (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?DestroyPrivateObjectSecurity@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18022D5B8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-DestroyPrivateObjectSecurity@details@wi.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802B01C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall IsGameManager::EnsureGameDVRFolderAccess(IsGameManager *this, __int64 a2, __int64 a3)
{
  int KnownFolderSubFolder; // eax
  signed int v4; // ebx
  signed int LastError; // eax
  __int64 v7; // rdx
  HSTRING v8; // rbx
  const WCHAR *StringRawBuffer; // rax
  signed int v10; // eax
  signed int v11; // edi
  signed int v12; // eax
  struct _ACL *v13; // rdi
  WCHAR *v14; // rax
  DWORD v15; // eax
  unsigned int v16; // edi
  unsigned int psidGroup; // [rsp+20h] [rbp-40h]
  PACL pDacl; // [rsp+40h] [rbp-20h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  PSECURITY_DESCRIPTOR bDaclDefaulted; // [rsp+80h] [rbp+20h] BYREF
  WINBOOL bDaclPresent; // [rsp+88h] [rbp+28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp+30h] BYREF
  HSTRING string; // [rsp+98h] [rbp+38h] BYREF

  bDaclDefaulted = this;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameMRU>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GameMRU>::GetImpl'::`2'::impl,
    1u,
    a3);
  string = 0LL;
  KnownFolderSubFolder = GetKnownFolderSubFolder(
                           &FOLDERID_LocalAppData,
                           L"Microsoft\\GameDVR",
                           0LL,
                           (struct Windows::Internal::String *)&string);
  v4 = KnownFolderSubFolder;
  if ( KnownFolderSubFolder < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x264,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)KnownFolderSubFolder);
    if ( string )
      WindowsDeleteString(string);
    return (unsigned int)v4;
  }
  *(&SecurityAttributes.nLength + 1) = 0;
  *(&SecurityAttributes.bInheritHandle + 1) = 0;
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;CIOI;0x111FFFFF;;;CO)(A;CIOI;0x111FFFFF;;;SY)(A;CIOI;0x111FFFFF;;;BA)(A;CIOI;GRGXGW;;;S-1-15-3-1024-44950"
           "0426-4112254358-3456904286-1727260714-2501084857-171973213-3131658879-2198086578)(A;CIOI;GRGXGW;;;S-1-5-32-44"
           "9500426-4112254358-3456904286-1727260714-2501084857-171973213-3131658879-2198086578)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      goto LABEL_26;
    v7 = 619LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v4);
LABEL_26:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_DestroyPrivateObjectSecurity_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
    Windows::Internal::String::~String(&string);
    return (unsigned int)v4;
  }
  v8 = string;
  SecurityAttributes.nLength = 24;
  SecurityAttributes.lpSecurityDescriptor = SecurityDescriptor;
  SecurityAttributes.bInheritHandle = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  if ( CreateDirectoryW(StringRawBuffer, &SecurityAttributes) )
    goto LABEL_33;
  v10 = GetLastError();
  v11 = v10;
  if ( v10 != 80 && v10 != 183 )
  {
    if ( v10 > 0 )
      v11 = (unsigned __int16)v10 | 0x80070000;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28E,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v11);
    v4 = v11;
    goto LABEL_26;
  }
  pDacl = 0LL;
  bDaclPresent = 0;
  LODWORD(bDaclDefaulted) = 0;
  if ( !GetSecurityDescriptorDacl(SecurityDescriptor, &bDaclPresent, &pDacl, (LPBOOL)&bDaclDefaulted) )
  {
    v12 = GetLastError();
    v4 = v12;
    if ( v12 > 0 )
      v4 = (unsigned __int16)v12 | 0x80070000;
    if ( v4 >= 0 )
      goto LABEL_26;
    v7 = 636LL;
    goto LABEL_25;
  }
  v13 = pDacl;
  if ( !pDacl )
  {
    v4 = -2147024891;
    v7 = 643LL;
    goto LABEL_25;
  }
  v14 = (WCHAR *)WindowsGetStringRawBuffer(v8, 0LL);
  v15 = SetNamedSecurityInfoW(v14, SE_FILE_OBJECT, 4u, 0LL, 0LL, v13, 0LL);
  if ( !v15 )
  {
LABEL_33:
    if ( SecurityDescriptor )
    {
      bDaclDefaulted = SecurityDescriptor;
      DestroyPrivateObjectSecurity(&bDaclDefaulted);
    }
    if ( v8 )
      WindowsDeleteString(v8);
    return 0LL;
  }
  else
  {
    v16 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x28A,
            (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)v15,
            psidGroup);
    if ( SecurityDescriptor )
    {
      string = (HSTRING)SecurityDescriptor;
      DestroyPrivateObjectSecurity((PSECURITY_DESCRIPTOR *)&string);
    }
    if ( v8 )
      WindowsDeleteString(v8);
    return v16;
  }
}
