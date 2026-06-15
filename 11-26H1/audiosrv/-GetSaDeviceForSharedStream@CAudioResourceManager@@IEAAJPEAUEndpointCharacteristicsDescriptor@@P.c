/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18008AEDC
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800C5C40 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180014990 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800792D0 (-IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_e4c7d3c53d0b0ab1b1215ef3bd828cfb___ @ 0x1800C35D4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IS.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_0ae6dbfbe01c86c1856d8352ed0d02e7___ @ 0x1800C36F4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800C36F4.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_9514479127df8c74baee04591d192ad8___ @ 0x1800C3994 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800C3994.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_9e2ce3052ce45d0e74912c1d92e98248___ @ 0x1800C3A50 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800C3A50.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C44F8 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800CB634 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescripto.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800CC844 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_P @ 0x1800CC9A0 (WPP_SF_P.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream(
        __int64 a1,
        EffectPack **a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        CAudioSessionManager *a10,
        char a11,
        char a12,
        __int64 a13)
{
  __int64 v16; // rbx
  _QWORD *v17; // rdi
  RTL_SRWLOCK *v18; // rcx
  int EndpointStore; // eax
  unsigned int SaDeviceForPackagedApp; // ebx
  int v21; // eax
  bool v23; // di
  RTL_SRWLOCK *v24; // rcx
  int v25; // r8d
  bool v26; // zf
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  __int64 v31; // r8
  __int64 *v32; // rcx
  char v33; // r15
  _QWORD *i; // rbx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  unsigned __int16 *v37; // rsi
  __int64 v38; // rdi
  const void *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  char v45; // si
  char v46; // di
  _QWORD *v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rbx
  int v52; // eax
  unsigned int v53; // edi
  int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // r12
  __int64 v57; // r15
  __int64 v58; // rsi
  int v59; // edi
  __int64 v60; // rdx
  __int128 v61; // [rsp+60h] [rbp-99h] BYREF
  __int64 v62; // [rsp+70h] [rbp-89h]
  __int128 v63; // [rsp+78h] [rbp-81h] BYREF
  __int64 v64; // [rsp+88h] [rbp-71h]
  __int64 v65; // [rsp+90h] [rbp-69h] BYREF
  SaDeviceParams *v66; // [rsp+98h] [rbp-61h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-59h] BYREF
  struct CEndpointStore *v68; // [rsp+A8h] [rbp-51h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-49h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-41h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-39h]
  EffectPack **v72; // [rsp+C8h] [rbp-31h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-29h]
  struct _GUID v74; // [rsp+E0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+3Fh]

  v72 = a2;
  v73 = a7;
  v16 = a8;
  v70 = a8;
  v17 = (_QWORD *)a13;
  v71 = a13;
  v74 = *(struct _GUID *)(a4 + 48);
  if ( EffectPack::IsConnectorModeSupportedForSWAPOFallback(a2[1], *(unsigned int *)(a4 + 8), &v74) )
  {
    v68 = 0LL;
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v18, *((const unsigned __int16 **)*a2 + 6), &v68);
    SaDeviceForPackagedApp = EndpointStore;
    if ( EndpointStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x851,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointStore);
LABEL_7:
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v68);
      return SaDeviceForPackagedApp;
    }
    v63 = 0LL;
    v64 = 0LL;
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v68 + 13) + 96LL))(*((_QWORD *)v68 + 13), &v63);
    SaDeviceForPackagedApp = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x854,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v21);
      if ( (_QWORD)v63 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v63,
          *((__int64 **)&v63 + 1));
        std::_Deallocate<16>((void *)v63, (struct std::nothrow_t *)((v64 - v63) & 0xFFFFFFFFFFFFFFF8uLL));
        v63 = 0LL;
        v64 = 0LL;
      }
      goto LABEL_7;
    }
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_e4c7d3c53d0b0ab1b1215ef3bd828cfb___(
      &v69,
      v63,
      *((_QWORD *)&v63 + 1),
      a4);
    v23 = v69 != *((_QWORD *)&v63 + 1);
    SaDeviceForPackagedApp = v69 != *((_QWORD *)&v63 + 1) ? 0x887C0043 : 0;
    if ( (_QWORD)v63 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v63,
        *((__int64 **)&v63 + 1));
      std::_Deallocate<16>((void *)v63, (struct std::nothrow_t *)((v64 - v63) & 0xFFFFFFFFFFFFFFF8uLL));
      v63 = 0LL;
      v64 = 0LL;
    }
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v68);
    v26 = !v23;
    v17 = (_QWORD *)v71;
    if ( !v26 )
      goto LABEL_20;
    v16 = v70;
  }
  if ( a3 )
    v27 = (*(__int64 (__fastcall **)(__int64, EffectPack **, __int64, _QWORD, int, __int64, __int64, _QWORD *))(*(_QWORD *)a3 + 48LL))(
            a3,
            a2,
            a4,
            a5,
            a6,
            a7,
            v16,
            v17);
  else
    v27 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, EffectPack **, __int64, _QWORD, int, __int64, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            a4,
            a5,
            a6,
            a7,
            v16,
            0LL,
            0LL,
            v17);
  SaDeviceForPackagedApp = v27;
  v24 = (RTL_SRWLOCK *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_c1536f98adc13219c785ca614022e7d6_Traceguids, v27);
  }
