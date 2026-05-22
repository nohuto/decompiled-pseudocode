/*
 * XREFs of ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800CFF8C
 * Callers:
 *     ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@@Z @ 0x1800CE58C (--$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSpect.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800682D8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18006EE74 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800CEF9C (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800CFD00 (--$ActivateInstance@V-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_b15dcbeb2f833aa118e48dddb1066528_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@@01@$$QEAV_lambda_b15dcbeb2f833aa118e48dddb1066528_@@@Z @ 0x1800CFDA8 (--$Callback@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoice.c)
 *     ??$make_unique@VSpeechRuntimeListener@@AEAPEAVMPCRawInputProvider@@AEAK$0A@@std@@YA?AV?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@0@AEAPEAVMPCRawInputProvider@@AEAK@Z @ 0x1800CFE18 (--$make_unique@VSpeechRuntimeListener@@AEAPEAVMPCRawInputProvider@@AEAK$0A@@std@@YA-AV-$unique_p.c)
 *     ??0_lambda_b15dcbeb2f833aa118e48dddb1066528_@@QEAA@AEBQEAVSpectrumListener@@AEBQ81@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z@Z @ 0x1800CFEB8 (--0_lambda_b15dcbeb2f833aa118e48dddb1066528_@@QEAA@AEBQEAVSpectrumListener@@AEBQ81@EAAJPEAUIInpu.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CFF48 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QE.c)
 *     ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x1800D0200 (--1-$unique_ptr@VSpeechRuntimeListener@@U-$default_delete@VSpeechRuntimeListener@@@std@@@std@@QE.c)
 *     ??R?$default_delete@VSpeechRuntimeListener@@@std@@QEBAXPEAVSpeechRuntimeListener@@@Z @ 0x1800D0260 (--R-$default_delete@VSpeechRuntimeListener@@@std@@QEBAXPEAVSpeechRuntimeListener@@@Z.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x1800D13B0 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
SpectrumListener *__fastcall SpectrumListener::SpectrumListener(SpectrumListener *this, struct MPCRawInputProvider *a2)
{
  const char *v4; // r9
  int v5; // eax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, char *); // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  const char *v11; // r9
  MPCHeadUpdateListener *Instance; // rax
  int v13; // eax
  int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 v19; // [rsp+20h] [rbp-49h] BYREF
  __int64 v20[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v21; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v22[24]; // [rsp+50h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-1h] BYREF
  __int64 v24; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v20[1] = (__int64)this;
  v20[0] = (__int64)a2;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>((__int64)this);
  *(_QWORD *)this = &SpectrumListener::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      v4);
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Input.Spatial.Internal.InputPriv",
    0x2Cu,
    0x2Bu);
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>>(
         v24,
         (__int64 *)this + 3);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v5,
      v19);
  v6 = *((_QWORD *)this + 3);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v6 + 48LL);
  *(_QWORD *)&v19 = SpectrumListener::OnPhraseDetected;
  DWORD2(v19) = 0;
  v21 = v19;
  *(_QWORD *)&v19 = this;
  v8 = _lambda_b15dcbeb2f833aa118e48dddb1066528_::_lambda_b15dcbeb2f833aa118e48dddb1066528_((__int64)v22, &v19, &v21);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_b15dcbeb2f833aa118e48dddb1066528_>(
    (__int64 *)&v19,
    v8);
  v9 = v19;
  v10 = v7(v6, v19, (char *)this + 48);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v10,
      v19);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v11);
  if ( *(_BYTE *)ISMTestMode::s_instance )
  {
    Instance = MPCHeadUpdateListener::GetInstance();
    MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (unsigned __int64 *)this + 5);
    v13 = MPCRawInputProvider::AttachDevice(*((_QWORD *)this + 2), 0x20000, (_DWORD *)this + 19);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x26,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v13,
        v19);
  }
  v14 = MPCRawInputProvider::AttachDevice(*((_QWORD *)this + 2), 0x40000, (_DWORD *)this + 20);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v14,
      v19);
  v15 = std::make_unique<SpeechRuntimeListener,MPCRawInputProvider * &,unsigned long &,0>(&v19, v20, (int *)this + 20);
  v16 = *v15;
  *v15 = 0LL;
  v17 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v16;
  if ( v17 )
    std::default_delete<SpeechRuntimeListener>::operator()();
  std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>(&v19);
  *((_BYTE *)this + 72) = 1;
  return this;
}
