/*
 * XREFs of ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x1801A78F0 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1801A79E8 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1801E73CC (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C28B8 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x18037BA60 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180388F8C (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180388F8C.c)
 *     ??1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ @ 0x1803894A0 (--1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1803898FC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x18038A43C (-ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnV.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x18038A48C (-ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChang.c)
 *     ?StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x18038C7E4 (-StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18038CA64 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038DF00 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CQuickConnectExperienceManager::OnViewPropertiesChanging(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, __int64, struct IInspectable **); // rdi
  HSTRING v8; // rbx
  HSTRING v9; // rax
  int Boolean; // eax
  __int64 v11; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, __int64, struct IInspectable **); // rdi
  HSTRING *v16; // rsi
  HSTRING v17; // rbx
  HSTRING v18; // rax
  int v19; // eax
  __int64 v20; // rbx
  void (__fastcall *v21)(__int64, __int64, struct IInspectable **); // rdi
  HSTRING *v22; // rsi
  HSTRING v23; // rbx
  HSTRING v24; // rax
  int updated; // eax
  __int64 v26; // rdx
  const WCHAR *StringRawBuffer; // rax
  const WCHAR *v28; // rax
  const WCHAR *v29; // rax
  unsigned __int8 v31[8]; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+40h] [rbp-C0h]
  HSTRING *v34; // [rsp+48h] [rbp-B8h] BYREF
  struct IInspectable *v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+68h] [rbp-98h]
  HSTRING *v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+78h] [rbp-88h]
  HSTRING *v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+88h] [rbp-78h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-58h]
  _QWORD v45[42]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v45,
    (__int64)"ExperienceManager_OnViewPropertiesChanging");
  v45[0] = &QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v45);
  v36 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4,
         &v36);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v37 = 0LL;
    v38 = 0;
    v6 = v36;
    v7 = *(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v36 + 48LL);
    v34 = &v37;
    v35 = 0LL;
    v44 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"IsQuickConnectViewServiceReady",
      0x1Fu,
      0x1Eu);
    v7(v6, v44, &v35);
    v44 = 0LL;
    RoVariant::RoVariant((RoVariant *)&string, v35);
    v8 = string;
    string = 0LL;
    LODWORD(v7) = v33;
    v33 = 0;
    RoVariant::~RoVariant((RoVariant *)&string);
    v9 = v37;
    v37 = v8;
    string = v9;
    LODWORD(v9) = v38;
    v38 = (int)v7;
    v33 = (int)v9;
    RoVariant::~RoVariant((RoVariant *)&string);
    if ( v37 )
    {
      v31[0] = 0;
      v34 = (HSTRING *)v37;
      LODWORD(v35) = v38;
      Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v34, v31);
      v5 = Boolean;
      if ( Boolean < 0 )
      {
        v11 = 692LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)Boolean);
LABEL_7:
        RoVariant::~RoVariant((RoVariant *)&v37);
        goto LABEL_30;
      }
      if ( v31[0] )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v45);
        v13 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 6), v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 34);
        Boolean = CoreQueryWindowService(
                    v13,
                    &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                    &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                    (char *)this + 272);
        v5 = Boolean;
        if ( Boolean < 0 )
        {
          v11 = 705LL;
          goto LABEL_6;
        }
        Boolean = CQuickConnectExperienceManager::CheckAndPopulateContact((CQuickConnectExperienceManager *)((char *)this - 48));
        v5 = Boolean;
        if ( Boolean < 0 )
        {
          v11 = 708LL;
          goto LABEL_6;
        }
      }
    }
    v39 = 0LL;
    v40 = 0;
    v14 = v36;
    v15 = *(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v36 + 48LL);
    v34 = (HSTRING *)&v39;
    v35 = 0LL;
    v44 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Title", 6u, 5u);
    v15(v14, v44, &v35);
    v44 = 0LL;
    v16 = v34;
    RoVariant::RoVariant((RoVariant *)&string, v35);
    v17 = string;
    string = 0LL;
    LODWORD(v15) = v33;
    v33 = 0;
    RoVariant::~RoVariant((RoVariant *)&string);
    v18 = *v16;
    *v16 = v17;
    string = v18;
    LODWORD(v18) = *((_DWORD *)v16 + 2);
    *((_DWORD *)v16 + 2) = (_DWORD)v15;
    v33 = (int)v18;
    RoVariant::~RoVariant((RoVariant *)&string);
    if ( v39 )
    {
      v34 = v39;
      LODWORD(v35) = v40;
      WindowsDeleteString(*((HSTRING *)this + 41));
      *((_QWORD *)this + 41) = 0LL;
      v19 = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v34, (HSTRING *)this + 41);
      v5 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2CD,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
LABEL_16:
        RoVariant::~RoVariant((RoVariant *)&v39);
        goto LABEL_7;
      }
    }
    v41 = 0LL;
    v42 = 0;
    v20 = v36;
    v21 = *(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v36 + 48LL);
    v34 = (HSTRING *)&v41;
    v35 = 0LL;
    v44 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"EventType", 0xAu, 9u);
    v21(v20, v44, &v35);
    v44 = 0LL;
    v22 = v34;
    RoVariant::RoVariant((RoVariant *)&string, v35);
    v23 = string;
    string = 0LL;
    LODWORD(v21) = v33;
    v33 = 0;
    RoVariant::~RoVariant((RoVariant *)&string);
    v24 = *v22;
    *v22 = v23;
    string = v24;
    LODWORD(v24) = *((_DWORD *)v22 + 2);
    *((_DWORD *)v22 + 2) = (_DWORD)v21;
    v33 = (int)v24;
    RoVariant::~RoVariant((RoVariant *)&string);
    if ( v41 )
    {
      string = 0LL;
      v34 = v41;
      LODWORD(v35) = v42;
      WindowsDeleteString(0LL);
      string = 0LL;
      updated = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v34, &string);
      v5 = updated;
      if ( updated < 0 )
      {
        v26 = 728LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)updated);
        WindowsDeleteString(string);
        string = 0LL;
        RoVariant::~RoVariant((RoVariant *)&v41);
        goto LABEL_16;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"WindowResize", -1, 0) == 2 )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_WindowResize((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v45);
        updated = CQuickConnectExperienceManager::UpdateWindowPosition(
                    (CQuickConnectExperienceManager *)((char *)this - 48),
                    a2);
        v5 = updated;
        if ( updated < 0 )
        {
          v26 = 733LL;
          goto LABEL_20;
        }
      }
      else
      {
        v28 = WindowsGetStringRawBuffer(string, 0LL);
        if ( CompareStringOrdinal(v28, -1, L"DisableReturnFocus", -1, 0) == 2 )
        {
          *((_BYTE *)this + 368) = 1;
        }
        else
        {
          v29 = WindowsGetStringRawBuffer(string, 0LL);
          if ( CompareStringOrdinal(v29, -1, L"EnableReturnFocus", -1, 0) == 2 )
            *((_BYTE *)this + 368) = 0;
        }
      }
      WindowsDeleteString(string);
    }
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v45);
    RoVariant::~RoVariant((RoVariant *)&v41);
    RoVariant::~RoVariant((RoVariant *)&v39);
    RoVariant::~RoVariant((RoVariant *)&v37);
    v5 = 0;
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AA,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_30:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::~ExperienceManager_OnViewPropertiesChanging((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v45);
  return v5;
}
