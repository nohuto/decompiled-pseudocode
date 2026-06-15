/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800CB974
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180042F44 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180014990 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18002F580 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800397B0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180062BE8 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18007DF00 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_4e3435982d1674667e2b703d99bd3127___ @ 0x1800C3868 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800C3868.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_cd9216ae8b29ebed6b86303d8e91f75e___ @ 0x1800C3B28 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800C3B28.c)
 *     wil::scope_exit__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___ @ 0x1800C3D80 (wil--scope_exit__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___.c)
 *     _lambda_bcf9c58b74ebdaae84df57cea6a1304a_::_lambda_bcf9c58b74ebdaae84df57cea6a1304a_ @ 0x1800C3E08 (_lambda_bcf9c58b74ebdaae84df57cea6a1304a_--_lambda_bcf9c58b74ebdaae84df57cea6a1304a_.c)
 *     _lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_::_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_ @ 0x1800C3E30 (_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_--_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_.c)
 *     wil::details::lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___::_lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___ @ 0x1800C4318 (wil--details--lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___--_lambda_call__lambda_496e.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_P @ 0x1800CC9A0 (WPP_SF_P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
        __int64 a1,
        struct EndpointCharacteristicsDescriptor *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *a5,
        __int64 a6,
        __int64 *a7)
{
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 *v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 *v16; // rax
  CEndpointCharacteristics *v17; // rbx
  int EndpointId; // eax
  __int128 *v19; // rax
  __int64 (__fastcall *v20)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, SaDeviceParams *, __int64, _DWORD, __int64 *, __int128 *, _QWORD, _QWORD, __int64 *); // rdi
  SaDeviceParams *v21; // rbx
  int v22; // eax
  unsigned int v23; // edi
  __int64 *v24; // rax
  SaDeviceParams *v25; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 *v30; // [rsp+90h] [rbp-70h] BYREF
  SaDeviceParams *v31; // [rsp+98h] [rbp-68h] BYREF
  struct EndpointCharacteristicsDescriptor *v32; // [rsp+A0h] [rbp-60h] BYREF
  struct _GUID v33; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v34; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v35; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-20h]
  _BYTE v37[48]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v38[5]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v39; // [rsp+140h] [rbp+40h] BYREF
  int v40; // [rsp+148h] [rbp+48h]
  int v41; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v42[24]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v32 = a2;
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a7 + 200LL))(*a7);
  v26 = 0LL;
  v27 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 120LL))(a3, *a7, &v26);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBEB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_3:
    if ( (_QWORD)v26 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v26,
        *((__int64 **)&v26 + 1));
      std::_Deallocate<16>((void *)v26, (struct std::nothrow_t *)((v27 - v26) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return v11;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, v10, (__int64)(*((_QWORD *)&v26 + 1) - v26) >> 3);
  }
  v13 = (__int64 *)v26;
  if ( (__int64)(*((_QWORD *)&v26 + 1) - v26) >> 3 )
  {
    v25 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*a7 + 120LL))(*a7, &v25);
    v11 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF2,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_13:
      if ( v25 )
        SaDeviceParams::`scalar deleting destructor'(v25);
      v25 = 0LL;
      goto LABEL_3;
    }
    v31 = 0LL;
    v33 = (struct _GUID)*((_OWORD *)v25 + 4);
    v34 = (struct _GUID)*((_OWORD *)v25 + 3);
    v15 = DeriveSaDeviceParametersForStream(
            (CEndpointCharacteristics ***)v32,
            AUDCLNT_SHAREMODE_SHARED,
            *((_DWORD *)v25 + 2),
            &v34,
            &v33,
            a4,
            a5,
            a6,
            &v31);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBFF,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_18;
    }
    v16 = lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_::_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_((__int64 *)&v34, a7);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_4e3435982d1674667e2b703d99bd3127___(
      &v33,
      (_QWORD *)v26,
      *((_QWORD **)&v26 + 1),
      v16);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64)&v33);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_c1536f98adc13219c785ca614022e7d6_Traceguids);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a7);
    v30 = 0LL;
    v17 = *(CEndpointCharacteristics **)v32;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v30,
      0LL);
    EndpointId = CEndpointCharacteristics::GetEndpointId(v17, &v30);
    v11 = EndpointId;
    if ( EndpointId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC12,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointId);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
LABEL_18:
      if ( v31 )
        SaDeviceParams::`scalar deleting destructor'(v31);
      goto LABEL_13;
    }
    v35 = 0LL;
    v36 = 0LL;
    v19 = (__int128 *)lambda_bcf9c58b74ebdaae84df57cea6a1304a_::_lambda_bcf9c58b74ebdaae84df57cea6a1304a_(
                        v38,
                        (__int64)&v28,
                        (__int64)&v25,
                        (__int64)&v32,
                        (__int64)&v35,
                        (__int64)&v26);
    wil::scope_exit__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___((__int64)v37, v19);
    v41 = 1;
    memset(v42, 0, sizeof(v42));
    v40 = v28;
    v39 = 0LL;
    *(_OWORD *)&v42[4] = *((_OWORD *)v25 + 3);
    *(_DWORD *)v42 = *((_DWORD *)v25 + 2);
    v29 = 0LL;
    v20 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, SaDeviceParams *, __int64, _DWORD, __int64 *, __int128 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
    v21 = v31;
    v22 = v20(g_DeviceGraphManager, v32, v31, 2LL, 0, &v39, &v35, 0LL, 0LL, &v29);
    v23 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC52,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v22);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
      wil::details::lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___::_lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___((__int64)v37);
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v35);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
      if ( v21 )
        SaDeviceParams::`scalar deleting destructor'(v21);
      if ( v25 )
        SaDeviceParams::`scalar deleting destructor'(v25);
      v25 = 0LL;
      if ( (_QWORD)v26 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v26,
          *((__int64 **)&v26 + 1));
        std::_Deallocate<16>((void *)v26, (struct std::nothrow_t *)((v27 - v26) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      return v23;
    }
    v24 = lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_::_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_((__int64 *)&v33, &v29);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_cd9216ae8b29ebed6b86303d8e91f75e___(
      &v34,
      v26,
      *((__int64 *)&v26 + 1),
      v24);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64)&v34);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_c1536f98adc13219c785ca614022e7d6_Traceguids);
    }
    v37[40] = 0;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
    wil::details::lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___::_lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___((__int64)v37);
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v35);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
    if ( v21 )
      SaDeviceParams::`scalar deleting destructor'(v21);
    if ( v25 )
      SaDeviceParams::`scalar deleting destructor'(v25);
    v13 = (__int64 *)v26;
  }
  if ( v13 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, *((__int64 **)&v26 + 1));
    std::_Deallocate<16>((void *)v26, (struct std::nothrow_t *)((v27 - v26) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return 0LL;
}
