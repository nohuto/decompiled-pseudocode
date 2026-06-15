/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800DB064
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800D9110 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180050778 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??1?$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@wistd@@QEAA@XZ @ 0x1800A973C (--1-$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AAE78 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x1800ABA38 (-Create@-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvc.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x1800AE010 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B0364 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x1800BFE44 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x1800C2E30 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800CC874 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     ?Initialize@AudioSessionManagerProvider@@YAJXZ @ 0x1800D35B4 (-Initialize@AudioSessionManagerProvider@@YAJXZ.c)
 *     ??$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServerDescriptor@34@@ServiceModuleBase@Internal@Windows@@QEAAJEEEEPEAXK@Z @ 0x1800D673C (--$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServer.c)
 *     ??$MakeAndInitialize@VEffectPackConfigurationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVEffectPackConfigurationManager@@@Z @ 0x1800D692C (--$MakeAndInitialize@VEffectPackConfigurationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVEf.c)
 *     ??$com_query_to@UIPolicyConfigInternal@@AEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@PEAPEAUIPolicyConfigInternal@@@Z @ 0x1800D6C88 (--$com_query_to@UIPolicyConfigInternal@@AEAV-$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAE.c)
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800D6CD4 (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 *     ??$make_wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4_PO_STANDBY_AUDIO_POLICY@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@01@@Z @ 0x1800D6D38 (--$make_wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@YAJAEBU_WNF_STATE_NAME@.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x1800DA47C (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DBB88 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$com_ptr_t@UIEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DBD78 (-reset@-$com_ptr_t@UIEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIMulticastSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DBDAC (-reset@-$com_ptr_t@UIMulticastSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DBDE0 (-reset@-$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCCustomAudioEndpointResourceManagerCache@@UIEndpointResourceManagerProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x1800F6EC4 (--$MakeAndInitialize@VCCustomAudioEndpointResourceManagerCache@@UIEndpointResourceManagerProvide.c)
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800FE5A0 (-InitializeDeviceGraphManager@@YAJXZ.c)
 *     ?ScheduleScanForInstalledEffectPacks@EffectPackConfigurationManager@@QEAAJXZ @ 0x180103DC4 (-ScheduleScanForInstalledEffectPacks@EffectPackConfigurationManager@@QEAAJXZ.c)
 *     ?InitializeMulticastSessionManager@@YAJPEAPEAUIMulticastSessionManager@@@Z @ 0x1801080B4 (-InitializeMulticastSessionManager@@YAJPEAPEAUIMulticastSessionManager@@@Z.c)
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18011AC90 (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIV.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x180124220 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEAVEffectPackConfigurationManager@@AEAPEAUIEndpointResourceManagerProvider@@AEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEAVEffectPackConfigurationManager@@AEAPEAUIEndpointResourceManagerProvider@@AEAPEBU_tlgProvider_t@@@Z @ 0x180132BD4 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPol.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  wil::details *v2; // rax
  CPolicyConfig *v3; // rbx
  CPolicyConfig *v4; // rdi
  __int64 v5; // rdx
  signed int LastError; // ebx
  wil::details::in1diag3 *v7; // rcx
  PVOID *v9; // rdi
  unsigned int v10; // eax
  CAudioHealthMonitor *v11; // rax
  unsigned int v12; // r8d
  const char *v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // xmm6_8
  __int64 *v19; // rax
  __int64 v20; // rcx
  std::_Ref_count_base *v21; // rdx
  std::_Ref_count_base *v22; // rcx
  void *v23; // rcx
  AudioSessionManagerProvider *v24; // rcx
  _QWORD *v25; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  const char *v29; // r9
  int wnf_subscription; // eax
  wil::details *v31; // rcx
  struct wil::details::wnf_subscription_state_base *v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rdx
  RPC_STATUS v35; // eax
  int v36; // eax
  __int64 *v37; // rax
  int v38; // eax
  unsigned int pvData; // [rsp+40h] [rbp-C0h] BYREF
  wil::details *v40; // [rsp+48h] [rbp-B8h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-B0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  PSECURITY_DESCRIPTOR *v43; // [rsp+60h] [rbp-A0h] BYREF
  PSECURITY_DESCRIPTOR *p_SecurityDescriptor; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v45; // [rsp+70h] [rbp-90h]
  DWORD v46; // [rsp+78h] [rbp-88h] BYREF
  int v47[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v48; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v49[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v50[15]; // [rsp+98h] [rbp-68h] BYREF
  wchar_t String[32]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids);
  }
  v2 = (wil::details *)operator new[](0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v40 = v2;
  v4 = 0LL;
  if ( v2 )
  {
    memset_0(v2, 0, 0x58uLL);
    v4 = CPolicyConfig::CPolicyConfig(v3);
    v40 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>((void **)&v40);
  *(_QWORD *)v47 = 0LL;
  v40 = g_PolicyConfig;
  g_PolicyConfig = v4;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v40);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v47);
  if ( !g_PolicyConfig )
  {
    v5 = 2135LL;
LABEL_9:
    LastError = -2147024882;
LABEL_10:
    v7 = retaddr;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      v7,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)LastError);
    return (unsigned int)LastError;
  }
  v9 = (PVOID *)((char *)this + 560);
  wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::reset((char *)this + 560);
  LastError = Microsoft::WRL::Details::MakeAndInitialize<EffectPackConfigurationManager,EffectPackConfigurationManager,>((char **)this + 70);
  if ( LastError < 0 )
  {
    v5 = 2137LL;
    goto LABEL_10;
  }
  pvData = 0;
  pcbData = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"AudioHealthMonitorLimit",
         0x18u,
         0LL,
         &pvData,
         &pcbData) )
  {
    v10 = 5;
    pvData = 5;
  }
  else
  {
    v10 = pvData;
  }
  if ( v10 )
  {
    v11 = (CAudioHealthMonitor *)operator new[](0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    p_SecurityDescriptor = (PSECURITY_DESCRIPTOR *)v11;
    if ( v11 )
    {
      g_AudioHealthMonitor = (struct _FILETIME)CAudioHealthMonitor::CAudioHealthMonitor(v11, pvData);
      if ( g_AudioHealthMonitor )
        goto LABEL_21;
    }
    else
    {
      g_AudioHealthMonitor = 0LL;
    }
    v5 = 2154LL;
    goto LABEL_9;
  }
LABEL_21:
  LastError = Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>();
  v7 = retaddr;
  if ( LastError < 0 )
  {
    v5 = 2159LL;
    goto LABEL_11;
  }
  if ( !g_pVolumeProvider )
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x870, v12, v13);
  wil::com_ptr_t<IEndpointResourceManagerProvider,wil::err_returncode_policy>::reset(retaddr);
  v14 = Microsoft::WRL::Details::MakeAndInitialize<CCustomAudioEndpointResourceManagerCache,IEndpointResourceManagerProvider,>(&g_CustomEndpointResourceManagerProvider);
  LastError = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
      (const char *)(unsigned int)v14);
    v5 = 2163LL;
    goto LABEL_10;
  }
  v43 = 0LL;
  wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::reset(&v43);
  wil::com_query_to<IPolicyConfigInternal,Microsoft::WRL::ComPtr<CPolicyConfig> &>(v15, (__int64)&v43);
  *(_QWORD *)v47 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  v40 = (wil::details *)g_CustomEndpointResourceManagerProvider;
  v48 = *v9;
  p_SecurityDescriptor = v43;
  v16 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,IPolicyConfigInternal * &,EffectPackConfigurationManager * &,IEndpointResourceManagerProvider * &,_tlgProvider_t const * &>(
          v47[0],
          (unsigned int)&p_SecurityDescriptor,
          (unsigned int)&v48,
          (unsigned int)&v40,
          (__int64)v47);
  LastError = v16;
  if ( v16 < 0 )
  {
    v17 = 2170LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)v16);
LABEL_79:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
    return (unsigned int)LastError;
  }
  v16 = EffectPackConfigurationManager::ScheduleScanForInstalledEffectPacks(*v9);
  LastError = v16;
  if ( v16 < 0 )
  {
    v17 = 2174LL;
    goto LABEL_32;
  }
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"AudioSrvWatchDogTimerInMs",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    g_AudioSrvWatchDogTimerInMs = pvData;
  memset_0(String, 0, sizeof(String));
  v46 = 64;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"RenderStreamVolumeTaperPower",
          2u,
          0LL,
          String,
          &v46) )
  {
    *(double *)&v18 = _wtof(String);
    if ( *(double *)&v18 != 0.0 )
    {
      v19 = std::make_shared<CVolumeUnit,>(&p_SecurityDescriptor);
      v20 = *v19;
      v21 = (std::_Ref_count_base *)v19[1];
      *v19 = 0LL;
      v19[1] = 0LL;
      g_RenderStreamTaperTranslator = v20;
      v22 = qword_1801D7A50;
      qword_1801D7A50 = v21;
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
      if ( v45 )
        std::_Ref_count_base::_Decref(v45);
      CVolumeUnit::SetDBRange(g_RenderStreamTaperTranslator, (__int64)v21, -96.0, 0.0, SLODWORD(FLOAT_1_5), v18);
    }
  }
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"UnrestrictedPerProcessLoopback",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    g_UnrestrictedPerProcessLoopback = pvData;
  v16 = InitializeDeviceGraphManager();
  LastError = v16;
  if ( v16 < 0 )
  {
    v17 = 2201LL;
    goto LABEL_32;
  }
  v16 = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>(v23);
  LastError = v16;
  if ( v16 < 0 )
  {
    v17 = 2203LL;
    goto LABEL_32;
  }
  v16 = AudioSessionManagerProvider::Initialize(v24);
  LastError = v16;
  if ( v16 < 0 )
  {
    v17 = 2208LL;
    goto LABEL_32;
  }
  v25 = g_pEndpointCharacteristicsCache;
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache,
                     g_pEndpointCharacteristicsCache,
                     0LL);
  v25[12] = ThreadpoolWork;
  if ( ThreadpoolWork )
    SubmitThreadpoolWork(ThreadpoolWork);
  p_SecurityDescriptor = (PSECURITY_DESCRIPTOR *)g_PolicyManager;
  v16 = Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
          v27,
          &p_SecurityDescriptor);
  LastError = v16;
  if ( v16 < 0 )
  {
    v17 = 2211LL;
    goto LABEL_32;
  }
  wil::com_ptr_t<IMulticastSessionManager,wil::err_returncode_policy>::reset();
  v16 = InitializeMulticastSessionManager(&g_MulticastSessionManager);
  LastError = v16;
  if ( v16 < 0 )
  {
    v17 = 2213LL;
    goto LABEL_32;
  }
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x8A8,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
                  v29);
    goto LABEL_79;
  }
  if ( !SecurityDescriptor )
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x8A9, v28, v29);
  p_SecurityDescriptor = &SecurityDescriptor;
  LOBYTE(v45) = 1;
  v50[0] = off_1801756C0;
  v50[1] = this;
  v50[13] = v50;
  v40 = 0LL;
  wnf_subscription = wil::details::make_wnf_subscription_state<enum _PO_STANDBY_AUDIO_POLICY>(
                       (__int64)retaddr,
                       (__int64)v49,
                       v28,
                       &v40);
  v31 = 0LL;
  if ( wnf_subscription >= 0 )
    v31 = v40;
  v40 = v31;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (wil::details **)this + 71,
    &v40);
  if ( v40 )
    wil::details::delete_wnf_subscription_state(v40, v32);
  wistd::function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>::~function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>((__int64)v49);
  if ( !*((_QWORD *)this + 71) )
  {
    LastError = -2147024882;
    v33 = 2147942414LL;
    v34 = 2233LL;
LABEL_78:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)v33);
    LocalFree(SecurityDescriptor);
    goto LABEL_79;
  }
  if ( ServerEndpointIsStarted(L"AudioClientRpc") )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids);
    }
  }
  else
  {
    v35 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
    LastError = v35 != 0 ? v35 | 0x80010000 : 0;
    if ( LastError < 0 )
    {
      v33 = (unsigned int)LastError;
      v34 = 2244LL;
      goto LABEL_78;
    }
  }
  v36 = RpcServerRegisterIf3(&unk_18017E1A0, 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, SecurityDescriptor);
  LastError = v36 != 0 ? v36 | 0x80010000 : 0;
  if ( LastError < 0 )
  {
    v33 = (unsigned int)LastError;
    v34 = 2251LL;
    goto LABEL_78;
  }
  *((_DWORD *)this + 25) = 1;
  v37 = Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::Create();
  if ( !v37[6] )
  {
    byte_1801D7AA8 = 1;
    byte_1801D7A98 = 0;
    qword_1801D7A90 = (__int64)&off_1801756B0;
    v37[6] = (__int64)&qword_1801D7A90;
  }
  v38 = Windows::Internal::ServiceModuleBase::Initialize<Windows::Internal::ServiceModuleBase::SecurityPolicyEveryoneLocal,2,Windows::Internal::DefaultServerDescriptor>((Windows::Internal::ServiceModuleBase *)v37);
  LastError = v38;
  if ( v38 < 0 )
  {
    v33 = (unsigned int)v38;
    v34 = 2255LL;
    goto LABEL_78;
  }
  *((_DWORD *)this + 26) = 1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids);
  }
  LocalFree(SecurityDescriptor);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
  return 0LL;
}
