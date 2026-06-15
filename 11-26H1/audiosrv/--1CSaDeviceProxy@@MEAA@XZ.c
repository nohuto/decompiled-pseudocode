/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x1800628AC
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x180062870 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180014990 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004E974 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_t_ea_18004E974.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x180062AE8 (-Free@-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180062BE8 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?ReleaseSaDeviceResource@@YAJPEA_K@Z @ 0x180062C3C (-ReleaseSaDeviceResource@@YAJPEA_K@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x1800C3CDC (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DBBD0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  CSaDeviceProxy *v1; // rdi
  char *v2; // r14
  __int64 *v3; // rsi
  _DWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  const char *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  SaDeviceParams *v13; // rcx
  int v14; // [rsp+20h] [rbp-B8h]
  int v15[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 *v16; // [rsp+50h] [rbp-88h]
  __int64 v17; // [rsp+58h] [rbp-80h] BYREF
  std::_Ref_count_base *v18; // [rsp+60h] [rbp-78h]
  __int64 v19[14]; // [rsp+68h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  int v23; // [rsp+E8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+F0h] [rbp+18h] BYREF
  const wchar_t *v25; // [rsp+F8h] [rbp+20h] BYREF

  v1 = this;
  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v3 = (__int64 *)((char *)this + 104);
  v16 = (__int64 *)((char *)this + 104);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 13);
  ReleaseSaDeviceResource((unsigned __int64 *)v1 + 8);
  *((_QWORD *)v1 + 8) = 0LL;
  v4 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v4 > 4u )
  {
    v7 = *((_QWORD *)v1 + 6);
    v23 = *(_DWORD *)(v7 + 8);
    v24 = v7 + 48;
    v25 = *(const wchar_t **)v7;
    *(_QWORD *)v15 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (int)v4,
      (int)&unk_1801A649F,
      v5,
      v6,
      (__int64)v15,
      &v25,
      &v24,
      (__int64)&v23);
  }
  if ( *((_BYTE *)v1 + 96) )
  {
    try
    {
      std::make_shared<std::wstring,unsigned short const * &>(&v17, *((_QWORD *)v1 + 6));
      GetSerialWorkQueue();
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v15, &v17);
      v19[0] = (__int64)off_180176F20;
      v19[1] = *(_QWORD *)v15;
      v19[2] = *(_QWORD *)&v15[2];
      *(_OWORD *)v15 = 0LL;
      v19[7] = (__int64)v19;
      v9 = CSerialWorkQueue::QueueWorkItem(v8, v19);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xB63,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v9,
          v14);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xB65,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        v10);
      v1 = this;
      v3 = v16;
    }
  }
  v11 = *((_QWORD *)v1 + 18);
  if ( v11 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 72LL))(
      v11,
      *((unsigned int *)v1 + 38),
      *((_QWORD *)v1 + 6));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v1 + 18);
  v12 = *((_QWORD *)v1 + 17);
  if ( v12 )
  {
    *((_QWORD *)v1 + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v3);
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((char *)v1 + 72);
  ATL::CAutoPtr<CResourcePriorityTracker>::Free((char *)v1 + 56);
  v13 = (SaDeviceParams *)*((_QWORD *)v1 + 6);
  if ( v13 )
    SaDeviceParams::`scalar deleting destructor'(v13);
  *((_QWORD *)v1 + 6) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>((__int64)v1);
}
