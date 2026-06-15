/*
 * XREFs of _lambda_0c78973abdeec707a919cb58eec6a57e_::operator() @ 0x18003F150
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0c78973abdeec707a919cb58eec6a57e__long_IAudioSessionInfo___::_Do_call @ 0x180040B00 (std--_Func_impl_no_alloc__lambda_0c78973abdeec707a919cb58eec6a57e__long_IAudioSessionInfo___--_D.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180001718 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAudioSessionInfo@@PEAPEAUIAudioSessionDuckingControl@@@Z @ 0x180028C98 (--$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_0c78973abdeec707a919cb58eec6a57e_::operator()(__int64 a1, __int64 a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v9 = a2;
  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  v5 = (__int64)v4;
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 0x40000LL) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v5,
      (__int64)&unk_18005ADD2,
      v6,
      v7,
      (void **)&v11);
  }
  v10 = 0LL;
  if ( wil::try_com_query_to<IAudioSessionDuckingControl,IAudioSessionInfo * &>(&v9, (__int64)&v10) )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 40LL))(
      v10,
      **(_QWORD **)a1,
      0LL,
      *(_QWORD *)(a1 + 8));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
  return 0LL;
}
