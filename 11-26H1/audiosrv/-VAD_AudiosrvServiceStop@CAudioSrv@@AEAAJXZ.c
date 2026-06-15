/*
 * XREFs of ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800DB86C
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800DAA10 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180054E0C (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x1800ABA38 (-Create@-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvc.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     ?Shutdown@AudioSessionManagerProvider@@YAXXZ @ 0x1800D391C (-Shutdown@AudioSessionManagerProvider@@YAXXZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800DA738 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ?Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ @ 0x1800DACF0 (-Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@UIEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DBD78 (-reset@-$com_ptr_t@UIEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIMulticastSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DBDAC (-reset@-$com_ptr_t@UIMulticastSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DBDE0 (-reset@-$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DestroyDeviceGraphManager@@YAXXZ @ 0x1800FCBA8 (-DestroyDeviceGraphManager@@YAXXZ.c)
 *     ?Shutdown@EffectPackConfigurationManager@@QEAAXXZ @ 0x180103E68 (-Shutdown@EffectPackConfigurationManager@@QEAAXXZ.c)
 *     ?UninitializeMulticastSessionManager@@YAXPEAUIMulticastSessionManager@@@Z @ 0x180108468 (-UninitializeMulticastSessionManager@@YAXPEAUIMulticastSessionManager@@@Z.c)
 *     ?DestroySpatialAudioResourceManager@@YAXXZ @ 0x180124EB0 (-DestroySpatialAudioResourceManager@@YAXXZ.c)
 *     ?UninitializeEndpointCharacteristicsCache@@YAJXZ @ 0x18013E158 (-UninitializeEndpointCharacteristicsCache@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStop(CAudioSrv *this)
{
  _UNKNOWN **v2; // rcx
  __int64 *v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  RPC_STATUS v7; // eax
  EffectPackConfigurationManager *v8; // rcx
  CSerialWorkQueue *v9; // rax
  AudioSessionManagerProvider *v10; // rcx
  void *v11; // rbx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids);
    v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 26) )
  {
    v3 = Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::Create();
    v4 = Windows::Internal::ServiceModuleBase::Uninitialize((Windows::Internal::ServiceModuleBase *)v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x661,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    *((_DWORD *)this + 26) = 0;
    v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 25) )
  {
    if ( v2 != &WPP_GLOBAL_Control && (*((_BYTE *)v2 + 28) & 4) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_((__int64)v2[2], 0x27u, (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids);
    v7 = RpcServerUnregisterIfEx(&unk_18017E1A0, 0LL, 1);
    if ( v7
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x28u,
        (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
        v7);
    }
    *((_DWORD *)this + 25) = 0;
  }
  if ( g_DuckingManager )
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 24LL))(g_DuckingManager);
  v8 = (EffectPackConfigurationManager *)*((_QWORD *)this + 70);
  if ( v8 )
  {
    EffectPackConfigurationManager::Shutdown(v8);
    wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::reset((char *)this + 560);
  }
  EnterCriticalSection(&g_csVadList);
  v14 = &g_csVadList;
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  v9 = (CSerialWorkQueue *)(*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)this + 120LL))(this);
  CSerialWorkQueue::Shutdown(v9);
  UninitializeMulticastSessionManager(g_MulticastSessionManager);
  wil::com_ptr_t<IMulticastSessionManager,wil::err_returncode_policy>::reset();
  DestroySpatialAudioResourceManager();
  AudioSessionManagerProvider::Shutdown(v10);
  if ( g_AudioResourceManager )
  {
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 16LL))(g_AudioResourceManager);
    g_AudioResourceManager = 0LL;
  }
  DestroyDeviceGraphManager();
  v11 = (void *)g_AudioHealthMonitor;
  if ( g_AudioHealthMonitor )
  {
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)&g_AudioHealthMonitor + 24LL));
    operator delete(v11, (const struct std::nothrow_t *)0x48);
  }
  g_AudioHealthMonitor = 0LL;
  UninitializeEndpointCharacteristicsCache();
  if ( g_CustomEndpointResourceManagerProvider )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)g_CustomEndpointResourceManagerProvider + 32LL))(g_CustomEndpointResourceManagerProvider);
    wil::com_ptr_t<IEndpointResourceManagerProvider,wil::err_returncode_policy>::reset(v12);
  }
  if ( g_pVolumeProvider )
  {
    (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 48LL))(g_pVolumeProvider);
    if ( g_pVolumeProvider )
    {
      (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 16LL))(g_pVolumeProvider);
      g_pVolumeProvider = 0LL;
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&g_PolicyConfig);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids, 0);
  }
  return 0LL;
}
