/*
 * XREFs of ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18007272C
 * Callers:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800725D0 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180067DCC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180072A7C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180072AF0 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     StringCopyWorkerW @ 0x18007B118 (StringCopyWorkerW.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B0364 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     StringLengthWorkerW_0 @ 0x1800B0C8C (StringLengthWorkerW_0.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::LaunchADGProcess(CAudioDGProcess *this, unsigned __int8 a2)
{
  int v2; // r15d
  size_t v4; // rdx
  const char *v5; // r9
  int LastError; // esi
  void *v7; // rcx
  void **v8; // rcx
  HRESULT v10; // ebx
  wchar_t *v11; // r14
  size_t v12; // rsi
  void **v13; // rbx
  __int64 v14; // rdx
  void *v15; // rcx
  const char *v16; // r9
  void *v17; // rcx
  BOOL bInheritHandles[2]; // [rsp+20h] [rbp-E0h]
  size_t pcchLength; // [rsp+50h] [rbp-B0h] BYREF
  _SECURITY_ATTRIBUTES ProcessAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+70h] [rbp-90h] BYREF
  CAudioDGProcess *v22; // [rsp+88h] [rbp-78h]
  char v23; // [rsp+90h] [rbp-70h]
  struct _STARTUPINFOW StartupInfo; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t Buffer[264]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  v2 = a2;
  v22 = this;
  v23 = 1;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetSystemDirectoryW(Buffer, 0x104u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x62,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                  v5);
    v7 = (void *)*((_QWORD *)this + 11);
    if ( !v7 || v7 == (void *)-1LL )
      return (unsigned int)LastError;
    WaitForSingleObjectEx(v7, 0xFFFFFFFF, 0);
    v8 = (void **)((char *)this + 88);
LABEL_5:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v8,
      0LL);
    *((_DWORD *)this + 24) = 0;
    return (unsigned int)LastError;
  }
  pcchLength = 0LL;
  v10 = StringLengthWorkerW_0(Buffer, v4, &pcchLength);
  if ( v10 < 0 )
    goto LABEL_26;
  v11 = &Buffer[pcchLength];
  v12 = 260 - pcchLength;
  if ( pcchLength == 260 || pcchLength == 259 )
  {
    v10 = -2147024774;
  }
  else
  {
    pcchLength = 0LL;
    v10 = StringCopyWorkerW(v11, v12, &pcchLength, L"\\AUDIODG.EXE", *(size_t *)bInheritHandles);
    v11 += pcchLength;
    v12 -= pcchLength;
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -2147024774 )
      goto LABEL_26;
  }
  if ( v10 < 0 )
  {
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)v10);
    v17 = (void *)*((_QWORD *)this + 11);
    if ( v17 && v17 != (void *)-1LL )
    {
      WaitForSingleObjectEx(v17, 0xFFFFFFFF, 0);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)this + 11,
        0LL);
      *((_DWORD *)this + 24) = 0;
    }
    return (unsigned int)v10;
  }
  LastError = StringCbPrintfW(v11, 2 * v12, L" 0x%p 0x%p", *((_QWORD *)this + 14), *((_QWORD *)this + 15));
  v13 = (void **)((char *)this + 88);
  if ( LastError < 0 )
  {
    v14 = 104LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)LastError);
    goto LABEL_16;
  }
  memset_0(&StartupInfo.cb + 1, 0, 0x64uLL);
  StartupInfo.cb = 104;
  memset(&ProcessAttributes, 0, sizeof(ProcessAttributes));
  ProcessAttributes.nLength = 24;
  LastError = CAudioDGProcess::GetADGProcessSD(&ProcessAttributes.lpSecurityDescriptor);
  if ( LastError < 0 )
  {
    v14 = 113LL;
    goto LABEL_15;
  }
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  if ( !CreateProcessW(0LL, Buffer, &ProcessAttributes, 0LL, 1, v2 << 18, 0LL, 0LL, &StartupInfo, &ProcessInformation) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x76,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                  v16);
    operator delete(ProcessAttributes.lpSecurityDescriptor);
    ProcessAttributes.lpSecurityDescriptor = 0LL;
LABEL_16:
    v15 = *v13;
    if ( !*v13 || v15 == (void *)-1LL )
      return (unsigned int)LastError;
    WaitForSingleObjectEx(v15, 0xFFFFFFFF, 0);
    v8 = (void **)((char *)this + 88);
    goto LABEL_5;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 11,
    ProcessInformation.hProcess);
  *((_DWORD *)this + 24) = ProcessInformation.dwProcessId;
  if ( (unsigned __int64)ProcessInformation.hThread - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(ProcessInformation.hThread);
    ProcessInformation.hThread = 0LL;
  }
  operator delete(ProcessAttributes.lpSecurityDescriptor);
  return 0LL;
}
