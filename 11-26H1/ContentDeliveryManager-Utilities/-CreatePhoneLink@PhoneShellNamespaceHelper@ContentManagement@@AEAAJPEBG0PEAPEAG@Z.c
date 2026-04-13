/*
 * XREFs of ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x18002DC94
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180037D40 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021BB0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180021CF6 (memcpy_0.c)
 *     memset_0 @ 0x180021E51 (memset_0.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D48 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D98 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033BA0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003A510 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18003A598 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003DAC8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FF78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::CreatePhoneLink(
        ContentManagement::PhoneShellNamespaceHelper *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        LPCWSTR *a4)
{
  HRESULT v7; // eax
  unsigned int LastError; // ebx
  int v9; // eax
  __int64 v10; // rdi
  const char *v11; // r9
  void *v12; // rbx
  __int64 v13; // rdx
  bool v14; // zf
  unsigned __int16 v15; // r13
  ULONG InputBufferLength; // r12d
  _WORD *v17; // rax
  _WORD *v18; // rsi
  unsigned int Length; // eax
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  int v22; // eax
  const char *v23; // r9
  __int64 v24; // rdx
  int dwCreationDisposition; // [rsp+20h] [rbp-89h]
  int dwCreationDispositiona; // [rsp+20h] [rbp-89h]
  int dwCreationDispositionb; // [rsp+20h] [rbp-89h]
  _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-59h] BYREF
  HANDLE FileW; // [rsp+60h] [rbp-49h] BYREF
  LPCWSTR lpPathName; // [rsp+68h] [rbp-41h] BYREF
  __int64 v32; // [rsp+70h] [rbp-39h]
  __int64 v33; // [rsp+78h] [rbp-31h]
  PWSTR ppszPath; // [rsp+80h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-21h] BYREF
  _OWORD FileInformation[2]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  *a4 = 0LL;
  ppszPath = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &ppszPath,
    0LL);
  v7 = SHGetKnownFolderPath(&FOLDERID_Profile, 0x1000u, 0LL, &ppszPath);
  LastError = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x404,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7,
      dwCreationDisposition);
    goto LABEL_30;
  }
  lpPathName = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         &lpPathName,
         L"%ws\\%ws",
         ppszPath,
         a2);
  LastError = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x406,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9,
      dwCreationDisposition);
LABEL_5:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&lpPathName);
    goto LABEL_30;
  }
  CreateDirectoryW(lpPathName, 0LL);
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v10 = -1LL;
  FileW = CreateFileW(lpPathName, 0x40000000u, 1u, 0LL, 3u, 0x2200000u, 0LL);
  v12 = FileW;
  if ( FileW == (HANDLE)-1LL )
  {
    v13 = 1055LL;
LABEL_8:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v13,
                  (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                  v11);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&FileW);
    v14 = UnicodeString.Buffer == 0LL;
    goto LABEL_9;
  }
  if ( !RtlDosPathNameToNtPathName_U(a3, &UnicodeString, 0LL, 0LL) )
  {
    v13 = 1058LL;
    goto LABEL_8;
  }
  do
    ++v10;
  while ( a3[v10] );
  v15 = 2 * v10;
  InputBufferLength = 2 * v10 + UnicodeString.Length + 20;
  v17 = operator new[](InputBufferLength, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v17;
  if ( !v17 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42A,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)0x8007000ELL,
      dwCreationDispositiona);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&FileW);
    v14 = UnicodeString.Buffer == 0LL;
LABEL_9:
    if ( !v14 )
      RtlFreeUnicodeString(&UnicodeString);
LABEL_11:
    RemoveDirectoryW(lpPathName);
    goto LABEL_5;
  }
  memset_0(v17, 0, InputBufferLength);
  *(_DWORD *)v18 = -1610612733;
  v18[2] = InputBufferLength - 8;
  v18[4] = 0;
  Length = UnicodeString.Length;
  v18[5] = UnicodeString.Length;
  memcpy_0(v18 + 8, UnicodeString.Buffer, Length);
  v20 = (unsigned __int16)v18[5];
  v18[7] = v15;
  v18[6] = v20 + 2;
  memcpy_0((char *)v18 + v20 + 18, a3, v15);
  IoStatusBlock = 0LL;
  v21 = NtFsControlFile(v12, 0LL, 0LL, 0LL, &IoStatusBlock, 0x900A4u, v18, InputBufferLength, 0LL, 0);
  if ( v21 < 0 )
  {
    v22 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x448,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v21,
            dwCreationDispositionb);
LABEL_19:
    LastError = v22;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&FileW);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    operator delete(v18);
    goto LABEL_11;
  }
  v37 = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  if ( !GetFileInformationByHandleEx(v12, FileBasicInfo, FileInformation, 0x28u) )
  {
    v24 = 1100LL;
LABEL_24:
    v22 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)v24,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            v23);
    goto LABEL_19;
  }
  LODWORD(v37) = v37 | 7;
  if ( !SetFileInformationByHandle(v12, FileBasicInfo, FileInformation, 0x28u) )
  {
    v24 = 1102LL;
    goto LABEL_24;
  }
  *a4 = lpPathName;
  lpPathName = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&FileW);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  operator delete(v18);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&lpPathName);
  LastError = 0;
LABEL_30:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&ppszPath);
  return LastError;
}
