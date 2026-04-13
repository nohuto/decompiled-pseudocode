/*
 * XREFs of ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800890F0
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800885D4 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D98 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@V_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@AEAAJPEBGAEBV_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@Z @ 0x1800489AC (--$SetValue@V_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@-$PropertySetHelperBase@$1-RuntimeClass.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x18005F828 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x180081F3C (-GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@M.c)
 *     ?GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x1800823E8 (-GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$unique_any_t@.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x180083360 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??0?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x180085034 (--0-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 *     ??_D?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXXZ @ 0x180085CB0 (--_D-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAXXZ.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x18008A508 (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a3)
{
  int v5; // r14d
  __int64 (__fastcall *v6)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64 *); // rbx
  int v7; // eax
  int v8; // eax
  unsigned int i; // esi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rdi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rdi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  WCHAR *StringRawBuffer; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  _WORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  _WORD *v26; // rax
  HSTRING v27; // rax
  int v28; // eax
  int v29; // [rsp+20h] [rbp-178h] BYREF
  __int64 v30; // [rsp+28h] [rbp-170h] BYREF
  __int64 v31; // [rsp+30h] [rbp-168h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-160h] BYREF
  UINT32 v33; // [rsp+3Ch] [rbp-15Ch] BYREF
  int v34; // [rsp+40h] [rbp-158h] BYREF
  HSTRING v35; // [rsp+48h] [rbp-150h] BYREF
  HSTRING string; // [rsp+50h] [rbp-148h] BYREF
  __int64 v37; // [rsp+58h] [rbp-140h] BYREF
  __int64 v38; // [rsp+60h] [rbp-138h] BYREF
  _BYTE v39[232]; // [rsp+68h] [rbp-130h] BYREF
  _QWORD v40[4]; // [rsp+150h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v5 = 0;
  v29 = 0;
  v31 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64 *))(*(_QWORD *)a2 + 320LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  v7 = v6(a2, &v31);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      458LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v7,
      v29);
  v32 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v31 + 56LL))(v31, &v32);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      461LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v8,
      v29);
  std::wostringstream::wostringstream(&v38);
  for ( i = 0; i < v32; ++i )
  {
    v30 = 0LL;
    v10 = v31;
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v31 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    v12 = v11(v10, i, &v30);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      std::wostringstream::`vbase destructor'((__int64)&v38);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      return v13;
    }
    v35 = 0LL;
    v15 = v30;
    v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 48LL);
    WindowsDeleteString(0LL);
    v35 = 0LL;
    v17 = v16(v15, &v35);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        469LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v17,
        v29);
    v29 = 0;
    v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 80LL))(v30, &v29);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        471LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v18,
        v29);
    v34 = 0;
    v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 64LL))(v30, &v34);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        473LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v19,
        v29);
    if ( i )
      std::operator<<<wchar_t,std::char_traits<wchar_t>>((__int64)&v38, L"|");
    v33 = 0;
    v37 = 0LL;
    Windows::Services::TargetedContent::Internal::GetStringBytes(v35, (void **)&v37, &v33);
    Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(&string, v33, v37);
    v5 |= 1u;
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v37);
    StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
    v21 = std::operator<<<wchar_t,std::char_traits<wchar_t>>((__int64)&v38, StringRawBuffer);
    v22 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v21, L";");
    v23 = (_WORD *)Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(v34);
    v24 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v22, v23);
    v25 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v24, L";");
    v26 = (_WORD *)Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(v29);
    std::operator<<<wchar_t,std::char_traits<wchar_t>>(v25, v26);
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v35);
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  }
  if ( v32 )
  {
    std::wstringbuf::str(v39, v40);
    v27 = (HSTRING)v40;
    if ( v40[3] >= 8uLL )
      v27 = (HSTRING)v40[0];
    string = v27;
    v28 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetValue<_lambda_086e13a8bd4c581c1d26f0fece32f4a3_>(
            (__int64)this,
            L"StateTransitions",
            (const WCHAR **)&string);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        489LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v28,
        v29);
    std::wstring::_Tidy(v40, 1, 0LL);
  }
  std::wostringstream::`vbase destructor'((__int64)&v38);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  return 0LL;
}
