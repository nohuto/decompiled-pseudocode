/*
 * XREFs of ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180377D0C
 * Callers:
 *     ?_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x180378090 (-_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18003C904 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18016F55C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x180171FBC (-GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA-AVHString@Wrappers@W.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x1801DD140 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x1802104E0 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$CortanaExperienceManager_SuspensionAllowedByApp@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z @ 0x18036FCE4 (--$CortanaExperienceManager_SuspensionAllowedByApp@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z.c)
 *     ??$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG@Z @ 0x180370BD0 (--$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA-AV01@$$QEAPEB.c)
 *     ??1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180371A0C (--1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?CortanaExperienceManager_ShellSearchReadyEventSet@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180372354 (-CortanaExperienceManager_ShellSearchReadyEventSet@CortanaExperienceManager_OnEventQueued@Cortan.c)
 *     ?CortanaExperienceManager_SuspensionDisabled@CortanaProactiveTelemetry@@SAXXZ @ 0x180372390 (-CortanaExperienceManager_SuspensionDisabled@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180375D90 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180376D80 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ @ 0x180377614 (-_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ.c)
 *     ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180378660 (-_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CortanaSharedExperienceManager::_OnViewEvent(
        CortanaSharedExperienceManager *this,
        Microsoft::WRL::Wrappers::Details *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  HSTRING v8; // r8
  unsigned int v9; // r8d
  Windows::Internal::ShellHelpers::PropertySetHelper *v10; // rbx
  unsigned int v11; // r8d
  HSTRING_HEADER *v12; // rax
  __int64 v13; // r8
  int v14; // ebx
  bool *v15; // rbx
  __int64 v16; // rcx
  HSTRING_HEADER *v17; // rax
  HSTRING v18; // r8
  unsigned int v19; // r8d
  __int64 v20; // rcx
  const struct _tlgProvider_t *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r9
  HSTRING_HEADER *v24; // rax
  HSTRING v25; // r8
  Windows::Internal::ShellHelpers::PropertySetHelper *v26; // rbx
  unsigned int v27; // r8d
  HSTRING_HEADER *v28; // rax
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, SID *, GUID *, __int64 *); // rbx
  int v31; // eax
  __int64 v32; // rdx
  _BYTE v34[8]; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING_HEADER v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40[42]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  string = (HSTRING)WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::Start<unsigned short const *>(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v40,
    (const unsigned __int16 **)&string);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, (const WCHAR **)&off_18075FF88, v6);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, (HSTRING)v7[1].Reserved.Reserved1, v8) )
  {
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, (const WCHAR **)&off_18075FF98, v9);
    if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          a2,
                          (HSTRING)v17[1].Reserved.Reserved1,
                          v18) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 80LL))(*((_QWORD *)this + 62));
      SetExistingEvent(L"ShellSearchReadyEvent");
      CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::CortanaExperienceManager_ShellSearchReadyEventSet((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v40);
      v21 = SingleViewExperienceLogging::Provider(v20);
      if ( *(_DWORD *)v21 > 5u && tlgKeywordOn((__int64)v21, 0x200000000000LL) )
      {
        string = (HSTRING)L"Windows.Internal.ShellExperience.Cortana";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v22,
          byte_1807F119B,
          0LL,
          v23,
          (const WCHAR **)&string);
      }
      goto LABEL_21;
    }
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, (const WCHAR **)&off_18075FF90, v19);
    if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          a2,
                          (HSTRING)v24[1].Reserved.Reserved1,
                          v25) )
    {
      v26 = Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v37,
              a3);
      v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, (const WCHAR **)&off_18075FFA8, v27);
      Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault(
        v26,
        (Microsoft::WRL::Wrappers::HString *)&string,
        (HSTRING)v28[1].Reserved.Reserved1,
        0LL);
      v39 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
      v36 = 0LL;
      v29 = *((_QWORD *)this + 51);
      v30 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v29 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
      v31 = v30(v29, &SID_ImmersiveLauncher, &GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce, &v36);
      v14 = v31;
      if ( v31 < 0 )
      {
        v32 = 1219LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v32,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_22;
      }
      v31 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v36 + 32LL))(v36, string);
      v14 = v31;
      if ( v31 < 0 )
      {
        v32 = 1220LL;
        goto LABEL_17;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
      WindowsDeleteString(string);
    }
LABEL_21:
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v40);
    v14 = 0;
    goto LABEL_22;
  }
  v34[0] = 0;
  v10 = Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&string,
          a3);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, (const WCHAR **)&off_18075FFA0, v11);
  v14 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v10,
          (__int64)v12[1].Reserved.Reserved1,
          v13,
          v34);
  v39 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&string);
  if ( v14 >= 0 )
  {
    v15 = (bool *)this + 536;
    if ( *((_BYTE *)this + 536) != (v34[0] != 0) )
    {
      *v15 = v34[0] != 0;
      CortanaProactiveTelemetry::CortanaExperienceManager_SuspensionAllowedByApp<bool &>((char *)this + 536);
      if ( *v15 )
      {
        if ( !CortanaSharedExperienceManager::_IsViewVisible(this) )
          CortanaSharedExperienceManager::_StartDeferredSuspensionTimer(this);
      }
      else
      {
        CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer((struct _TP_TIMER **)this);
        if ( !CortanaSharedExperienceManager::_IsViewVisible(this) )
        {
          CortanaProactiveTelemetry::CortanaExperienceManager_SuspensionDisabled(v16);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 88LL))(*((_QWORD *)this + 62));
        }
      }
    }
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x491,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
LABEL_22:
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v40);
  return (unsigned int)v14;
}
