/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180054BE8
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180054A60 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006ECBC (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180073B6C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180078030 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58116118@@@details@wil@@QEAA_NXZ @ 0x1800DBCC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58116118@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAudioSrv::ProcessDeviceInternal(RTL_SRWLOCK *this, unsigned __int16 *a2)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  char v4; // bl
  _DWORD *v5; // rcx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // [rsp+20h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  struct CEndpointStore *v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  RTL_SRWLOCK *v18; // [rsp+60h] [rbp+20h] BYREF
  struct CEndpointCharacteristics *v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v18 = this;
  v16 = 0LL;
  if ( (int)CEndpointStoreCache::GetEndpointStore(this, a2, &v16) >= 0 )
  {
    v20 = 0LL;
    LODWORD(v18) = 0;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v20);
    if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, unsigned __int16 *, __int64 *))GetDevice)(
           g_DeviceEnumerator,
           a2,
           &v20) >= 0
      && (*(int (__fastcall **)(__int64, RTL_SRWLOCK **))(*(_QWORD *)v20 + 48LL))(v20, &v18) >= 0
      && (_DWORD)v18 == 1 )
    {
      v4 = 1;
      v19 = 0LL;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v19);
      GetEndpointCharacteristics(a2, 0, &v19);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    }
    else
    {
      v4 = 0;
      v5 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v5 > 4u && tlgKeywordOn((__int64)v5, 512LL) )
      {
        v19 = (struct CEndpointCharacteristics *)a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v6,
          (unsigned int)&unk_1801A4BA8,
          v7,
          v8,
          (__int64)&v19);
      }
      (*(void (__fastcall **)(struct IAudioPolicyManager *, unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 232LL))(
        g_PolicyManager,
        a2);
      LOBYTE(v9) = 1;
      v10 = CAudioSessionManager::Disconnect(*((_QWORD *)v16 + 12), 0LL, v9);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7A6,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
          (const char *)(unsigned int)v10,
          v14);
    }
    v15 = 0LL;
    if ( v20 )
    {
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v15);
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v20)(
             v20,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v15) >= 0 )
      {
        LODWORD(v19) = 0;
        if ( (*(int (__fastcall **)(__int64, struct CEndpointCharacteristics **))(*(_QWORD *)v15 + 24LL))(v15, &v19) >= 0
          && !(_DWORD)v19 )
        {
          LOBYTE(v11) = v4;
          (*(void (__fastcall **)(struct IAudioPolicyManager *, unsigned __int16 *, __int64))(*(_QWORD *)g_PolicyManager
                                                                                            + 240LL))(
            g_PolicyManager,
            a2,
            v11);
          LOBYTE(v12) = v4;
          (*(void (__fastcall **)(struct IMulticastSessionManager *, unsigned __int16 *, __int64))(*(_QWORD *)g_MulticastSessionManager
                                                                                                 + 40LL))(
            g_MulticastSessionManager,
            a2,
            v12);
        }
      }
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_58116118>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58116118>::GetImpl'::`2'::impl)
      && g_pVolumeProvider )
    {
      LOBYTE(v13) = v4;
      (*(void (__fastcall **)(struct IVolumeProvider *, unsigned __int16 *, __int64))(*(_QWORD *)g_pVolumeProvider + 56LL))(
        g_pVolumeProvider,
        a2,
        v13);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  }
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v16);
}
