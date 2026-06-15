/*
 * XREFs of ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E65D8
 * Callers:
 *     wil::details::lambda_call__lambda_4794dd8919ededed270e66c32cba0f6f___::_lambda_call__lambda_4794dd8919ededed270e66c32cba0f6f___ @ 0x1800E0390 (wil--details--lambda_call__lambda_4794dd8919ededed270e66c32cba0f6f___--_lambda_call__lambda_4794.c)
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E0E20 (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E1294 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E733C (-RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@43@Z @ 0x18000301C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045598 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180062BE8 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x1800666C0 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006E1BC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800747EC (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x1800782B4 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800865F4 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800AFCDC (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800DEFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     ??$emplace_front@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$forward_list@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV234@@Z @ 0x1800E00AC (--$emplace_front@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$forward_list@V-$ComPtr@UISt.c)
 *     ??$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAAEAUDisplacedStreamGroup@@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x1800E0124 (--$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV-$unique_ptr@USaDeviceParams@@U-$default_delete@.c)
 *     ?CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E0D18 (-CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUE.c)
 *     ?GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800E43B8 (-GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEA.c)
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800E496C (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 *     ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x1800E8380 (-clear@-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(
        CBtAudioResourceManagerBase *this)
{
  RTL_SRWLOCK *v2; // rcx
  int EndpointStore; // eax
  unsigned int v4; // ebx
  struct CEndpointStore *v5; // r14
  _QWORD *v6; // rdi
  _QWORD *i; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // r15
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rbx
  __int64 v14; // r12
  unsigned __int128 v15; // kr00_16
  int v16; // eax
  __int64 *v17; // r15
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // r12
  int v20; // eax
  int v21; // r12d
  int v22; // eax
  __int64 *v23; // rax
  int EndpointCharacteristicsDescriptor; // eax
  int v25; // r14d
  _QWORD *v26; // rdi
  _QWORD *v27; // rbx
  _QWORD *v28; // rdi
  _QWORD *v29; // rbx
  _QWORD *v30; // rdi
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  _QWORD *v33; // rbx
  char v34; // r15
  int SaDeviceWrapper; // eax
  __int64 (__fastcall *v36)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD); // rbx
  char v37; // al
  int v38; // eax
  _QWORD *v39; // rdi
  _QWORD *v40; // rbx
  _QWORD *v41; // rdi
  _QWORD *v42; // rbx
  _QWORD *j; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v44; // edi
  int PrimaryProfileRenderSaDeviceWithDefaultParameters; // eax
  __int64 (__fastcall *v46)(struct IDeviceGraphManager *, __int64, _QWORD, bool, _QWORD); // rdi
  char v47; // al
  int v48; // eax
  _QWORD *v49; // rdi
  _QWORD *v50; // rbx
  _QWORD *v51; // rdi
  _QWORD *v52; // rbx
  struct AudioSrvTelemetryProvider *v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rdi
  _QWORD *v58; // rbx
  _QWORD *v59; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v60)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v61; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v62; // [rsp+70h] [rbp-90h] BYREF
  struct _RTL_CRITICAL_SECTION *v63; // [rsp+78h] [rbp-88h] BYREF
  double *p_TimeSec; // [rsp+80h] [rbp-80h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  int v67[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-50h]
  unsigned __int128 v70; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-38h]
  __int64 v72; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v73; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v74; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-18h] BYREF
  double TimeSec; // [rsp+F0h] [rbp-10h] BYREF
  struct CEndpointStore *v77; // [rsp+F8h] [rbp-8h] BYREF
  EffectPack *v78[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v79; // [rsp+110h] [rbp+10h]
  __int128 v80; // [rsp+118h] [rbp+18h] BYREF
  __int64 v81; // [rsp+128h] [rbp+28h]
  LARGE_INTEGER v82; // [rsp+130h] [rbp+30h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+138h] [rbp+38h] BYREF
  LARGE_INTEGER Frequency; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v85[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v86; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( !*((_QWORD *)this + 7) )
    return 0LL;
  PerformanceCount.QuadPart = 0LL;
  v82.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  CQPCStopWatch::Start(&v82);
  v77 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v2, *((const unsigned __int16 **)this + 7), &v77);
  v4 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)EndpointStore);
    goto LABEL_103;
  }
  v5 = v77;
  (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v77 + 13) + 128LL))(
    *((_QWORD *)v77 + 13),
    &v63);
  v6 = (_QWORD *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  v61 = v6;
  for ( i = v6; i; i = (_QWORD *)*i )
  {
    v72 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(i + 1, &v72) >= 0 && v72 )
    {
      v73 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v72,
                  &v73) >= 0 )
      {
        v75 = 0LL;
        v8 = v73;
        v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v73 + 224LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
        v10 = v9(v8, &v75);
        v4 = v10;
        if ( v10 < 0 )
        {
          v11 = 378LL;
          goto LABEL_17;
        }
        if ( v75 )
        {
          v10 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                  g_DeviceGraphManager,
                  v73);
          v4 = v10;
          if ( v10 < 0 )
          {
            v11 = 382LL;
LABEL_17:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v11,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)v10);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
            std::forward_list<DisplacedStreamGroup>::clear(&v61);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v63);
            goto LABEL_103;
          }
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
  }
  v59 = 0LL;
  v62 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int128 *))(**((_QWORD **)v5 + 13) + 112LL))(
          *((_QWORD *)v5 + 13),
          &v70);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      393LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v12);
    v13 = (__int64 *)v70;
LABEL_38:
    if ( v13 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, *((__int64 **)&v70 + 1));
      std::_Deallocate<16>((void *)v70, (struct std::nothrow_t *)((v71 - v70) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl) )
      CBtAudioResourceManagerBase::NotifyStreamChange((RTL_SRWLOCK *)this, 0);
    *(_OWORD *)v78 = 0LL;
    v79 = 0LL;
    EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                          *((const unsigned __int16 **)this + 7),
                                          0,
                                          (struct EndpointCharacteristicsDescriptor *)v78);
    v25 = EndpointCharacteristicsDescriptor;
    if ( EndpointCharacteristicsDescriptor < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C0,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v78);
      std::forward_list<DisplacedStreamGroup>::clear(&v62);
      v26 = v59;
      v59 = 0LL;
      if ( v26 )
      {
        do
        {
          v27 = (_QWORD *)*v26;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v26 + 1);
          std::_Deallocate<16>(v26, (struct std::nothrow_t *)0x10);
          v26 = v27;
        }
        while ( v27 );
      }
      goto LABEL_102;
    }
    memset(v85, 0, sizeof(v85));
    v86 = 0LL;
    v34 = 0;
    while ( v6 )
    {
      p_TimeSec = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v6 + 1, (__int64 *)&p_TimeSec) >= 0 && p_TimeSec )
      {
        v66 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&p_TimeSec,
                    &v66) >= 0 )
        {
          v74 = 0LL;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
          SaDeviceWrapper = CBtAudioResourceManagerBase::GetSaDeviceWrapper(
                              (__int64)this,
                              v78,
                              v6[2],
                              0,
                              0,
                              (__int64)v85,
                              (__int64)(v6 + 3),
                              0LL,
                              0LL,
                              (__int64)&v74);
          v25 = SaDeviceWrapper;
          if ( SaDeviceWrapper < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D0,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)SaDeviceWrapper);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v66);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&p_TimeSec);
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v78);
            std::forward_list<DisplacedStreamGroup>::clear(&v62);
            v41 = v59;
            v59 = 0LL;
            if ( v41 )
            {
              do
              {
                v42 = (_QWORD *)*v41;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v41 + 1);
                std::_Deallocate<16>(v41, (struct std::nothrow_t *)0x10);
                v41 = v42;
              }
              while ( v42 );
            }
            goto LABEL_102;
          }
          v34 = 1;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v74 + 80LL))(v74, v6[2]);
          v36 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
          v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 240LL))(v66);
          v38 = v36(g_DeviceGraphManager, v66, v74, v37 == 0, 0LL);
          v25 = v38;
          if ( v38 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D8,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)v38);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v66);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&p_TimeSec);
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v78);
            std::forward_list<DisplacedStreamGroup>::clear(&v62);
            v39 = v59;
            v59 = 0LL;
            if ( v39 )
            {
              do
              {
                v40 = (_QWORD *)*v39;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v39 + 1);
                std::_Deallocate<16>(v39, (struct std::nothrow_t *)0x10);
                v39 = v40;
              }
              while ( v40 );
            }
            goto LABEL_102;
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v66);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&p_TimeSec);
      v6 = (_QWORD *)*v6;
    }
    std::forward_list<DisplacedStreamGroup>::clear(&v61);
    for ( j = v62; j; j = (_QWORD *)*j )
    {
      v60 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(j + 1, (__int64 *)&v60) >= 0 && v60 )
      {
        v65 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v60, &v65) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v65 + 192LL))(v65) != 2
            && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v65 + 192LL))(v65) != 3
            || (v44 = eLoopbackConnector, !(unsigned int)EffectPack::HardwareLoopbackEnabled(v78[1])) )
          {
            v44 = eHostProcessConnector;
          }
          *(_QWORD *)v67 = 0LL;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v67);
          PrimaryProfileRenderSaDeviceWithDefaultParameters = CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters(
                                                                this,
                                                                (struct EndpointCharacteristicsDescriptor *)v78,
                                                                v44,
                                                                (__int64)(j + 3),
                                                                (__int64)v67);
          v25 = PrimaryProfileRenderSaDeviceWithDefaultParameters;
          if ( PrimaryProfileRenderSaDeviceWithDefaultParameters < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1ED,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)PrimaryProfileRenderSaDeviceWithDefaultParameters);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v67);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v60);
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v78);
            std::forward_list<DisplacedStreamGroup>::clear(&v62);
            v51 = v59;
            v59 = 0LL;
            if ( v51 )
            {
              do
              {
                v52 = (_QWORD *)*v51;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v51 + 1);
                std::_Deallocate<16>(v51, (struct std::nothrow_t *)0x10);
                v51 = v52;
              }
              while ( v52 );
            }
            goto LABEL_102;
          }
          v34 = 1;
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v67 + 80LL))(*(_QWORD *)v67, j[2]);
          v46 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
          v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 240LL))(v65);
          v48 = v46(g_DeviceGraphManager, v65, *(_QWORD *)v67, v47 == 0, 0LL);
          v25 = v48;
          if ( v48 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F5,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)v48);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v67);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v60);
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v78);
            std::forward_list<DisplacedStreamGroup>::clear(&v62);
            v49 = v59;
            v59 = 0LL;
            if ( v49 )
            {
              do
              {
                v50 = (_QWORD *)*v49;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v49 + 1);
                std::_Deallocate<16>(v49, (struct std::nothrow_t *)0x10);
                v49 = v50;
              }
              while ( v50 );
            }
            goto LABEL_102;
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v67);
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v60);
    }
    if ( v34 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v54 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v54 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v54 + 1), 0x400000004000LL) )
      {
        TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v82);
        v60 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 8);
        p_TimeSec = (double *)*((_QWORD *)this + 7);
        v72 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
          v55,
          (int)&unk_1801A57B7,
          v55,
          v56,
          (__int64)&v72,
          (const wchar_t **)&p_TimeSec,
          (const wchar_t **)&v60,
          (__int64)&TimeSec);
      }
    }
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v78);
    std::forward_list<DisplacedStreamGroup>::clear(&v62);
    v57 = v59;
    v59 = 0LL;
    if ( v57 )
    {
      do
      {
        v58 = (_QWORD *)*v57;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v57 + 1);
        std::_Deallocate<16>(v57, (struct std::nothrow_t *)0x10);
        v57 = v58;
      }
      while ( v58 );
    }
    std::forward_list<DisplacedStreamGroup>::clear(&v61);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v63);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v77);
    return 0LL;
  }
  v14 = *((_QWORD *)&v70 + 1);
  v15 = v70;
  v66 = v15 >> 64;
  v13 = (__int64 *)v15;
  if ( (_QWORD)v70 == *((_QWORD *)&v70 + 1) )
    goto LABEL_38;
  while ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v13 + 96LL))(*v13) == 1 )
  {
LABEL_36:
    if ( ++v13 == (__int64 *)v14 )
    {
      v13 = (__int64 *)v70;
      goto LABEL_38;
    }
  }
  v68 = 0LL;
  v69 = 0LL;
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)v5 + 13) + 120LL))(
          *((_QWORD *)v5 + 13),
          *v13,
          &v68);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      404LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v16);
LABEL_33:
    v17 = (__int64 *)v68;
    goto LABEL_34;
  }
  *(_QWORD *)v67 = *((_QWORD *)&v68 + 1);
  v17 = (__int64 *)v68;
  if ( (_QWORD)v68 == *((_QWORD *)&v68 + 1) )
  {
LABEL_34:
    if ( v17 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v17, *((__int64 **)&v68 + 1));
      std::_Deallocate<16>((void *)v68, (struct std::nothrow_t *)((v69 - v68) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    goto LABEL_36;
  }
  while ( 1 )
  {
    v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))operator new[](
                                                                 0x70uLL,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
    v19 = v18;
    if ( v18 )
      memset_0(v18, 0, 0x70uLL);
    else
      v19 = 0LL;
    v60 = v19;
    if ( !v19 )
      break;
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*v13 + 72LL))(
      *v13,
      v19);
    v80 = 0LL;
    v81 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v13 + 240LL))(*v13, &v80);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A6,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v20);
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v80);
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v60);
      if ( (_QWORD)v68 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v68,
          *((__int64 **)&v68 + 1));
        std::_Deallocate<16>((void *)v68, (struct std::nothrow_t *)((v69 - v68) & 0xFFFFFFFFFFFFFFF8uLL));
        v68 = 0LL;
        v69 = 0LL;
      }
      if ( (_QWORD)v70 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v70,
          *((__int64 **)&v70 + 1));
        std::_Deallocate<16>((void *)v70, (struct std::nothrow_t *)((v71 - v70) & 0xFFFFFFFFFFFFFFF8uLL));
        v70 = 0LL;
        v71 = 0LL;
      }
      std::forward_list<DisplacedStreamGroup>::clear(&v62);
      v30 = v59;
      v59 = 0LL;
      if ( v30 )
      {
        do
        {
          v31 = (_QWORD *)*v30;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v30 + 1);
          std::_Deallocate<16>(v30, (struct std::nothrow_t *)0x10);
          v30 = v31;
        }
        while ( v31 );
      }
      goto LABEL_59;
    }
    v22 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64))(*(_QWORD *)g_DeviceGraphManager
                                                                                    + 40LL))(
            g_DeviceGraphManager,
            *v17,
            *v13);
    v21 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v22);
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v80);
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v60);
      if ( (_QWORD)v68 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v68,
          *((__int64 **)&v68 + 1));
        std::_Deallocate<16>((void *)v68, (struct std::nothrow_t *)((v69 - v68) & 0xFFFFFFFFFFFFFFF8uLL));
        v68 = 0LL;
        v69 = 0LL;
      }
      if ( (_QWORD)v70 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v70,
          *((__int64 **)&v70 + 1));
        std::_Deallocate<16>((void *)v70, (struct std::nothrow_t *)((v71 - v70) & 0xFFFFFFFFFFFFFFF8uLL));
        v70 = 0LL;
        v71 = 0LL;
      }
      std::forward_list<DisplacedStreamGroup>::clear(&v62);
      v28 = v59;
      v59 = 0LL;
      if ( v28 )
      {
        do
        {
          v29 = (_QWORD *)*v28;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v28 + 1);
          std::_Deallocate<16>(v28, (struct std::nothrow_t *)0x10);
          v28 = v29;
        }
        while ( v29 );
      }
LABEL_59:
      std::forward_list<DisplacedStreamGroup>::clear(&v61);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v63);
      v4 = v21;
      goto LABEL_103;
    }
    TimeSec = 0.0;
    p_TimeSec = &TimeSec;
    v23 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&p_TimeSec);
    Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v17, v23);
    std::forward_list<DisplacedStreamGroup>::emplace_front<Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> &>(
      &v62,
      (__int64 *)&TimeSec,
      (__int64 *)&v60,
      (__int64 *)&v80);
    std::forward_list<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_front<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
      &v59,
      v17);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&TimeSec);
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v80);
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v60);
    if ( ++v17 == *(__int64 **)v67 )
    {
      v14 = v66;
      goto LABEL_33;
    }
  }
  v25 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19D,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)0x8007000ELL);
  std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v60);
  if ( (_QWORD)v68 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v68,
      *((__int64 **)&v68 + 1));
    std::_Deallocate<16>((void *)v68, (struct std::nothrow_t *)((v69 - v68) & 0xFFFFFFFFFFFFFFF8uLL));
    v68 = 0LL;
    v69 = 0LL;
  }
  if ( (_QWORD)v70 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v70,
      *((__int64 **)&v70 + 1));
    std::_Deallocate<16>((void *)v70, (struct std::nothrow_t *)((v71 - v70) & 0xFFFFFFFFFFFFFFF8uLL));
    v70 = 0LL;
    v71 = 0LL;
  }
  std::forward_list<DisplacedStreamGroup>::clear(&v62);
  v32 = v59;
  v59 = 0LL;
  if ( v32 )
  {
    do
    {
      v33 = (_QWORD *)*v32;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v32 + 1);
      std::_Deallocate<16>(v32, (struct std::nothrow_t *)0x10);
      v32 = v33;
    }
    while ( v33 );
  }
LABEL_102:
  std::forward_list<DisplacedStreamGroup>::clear(&v61);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v63);
  v4 = v25;
LABEL_103:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v77);
  return v4;
}
