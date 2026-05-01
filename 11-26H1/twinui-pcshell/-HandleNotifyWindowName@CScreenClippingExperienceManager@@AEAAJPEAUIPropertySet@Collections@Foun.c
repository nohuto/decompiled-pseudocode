/*
 * XREFs of ?HandleNotifyWindowName@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039B7A0
 * Callers:
 *     ?OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039BE60 (-OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x180172068 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CScreenClippingExperienceManager::HandleNotifyWindowName(
        CScreenClippingExperienceManager *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  const struct _tlgProvider_t *v7; // rax
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // rdx
  ExperienceManagerUtils *v17; // rcx
  __int64 v18; // rcx
  HWND v19; // rbx
  const struct _tlgProvider_t *v20; // rax
  const WCHAR *StringRawBuffer; // rax
  HSTRING string; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v24; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v4,
      byte_1807F8BED,
      0LL);
  v6 = -2147024809;
  if ( a2 )
  {
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v23,
      a2);
    WindowsDeleteString(0LL);
    string = 0LL;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, (const WCHAR **)&off_180760130, v9);
    v12 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v23,
            (HSTRING)v10[1].Reserved.Reserved1,
            v11,
            &string);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = (unsigned int)v12;
      v15 = 922LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)v14);
LABEL_21:
      WindowsDeleteString(string);
      string = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      return v13;
    }
    if ( string && WindowsGetStringLen(string) )
    {
      v17 = (ExperienceManagerUtils *)*((_QWORD *)this + 10);
      if ( !v17 )
      {
        v13 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3AF,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)0x8000FFFFLL);
LABEL_15:
        v14 = v13;
        v15 = 927LL;
        goto LABEL_16;
      }
      v19 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v17, v16);
      if ( !v19 )
      {
        v13 = -2147467259;
        goto LABEL_15;
      }
      v20 = SingleViewExperienceLogging::Provider(v18);
      if ( *(_DWORD *)v20 > 5u )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (__int64)v20,
          byte_1807F8B2A,
          0LL);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      SetWindowTextW(v19, StringRawBuffer);
      v6 = 0;
    }
    v13 = v6;
    goto LABEL_21;
  }
  v7 = SingleViewExperienceLogging::Provider(v5);
  if ( *(_DWORD *)v7 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v7,
      byte_1807F8B88,
      0LL);
  return 2147942487LL;
}
