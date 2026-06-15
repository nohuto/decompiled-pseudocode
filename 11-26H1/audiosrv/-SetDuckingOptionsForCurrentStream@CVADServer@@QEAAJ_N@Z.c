/*
 * XREFs of ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x180113854
 * Callers:
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x180116C10 (AudioServerSetDuckingOptionsForCurrentStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18004E5F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D98C (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800B0E88 (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVADServer::SetDuckingOptionsForCurrentStream(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rdx
  _QWORD *OwningThread; // rdi
  int (__fastcall *v8)(_QWORD *, __int64 *); // rbx
  struct AudioSrvTelemetryProvider *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  void (*v14)(void); // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD); // rdi
  unsigned int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v23; // [rsp+50h] [rbp-10h] BYREF
  int v24[2]; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  char v26; // [rsp+90h] [rbp+30h] BYREF
  int v27; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+48h] BYREF

  v4 = this + 5;
  EnterCriticalSection(this + 5);
  v22 = v4;
  v5 = 0;
  if ( !LODWORD(this[4].DebugInfo) )
  {
    v6 = 2307LL;
LABEL_5:
    v5 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    goto LABEL_17;
  }
  OwningThread = this[4].OwningThread;
  if ( !OwningThread )
  {
    v6 = 2308LL;
    goto LABEL_5;
  }
  v28 = 0LL;
  v8 = *(int (__fastcall **)(_QWORD *, __int64 *))(OwningThread[1] + 24LL);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v28);
  if ( v8(OwningThread + 1, &v28) >= 0 )
  {
    v9 = AudioSrvTelemetryProvider::Instance();
    v10 = (_DWORD *)*((_QWORD *)v9 + 1);
    if ( *v10 > 4u && tlgKeywordOn(*((_QWORD *)v9 + 1), 2LL) )
    {
      v26 = a2;
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28);
      v23 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)this[3].LockSemaphore + 1) + 64LL))((__int64)this[3].LockSemaphore + 8);
      *(_QWORD *)v24 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)this[4].OwningThread + 1) + 80LL))((__int64)this[4].OwningThread + 8);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (int)v10,
        (int)&unk_1801A78FD,
        v11,
        v12,
        (__int64)v24,
        &v23,
        (__int64)&v27,
        (__int64)&v26);
    }
    v13 = *((_QWORD *)this[4].OwningThread + 3);
    if ( a2 )
      v14 = *(void (**)(void))(v13 + 40);
    else
      v14 = *(void (**)(void))(v13 + 32);
    v14();
    v21 = 0LL;
    wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(v15, (__int64)&v21);
    v16 = v21;
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 120LL);
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 48LL))(v28);
    v19 = v17(v16, v18);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2333LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
LABEL_17:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
  return v5;
}
