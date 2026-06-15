/*
 * XREFs of _lambda_58f5fe6b8b017462ecd7bd55353afd95_::operator() @ 0x180136080
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_58f5fe6b8b017462ecd7bd55353afd95__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x18013EDF0 (std--_Func_impl_no_alloc__lambda_58f5fe6b8b017462ecd7bd55353afd95__long_IAudioProce_ea_18013EDF0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004DEF4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIApoAcousticEchoCancellation@@@Z @ 0x1800699B0 (--$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_58f5fe6b8b017462ecd7bd55353afd95_::operator()(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-8h] BYREF

  v12 = a2;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 56LL))(*a1) && *(_DWORD *)a1[1] == 2 && !a4 )
    return 0LL;
  v13 = 0LL;
  if ( !wil::try_com_query_to<IApoAcousticEchoCancellation,IAudioProcessingObject * &>(&v12, (__int64)&v13) )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
    return 0LL;
  }
  v7 = *(_DWORD **)(*a1 + 8288LL);
  if ( *v7 > 4u && tlgKeywordOn((__int64)v7, 256LL) )
  {
    LODWORD(v12) = *(_DWORD *)a1[1];
    v14 = a3;
    v15 = *(const wchar_t **)(v9 + 48);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v8,
      (int)&unk_1801ABFB7,
      v9,
      v10,
      &v15,
      &v14,
      (__int64)&v12);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  return 2289827895LL;
}
