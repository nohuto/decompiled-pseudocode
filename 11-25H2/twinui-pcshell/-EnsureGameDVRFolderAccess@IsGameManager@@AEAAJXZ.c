/*
 * XREFs of ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x180140E18
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x18013EFCC (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800607B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x1801410D8 (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?DestroyPrivateObjectSecurity@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18023C468 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-DestroyPrivateObjectSecurity@details@wi.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9FD8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall IsGameManager::EnsureGameDVRFolderAccess(IsGameManager *this, __int64 a2, __int64 a3, __int64 a4)
{
  int KnownFolderSubFolder; // eax
  signed int v5; // ebx
  signed int LastError; // eax
  __int64 v8; // rdx
  HSTRING v9; // rbx
  const WCHAR *StringRawBuffer; // rax
  signed int v11; // eax
  signed int v12; // edi
  signed int v13; // eax
  struct _ACL *v14; // rdi
  WCHAR *v15; // rax
  DWORD v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // [rsp+20h] [rbp-40h]
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
    a3,
    a4);
  string = 0LL;
  KnownFolderSubFolder = GetKnownFolderSubFolder(
                           &FOLDERID_LocalAppData,
                           L"Microsoft\\GameDVR",
                           0LL,
                           (struct Windows::Internal::String *)&string);
  v5 = KnownFolderSubFolder;
  if ( KnownFolderSubFolder < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x264,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)KnownFolderSubFolder);
    if ( string )
      WindowsDeleteString(string);
    return (unsigned int)v5;
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
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      goto LABEL_26;
    v8 = 619LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v5);
LABEL_26:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_DestroyPrivateObjectSecurity_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
    Windows::Internal::String::~String(&string);
    return (unsigned int)v5;
  }
  v9 = string;
  SecurityAttributes.bInheritHandle = 0;
  SecurityAttributes.nLength = 24;
  SecurityAttributes.lpSecurityDescriptor = SecurityDescriptor;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  if ( CreateDirectoryW(StringRawBuffer, &SecurityAttributes) )
    goto LABEL_33;
  v11 = GetLastError();
  v12 = v11;
  if ( v11 != 80 && v11 != 183 )
  {
    if ( v11 > 0 )
      v12 = (unsigned __int16)v11 | 0x80070000;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28E,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v12);
    v5 = v12;
    goto LABEL_26;
  }
  pDacl = 0LL;
  bDaclPresent = 0;
  LODWORD(bDaclDefaulted) = 0;
  if ( !GetSecurityDescriptorDacl(SecurityDescriptor, &bDaclPresent, &pDacl, (LPBOOL)&bDaclDefaulted) )
  {
    v13 = GetLastError();
    v5 = v13;
    if ( v13 > 0 )
      v5 = (unsigned __int16)v13 | 0x80070000;
    if ( v5 >= 0 )
      goto LABEL_26;
    v8 = 636LL;
    goto LABEL_25;
  }
  v14 = pDacl;
  if ( !pDacl )
  {
    v5 = -2147024891;
    v8 = 643LL;
    goto LABEL_25;
  }
  v15 = (WCHAR *)WindowsGetStringRawBuffer(v9, 0LL);
  v16 = SetNamedSecurityInfoW(v15, SE_FILE_OBJECT, 4u, 0LL, 0LL, v14, 0LL);
  if ( !v16 )
  {
LABEL_33:
    if ( SecurityDescriptor )
    {
      bDaclDefaulted = SecurityDescriptor;
      DestroyPrivateObjectSecurity(&bDaclDefaulted);
    }
    if ( v9 )
      WindowsDeleteString(v9);
    return 0LL;
  }
  else
  {
    v17 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x28A,
            (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)v16,
            v18);
    if ( SecurityDescriptor )
    {
      string = (HSTRING)SecurityDescriptor;
      DestroyPrivateObjectSecurity((PSECURITY_DESCRIPTOR *)&string);
    }
    if ( v9 )
      WindowsDeleteString(v9);
    return v17;
  }
}
