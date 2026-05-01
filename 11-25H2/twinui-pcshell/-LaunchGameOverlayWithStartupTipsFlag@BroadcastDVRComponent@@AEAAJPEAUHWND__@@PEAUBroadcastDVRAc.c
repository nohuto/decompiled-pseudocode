/*
 * XREFs of ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1801C7B98
 * Callers:
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800B2D18 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180073F70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x1800AF534 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802B1D08 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$swprintf_s@$0CAA@@@YAHAEAY0CAA@GPEBGZZ @ 0x180313EC4 (--$swprintf_s@$0CAA@@@YAHAEAY0CAA@GPEBGZZ.c)
 *     ?LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1803166A8 (-LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V-$ComP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall BroadcastDVRComponent::LaunchGameOverlayWithStartupTipsFlag(
        BroadcastDVRComponent *this,
        HWND a2,
        struct BroadcastDVRActiveAppInfo *a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, HSTRING *); // rdi
  int v15; // eax
  PCWSTR v16; // rax
  const wchar_t *v17; // r8
  int v18; // eax
  const WCHAR *v19; // rax
  const WCHAR *StringRawBuffer; // rax
  __int64 v21; // rcx
  UINT32 v23; // [rsp+30h] [rbp-D0h] BYREF
  DWORD dwProcessId; // [rsp+34h] [rbp-CCh] BYREF
  HSTRING v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  UINT32 length; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-98h] BYREF
  HSTRING v32; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER v33; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 v34[512]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4D8h] [rbp+3D8h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UWPGameBar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_UWPGameBar>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  v27 = 0LL;
  memset_0(v34, 0, sizeof(v34));
  Windows::Internal::StringReference::_ConstructorHelper(
    (Windows::Internal::StringReference *)&v32,
    c_wzGameBarStartupTipsUri);
  if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
         string,
         &v27);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD66,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v6);
LABEL_27:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
    return v7;
  }
  if ( !a3 )
  {
LABEL_24:
    v29 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
    if ( v27 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v27)[1])(v27);
    string = 0LL;
    v23 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(v32, &v23);
    WindowsCreateStringReference(StringRawBuffer, v23, &hstringHeader, &string);
    BroadcastDVRComponent::LaunchGameOverlayWithUri(v21, &string, &v29);
    v7 = 0;
    goto LABEL_27;
  }
  v26 = 0LL;
  dwProcessId = 0;
  GetWindowThreadProcessId(a2, &dwProcessId);
  v25 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
  v9 = **v27;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v10 = v9(v8, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, &v26);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v13 = v26;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v26 + 56LL);
    WindowsDeleteString(v25);
    v25 = 0LL;
    v15 = v14(v13, *((_QWORD *)a3 + 6), &v25);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD71,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v15);
      Windows::Internal::String::~String(&v25);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
      goto LABEL_27;
    }
    length = 0;
    v16 = WindowsGetStringRawBuffer(v25, &length);
    if ( length )
    {
      v17 = L"AumId";
      if ( !*((_BYTE *)a3 + 19) )
        v17 = L"TitleId";
      v18 = swprintf_s<512>(
              v34,
              L"ms-gamingoverlay://startuptips?%ls=%ls&ProcessId=%lu&WindowId=%llu",
              v17,
              v16,
              dwProcessId,
              a2);
    }
    else
    {
      v18 = swprintf_s<512>(v34, L"ms-gamingoverlay://startuptips?pid=%lu&WindowId=%llu", dwProcessId, a2);
    }
    if ( v18 > 0 )
    {
      Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)&string, v34);
      v23 = 0;
      v19 = WindowsGetStringRawBuffer(string, &v23);
      v32 = 0LL;
      WindowsCreateStringReference(v19, v23, &v33, &v32);
    }
    Windows::Internal::String::~String(&v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD70,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)(unsigned int)v10);
  if ( v25 )
    WindowsDeleteString(v25);
  v11 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
  if ( v27 )
  {
    v27 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v12)[2])(v12);
  }
  return v7;
}
