/*
 * XREFs of ??R_lambda_f0f613184e0e47442428064dff914436_@@QEBA@XZ @ 0x180068270
 * Callers:
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_f0f613184e0e47442428064dff914436_@@@details@wil@@UEAAJXZ @ 0x18006A490 (-Run@-$functor_wrapper_void@AEAV_lambda_f0f613184e0e47442428064dff914436_@@@details@wil@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003E0F8 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Z @ 0x180067C68 (--0-$com_ptr_t@U-$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@.c)
 *     ??0ActivityWrapper@MobilityExperience@@QEAA@AEBV01@@Z @ 0x180067E5C (--0ActivityWrapper@MobilityExperience@@QEAA@AEBV01@@Z.c)
 *     ?FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAPEAVICDPActivity@@PEAPEAVICDPActivityStore@@@Z @ 0x180068D40 (-FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAP.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800694C8 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x180069A00 (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x180069D20 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180069FE8 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18006A6D4 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
HRESULT __fastcall _lambda_f0f613184e0e47442428064dff914436_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  ToastNotification::ActivityToastNotificationCallback *v4; // rcx
  bool ActivityAndStore; // al
  MobilityExperience::ActivityWrapper *v6; // rax
  __int64 v7; // rcx
  ToastNotification::ActivityToastNotificationCallback *v8; // rcx
  __int64 v9; // rbx
  MobilityExperience::ActivityWrapper *v10; // rax
  int v11; // eax
  bool v12; // sf
  HRESULT result; // eax
  const char *lpData; // [rsp+20h] [rbp-108h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp-E8h] BYREF
  HSTRING string; // [rsp+48h] [rbp-E0h] BYREF
  HSTRING v17; // [rsp+50h] [rbp-D8h] BYREF
  struct ICDPActivityStore *v18; // [rsp+58h] [rbp-D0h] BYREF
  struct ICDPActivity *v19; // [rsp+60h] [rbp-C8h] BYREF
  HSTRING v20; // [rsp+68h] [rbp-C0h] BYREF
  DWORD dwLowDateTime; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+78h] [rbp-B0h] BYREF
  _BYTE v23[16]; // [rsp+80h] [rbp-A8h] BYREF
  GUID rguid; // [rsp+90h] [rbp-98h] BYREF
  void *v25[4]; // [rsp+A0h] [rbp-88h] BYREF
  OLECHAR sz[40]; // [rsp+C0h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v20 = 0LL;
  rguid = 0LL;
  SystemTimeAsFileTime.dwLowDateTime = 0;
  v25[3] = (void *)15;
  v25[2] = 0LL;
  LOBYTE(v25[0]) = 0;
  WindowsDeleteString(0LL);
  try
  {
    v20 = 0LL;
    ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters(v2, *(_QWORD *)a1[1], &v20, &rguid);
    v3 = CDPInitialize();
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        122LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v3,
        (int)&SystemTimeAsFileTime);
    StringFromGUID2(&rguid, sz, 39);
    v18 = 0LL;
    v19 = 0LL;
    ActivityAndStore = ToastNotification::ActivityToastNotificationCallback::FindActivityAndStore(
                         v4,
                         &rguid,
                         &v19,
                         &v18);
    wil::details::in1diag3::Throw_HrIfMsg(
      retaddr,
      (void *)0x81,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)0x80070490LL,
      !ActivityAndStore,
      (bool)"Unable to find activity [GUID = %ls]",
      (const char *)sz);
    dwLowDateTime = SystemTimeAsFileTime.dwLowDateTime;
    wil::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>(
      &v22,
      (__int64)v19);
    string = 0LL;
    v17 = 0LL;
    WindowsDeleteString(0LL);
    v17 = 0LL;
    WindowsDeleteString(string);
    string = 0LL;
    v6 = MobilityExperience::ActivityWrapper::ActivityWrapper(
           (MobilityExperience::ActivityWrapper *)v23,
           (const struct MobilityExperience::ActivityWrapper *)&dwLowDateTime);
    ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(v7, v6, &string, &v17);
    ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(v8, string, v17);
    v9 = *a1;
    v10 = MobilityExperience::ActivityWrapper::ActivityWrapper(
            (MobilityExperience::ActivityWrapper *)v23,
            (const struct MobilityExperience::ActivityWrapper *)&dwLowDateTime);
    ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(v9, v10, v18);
    SystemTimeAsFileTime = 0LL;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    SystemTimeAsFileTime = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                                            + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
    v11 = RegSetKeyValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
            L"LastResumeOnPCInteractionTime",
            0xBu,
            &SystemTimeAsFileTime,
            8u);
    v12 = v11 < 0;
    if ( v11 > 0 )
    {
      v11 = (unsigned __int16)v11 | 0x80070000;
      v12 = v11 < 0;
    }
    if ( v12 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF9,
        (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
        (const char *)(unsigned int)v11);
    WindowsDeleteString(v17);
    v17 = 0LL;
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v22);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v18);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v19);
    std::string::_Tidy(v25, 1, 0LL);
    result = WindowsDeleteString(v20);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtExceptionMsg(
             retaddr,
             (void *)0x8F,
             (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
             "Failed to handle an Activity Toast Notification",
             lpData);
  }
  return result;
}