LABEL_20:
  if ( SaDeviceForPackagedApp == -2005139364 )
  {
    if ( a9 )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 (int)v24,
                                 (int)a2,
                                 v25,
                                 a4,
                                 a5,
                                 a6,
                                 a7,
                                 v70,
                                 a10,
                                 (__int64)v17);
      if ( (SaDeviceForPackagedApp & 0x80000000) == 0 )
        return 0LL;
      v28 = 2173LL;
      goto LABEL_24;
    }
LABEL_28:
    v28 = 2400LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)SaDeviceForPackagedApp);
    return SaDeviceForPackagedApp;
  }
  if ( SaDeviceForPackagedApp != -2005139360 && SaDeviceForPackagedApp != -2005139389 )
  {
    if ( (SaDeviceForPackagedApp & 0x80000000) == 0 )
      return 0LL;
    goto LABEL_28;
  }
  v68 = 0LL;
  v29 = CEndpointStoreCache::GetEndpointStore(v24, *(const unsigned __int16 **)a4, &v68);
  SaDeviceForPackagedApp = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_7;
  }
  v61 = 0LL;
  v62 = 0LL;
  v30 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v68 + 13) + 96LL))(*((_QWORD *)v68 + 13), &v61);
  SaDeviceForPackagedApp = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v30);
    v32 = (__int64 *)v61;
    if ( !(_QWORD)v61 )
      goto LABEL_7;
LABEL_135:
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v32, *((__int64 **)&v61 + 1));
    std::_Deallocate<16>((void *)v61, (struct std::nothrow_t *)((v62 - v61) & 0xFFFFFFFFFFFFFFF8uLL));
    v62 = 0LL;
    v61 = 0LL;
    goto LABEL_7;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, v31, (__int64)(*((_QWORD *)&v61 + 1) - v61) >> 3);
  }
  v65 = 0LL;
  v33 = 0;
  for ( i = (_QWORD *)v61; ; ++i )
  {
    v35 = (_QWORD *)*((_QWORD *)&v61 + 1);
    if ( i == *((_QWORD **)&v61 + 1) )
      break;
    v36 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(*(_QWORD *)*i + 40LL))(*i, &v74);
    if ( *v36 == *(_QWORD *)(a4 + 48)
      && v36[1] == *(_QWORD *)(a4 + 56)
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 96LL))(*i) == *(_DWORD *)(a4 + 8)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 104LL))(*i) )
    {
      if ( a12 )
      {
        v37 = *(unsigned __int16 **)(a4 + 16);
        v38 = v37[8];
        v39 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i);
        if ( memcmp_0(v39, v37, v38 + 18) )
        {
LABEL_48:
          v17 = (_QWORD *)v71;
          continue;
        }
      }
      if ( a11 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != *(_QWORD *)(a4 + 32) )
          goto LABEL_48;
      }
      else if ( v33 || (v33 = 0, (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 152LL))(*i)) )
      {
        v33 = 1;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v40 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
        WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, v41, v40);
      }
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v65, i);
      v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) - *(_QWORD *)(a4 + 32);
      v43 = -v42;
      if ( v42 > 0 )
        v43 = v42;
      v44 = v65;
      if ( v65 && v43 && v33 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
        v44 = v65;
      }
      v65 = 0LL;
      v17 = (_QWORD *)v71;
      *(_QWORD *)v71 = v44;
    }
  }
  if ( *v17 )
    goto LABEL_109;
  v67 = 0LL;
  v45 = 0;
  v46 = 0;
  v47 = (_QWORD *)v61;
  while ( 2 )
  {
    if ( v47 == v35 )
      goto LABEL_127;
    v48 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(*(_QWORD *)*v47 + 40LL))(*v47, &v74);
    if ( *v48 != *(_QWORD *)(a4 + 48)
      || v48[1] != *(_QWORD *)(a4 + 56)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 96LL))(*v47) != *(_DWORD *)(a4 + 8)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 104LL))(*v47) )
    {
LABEL_75:
      ++v47;
      v35 = (_QWORD *)*((_QWORD *)&v61 + 1);
      continue;
    }
    break;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 168LL))(*v47) )
  {
    v46 = 1;
    goto LABEL_75;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 136LL))(*v47) )
  {
    v45 = 1;
    goto LABEL_75;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v49 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 32LL))(*v47);
    WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, v50, v49);
  }
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v67, v47);
  v51 = v67;
  if ( !v67 )
  {
LABEL_127:
    if ( !a12 && !a11 )
      goto LABEL_133;
    if ( v45 )
    {
      SaDeviceForPackagedApp = -2004287448;
      v60 = 2316LL;
      goto LABEL_134;
    }
    if ( v46 )
    {
      SaDeviceForPackagedApp = -2004287447;
      v60 = 2317LL;
    }
    else
    {
LABEL_133:
      SaDeviceForPackagedApp = -2005139360;
      v60 = 2319LL;
    }
LABEL_134:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v60,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)SaDeviceForPackagedApp);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
    v32 = (__int64 *)v61;
    if ( !(_QWORD)v61 )
      goto LABEL_7;
    goto LABEL_135;
  }
  v66 = 0LL;
  v52 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v67 + 120LL))(v67, &v66);
  v53 = v52;
  if ( v52 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x915,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v52);
