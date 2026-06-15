/*
 * XREFs of ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180125D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18005CCB0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?Find@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@@Z @ 0x180068B24 (-Find@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sa.c)
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x180088274 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C2528 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180124C70 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?GetKey@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@AEAAPEAUISaDeviceProxy@@PEAU3@@Z @ 0x1801251BC (-GetKey@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@AEAAPEAUISaDevicePro.c)
 *     ?GetNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUISaDeviceProxy@@AEAI1AEAPEAV312@@Z @ 0x180125274 (-GetNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDev.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801269C0 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x180126D4C (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        const struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5)
{
  __int64 v9; // r8
  const char *v10; // r9
  void (__fastcall **v11)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall *v12)(struct IAudioStreamInfo *, __int64 *); // rbx
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, struct ISaDeviceProxy **); // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct Sarm::CEndpointResourcePool *v20; // rbx
  __int64 Key; // rax
  __int64 Node; // rax
  const char *v23; // r9
  int v24; // edi
  __int64 v25; // [rsp+30h] [rbp-61h] BYREF
  struct ISaDeviceProxy *v26; // [rsp+38h] [rbp-59h] BYREF
  struct Sarm::CEndpointResourcePool *v27; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-49h] BYREF
  int v29[3]; // [rsp+4Ch] [rbp-45h] BYREF
  struct Sarm::CEndpointResourcePool *v30; // [rsp+58h] [rbp-39h] BYREF
  struct SPATIAL_STREAM_PROPERTIES *v31; // [rsp+60h] [rbp-31h]
  __int64 v32; // [rsp+68h] [rbp-29h] BYREF
  __int128 v33; // [rsp+70h] [rbp-21h]
  __int128 v34; // [rsp+80h] [rbp-11h]
  __int128 v35; // [rsp+90h] [rbp-1h]
  __int64 v36; // [rsp+A0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v31 = a5;
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice", 278);
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      282LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v10);
  if ( !a4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      283LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v10);
  if ( !a5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      284LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v10);
  if ( util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::Find(
         (__int64)this + 192,
         (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2,
         v9) )
  {
    return 0LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v11 = *(void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  v25 = 0LL;
  v12 = (__int64 (__fastcall *)(struct IAudioStreamInfo *, __int64 *))v11[15];
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v25);
  v13 = v12(a2, &v25);
  if ( v13 < 0 )
  {
    v14 = 300LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_11:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    return (unsigned int)v13;
  }
  v16 = v25;
  if ( !v25 )
  {
    v13 = -2005139190;
    v14 = 301LL;
    goto LABEL_10;
  }
  v26 = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v25 + 224LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v26);
  v13 = v17(v16, &v26);
  if ( v13 < 0 )
  {
    v19 = 304LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
    goto LABEL_11;
  }
  if ( !v26 )
  {
    v13 = -2005139197;
    v19 = 305LL;
    goto LABEL_18;
  }
  if ( (a3 & 0x800000) == 0 )
    goto LABEL_37;
  v20 = 0LL;
  v27 = 0LL;
  Key = util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::GetKey(
          v18,
          (void (__fastcall ***)(_QWORD, GUID *, __int64 *))v26);
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach((__int64 *)&v27, Key);
  if ( v27 )
  {
    v30 = v27;
    v29[0] = 0;
    v28 = 0;
    Node = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNode(
             (__int64)this + 112,
             (unsigned int *)&v30,
             v29,
             &v28,
             &v32);
    if ( Node )
      v20 = (struct Sarm::CEndpointResourcePool *)(Node + 8);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v27);
  v27 = v20;
  if ( !v20 )
  {
    v13 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(this, v26, &v27);
    if ( v13 < 0 )
    {
      v19 = 341LL;
      goto LABEL_18;
    }
    v20 = v27;
    if ( !v27 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        342LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v23);
  }
  v24 = Sarm::CSpatialAudioResourceManager::AddStream(this, a2, a3, a4, v31, v20);
  if ( v24 >= 0 )
  {
LABEL_37:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    return 0LL;
  }
  if ( !*((_DWORD *)v20 + 3) && *(_QWORD *)v20 )
    ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 112);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x160,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)(unsigned int)v24);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
  if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  return (unsigned int)v24;
}
