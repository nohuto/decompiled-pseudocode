/*
 * XREFs of ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18006A4AC
 * Callers:
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180069FE8 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003E0F8 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetActivationFactory@UIJsonObjectStatics@Json@Data@Windows@@@wil@@YA?AV?$com_ptr_t@UIJsonObjectStatics@Json@Data@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180066350 (--$GetActivationFactory@UIJsonObjectStatics@Json@Data@Windows@@@wil@@YA-AV-$com_ptr_t@UIJsonObje.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180069B78 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x18006AA7C (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MobilityExperience::ActivityWrapper::SetActivityComplete(
        MobilityExperience::ActivityWrapper *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, PVOID, __int64 *); // rdi
  unsigned int v8; // r8d
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  PCWSTR StringRawBuffer; // rax
  void **v16; // rdx
  int v17; // eax
  HSTRING string; // [rsp+28h] [rbp-19h] BYREF
  __int64 v19; // [rsp+30h] [rbp-11h] BYREF
  __int64 v20; // [rsp+38h] [rbp-9h] BYREF
  __int64 v21; // [rsp+40h] [rbp-1h] BYREF
  const WCHAR *v22; // [rsp+48h] [rbp+7h] BYREF
  void *v23[4]; // [rsp+50h] [rbp+Fh] BYREF
  HSTRING_HEADER v24; // [rsp+70h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v22 = L"{ \"complete\": true }";
  MobilityExperience::ActivityWrapper::GetUserActivityPayload((__int64)this, (const WCHAR *)&v20, a3);
  wil::GetActivationFactory<Windows::Data::Json::IJsonObjectStatics>((const WCHAR *)&v21, v4, v5);
  v19 = 0LL;
  v6 = v21;
  v7 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v21 + 48LL);
  v19 = 0LL;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v22, v8);
  v10 = v7(v6, v9[1].Reserved.Reserved1, &v19);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      640LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v10,
      (int)string);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 232LL))(v20, v19);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      642LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v11,
      (int)string);
  string = 0LL;
  v12 = v20;
  v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20 + 256LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v14 = v13(v12, &string);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      645LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v14,
      (int)string);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String(v23, StringRawBuffer);
  v16 = v23;
  if ( v23[3] >= (void *)0x10 )
    v16 = (void **)v23[0];
  v17 = (*(__int64 (__fastcall **)(_QWORD, void **))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1), v16);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      647LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v17,
      (int)string);
  std::string::_Tidy(v23, 1, 0LL);
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v19);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v20);
}