LABEL_83:
    if ( v66 )
      SaDeviceParams::`scalar deleting destructor'(v66);
    v66 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
    if ( (_QWORD)v61 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v61,
        *((__int64 **)&v61 + 1));
      std::_Deallocate<16>((void *)v61, (struct std::nothrow_t *)((v62 - v61) & 0xFFFFFFFFFFFFFFF8uLL));
      v61 = 0LL;
      v62 = 0LL;
    }
    SaDeviceForPackagedApp = v53;
    goto LABEL_7;
  }
  v63 = 0LL;
  v64 = 0LL;
  v54 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)v68 + 13) + 120LL))(
          *((_QWORD *)v68 + 13),
          v51,
          &v63);
  v53 = v54;
  if ( v54 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x919,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v54);
    if ( (_QWORD)v63 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v63,
        *((__int64 **)&v63 + 1));
      std::_Deallocate<16>((void *)v63, (struct std::nothrow_t *)((v64 - v63) & 0xFFFFFFFFFFFFFFF8uLL));
      v63 = 0LL;
      v64 = 0LL;
    }
    goto LABEL_83;
  }
  v69 = v51;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v69);
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_0ae6dbfbe01c86c1856d8352ed0d02e7___(
    &v74,
    v63,
    *((_QWORD *)&v63 + 1),
    &v69);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v74);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_c1536f98adc13219c785ca614022e7d6_Traceguids);
  }
  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v61);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
  v55 = v71;
  v56 = v70;
  v57 = v73;
  v58 = (__int64)v72;
  SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, EffectPack **, __int64, _QWORD, int, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
                             g_DeviceGraphManager,
                             v72,
                             a4,
                             a5,
                             a6,
                             v73,
                             v70,
                             0LL,
                             0LL,
                             v71);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      17LL,
      &WPP_c1536f98adc13219c785ca614022e7d6_Traceguids,
      SaDeviceForPackagedApp);
  }
  if ( (SaDeviceForPackagedApp & 0x80000000) != 0 )
  {
    v70 = 0LL;
    v59 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, SaDeviceParams *, __int64, _DWORD, __int64, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v58,
            v66,
            2LL,
            0,
            v57,
            v56,
            0LL,
            0LL,
            &v70);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_c1536f98adc13219c785ca614022e7d6_Traceguids,
        (unsigned int)v59);
    }
    if ( v59 >= 0 )
    {
      v69 = v70;
      if ( v70 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_9e2ce3052ce45d0e74912c1d92e98248___(
        &v72,
        v63,
        *((_QWORD *)&v63 + 1),
        &v69);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v72);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v70);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)SaDeviceForPackagedApp);
    if ( (_QWORD)v63 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v63,
        *((__int64 **)&v63 + 1));
      std::_Deallocate<16>((void *)v63, (struct std::nothrow_t *)((v64 - v63) & 0xFFFFFFFFFFFFFFF8uLL));
      v63 = 0LL;
      v64 = 0LL;
    }
    if ( v66 )
      SaDeviceParams::`scalar deleting destructor'(v66);
    v66 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
    v32 = (__int64 *)v61;
    if ( !(_QWORD)v61 )
      goto LABEL_7;
    goto LABEL_135;
  }
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_9514479127df8c74baee04591d192ad8___(
    &v72,
    v63,
    *((_QWORD *)&v63 + 1),
    v55);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_c1536f98adc13219c785ca614022e7d6_Traceguids);
  }
  if ( (_QWORD)v63 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v63,
      *((__int64 **)&v63 + 1));
    std::_Deallocate<16>((void *)v63, (struct std::nothrow_t *)((v64 - v63) & 0xFFFFFFFFFFFFFFF8uLL));
    v63 = 0LL;
    v64 = 0LL;
  }
  if ( v66 )
    SaDeviceParams::`scalar deleting destructor'(v66);
  v66 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
LABEL_109:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
  if ( (_QWORD)v61 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v61,
      *((__int64 **)&v61 + 1));
    std::_Deallocate<16>((void *)v61, (struct std::nothrow_t *)((v62 - v61) & 0xFFFFFFFFFFFFFFF8uLL));
    v61 = 0LL;
    v62 = 0LL;
  }
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v68);
  return 0LL;
}
