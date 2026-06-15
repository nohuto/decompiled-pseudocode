/*
 * XREFs of ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800E2278
 * Callers:
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E0E20 (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E1294 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E360 (--0-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180062BE8 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006E1BC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800747EC (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x1800782B4 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180078BF0 (--1-$out_param_t@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_front@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$forward_list@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV234@@Z @ 0x1800E00AC (--$emplace_front@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$forward_list@V-$ComPtr@UISt.c)
 *     ??$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAAEAUDisplacedStreamGroup@@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x1800E0124 (--$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV-$unique_ptr@USaDeviceParams@@U-$default_delete@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups(
        CBtAudioResourceManagerBase *this,
        struct CEndpointStore *a2,
        bool *a3)
{
  struct CEndpointStore *v4; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // r14d
  _QWORD *v10; // rsi
  _QWORD *v11; // rsi
  _QWORD *v12; // rbx
  __int64 *v14; // rdi
  __int64 *v15; // rsi
  unsigned __int8 (__fastcall *v16)(CBtAudioResourceManagerBase *, __int128 *); // rbx
  _QWORD *i; // rbx
  int v18; // eax
  __int64 **v19; // rsi
  __int64 **v20; // r14
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rsi
  _QWORD *v25; // rbx
  _QWORD *v26; // rsi
  _QWORD *v27; // rbx
  _QWORD *v28; // rbx
  __int64 **v29; // r15
  int v30; // eax
  _QWORD *v31; // rsi
  _QWORD *v32; // r12
  __int64 *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  int v36; // eax
  __int64 *v37; // rax
  _QWORD *v38; // rsi
  _QWORD *v39; // rbx
  _QWORD *v40; // rsi
  _QWORD *v41; // rbx
  _QWORD *v42; // rsi
  _QWORD *v43; // rbx
  _QWORD *v44; // rsi
  _QWORD *v45; // rbx
  _QWORD *v46; // rsi
  _QWORD *v47; // rbx
  _QWORD *v48; // rsi
  _QWORD *v49; // rbx
  int v50[4]; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v51; // [rsp+30h] [rbp-99h]
  _QWORD *v52; // [rsp+38h] [rbp-91h] BYREF
  _QWORD *v53; // [rsp+40h] [rbp-89h] BYREF
  SaDeviceParams *v54; // [rsp+48h] [rbp-81h] BYREF
  __int128 v55; // [rsp+50h] [rbp-79h] BYREF
  char v56; // [rsp+60h] [rbp-69h]
  CBtAudioResourceManagerBase *v57; // [rsp+70h] [rbp-59h]
  struct CEndpointStore *v58; // [rsp+78h] [rbp-51h]
  __int128 v59; // [rsp+80h] [rbp-49h] BYREF
  __int64 v60; // [rsp+90h] [rbp-39h]
  _QWORD v61[8]; // [rsp+98h] [rbp-31h] BYREF
  __int64 v62[2]; // [rsp+D8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v4 = a2;
  v58 = a2;
  v57 = this;
  v6 = 0LL;
  *a3 = 0;
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&v53);
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&v52);
  *(_OWORD *)v50 = 0LL;
  v51 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v7 + 104) + 112LL))(*(_QWORD *)(v7 + 104), v50);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v14 = *(__int64 **)v50;
    v15 = *(__int64 **)&v50[2];
    if ( *(_QWORD *)v50 != *(_QWORD *)&v50[2] )
    {
      do
      {
        v16 = *(unsigned __int8 (__fastcall **)(CBtAudioResourceManagerBase *, __int128 *))(*(_QWORD *)this + 152LL);
        v55 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v14 + 40LL))(*v14, v62);
        if ( !v16(this, &v55) )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v14 + 96LL))(*v14) == 1 )
            std::forward_list<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_front<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
              &v53,
              v14);
          std::forward_list<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_front<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
            &v52,
            v14);
        }
        ++v14;
      }
      while ( v14 != v15 );
      v15 = *(__int64 **)&v50[2];
      v14 = *(__int64 **)v50;
    }
    if ( v14 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v14, v15);
      std::_Deallocate<16>(*(void **)v50, (struct std::nothrow_t *)((v51 - *(_QWORD *)v50) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    for ( i = v53; i; i = (_QWORD *)*i )
    {
      *(_OWORD *)v50 = 0LL;
      v51 = 0LL;
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)v4 + 13) + 120LL))(
              *((_QWORD *)v4 + 13),
              i[1],
              v50);
      v9 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x42D,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v18);
        if ( *(_QWORD *)v50 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            *(__int64 **)v50,
            *(__int64 **)&v50[2]);
          std::_Deallocate<16>(*(void **)v50, (struct std::nothrow_t *)((v51 - *(_QWORD *)v50) & 0xFFFFFFFFFFFFFFF8uLL));
          *(_OWORD *)v50 = 0LL;
          v51 = 0LL;
        }
        v24 = v52;
        v52 = 0LL;
        if ( v24 )
        {
          do
          {
            v25 = (_QWORD *)*v24;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v24 + 1);
            std::_Deallocate<16>(v24, (struct std::nothrow_t *)0x10);
            v24 = v25;
          }
          while ( v25 );
        }
        v26 = v53;
        v53 = 0LL;
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
        return v9;
      }
      v19 = *(__int64 ***)v50;
      v20 = *(__int64 ***)&v50[2];
      while ( v19 != v20 )
      {
        v21 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64 *, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                         + 40LL))(
                g_DeviceGraphManager,
                *v19,
                i[1]);
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1073LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v21);
        v22 = *v19;
        v23 = **v19;
        v61[0] = off_180175F78;
        v61[7] = v61;
        (*(void (__fastcall **)(__int64 *, _QWORD *))(v23 + 368))(v22, v61);
        ++v19;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(i + 1);
      *a3 = 1;
      if ( *(_QWORD *)v50 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 **)v50,
          *(__int64 **)&v50[2]);
        std::_Deallocate<16>(*(void **)v50, (struct std::nothrow_t *)((v51 - *(_QWORD *)v50) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
    v28 = v52;
    while ( v28 )
    {
      v29 = (__int64 **)(v28 + 1);
      *(_OWORD *)v50 = 0LL;
      v51 = 0LL;
      v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)v4 + 13) + 120LL))(
              *((_QWORD *)v4 + 13),
              v28[1],
              v50);
      if ( v30 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1092LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v30);
      v31 = *(_QWORD **)v50;
      v32 = *(_QWORD **)&v50[2];
      while ( v31 != v32 )
      {
        v54 = 0LL;
        v33 = *v29;
        v34 = **v29;
        v55 = (unsigned __int64)&v54;
        v56 = 1;
        v9 = (*(__int64 (__fastcall **)(__int64 *, char *))(v34 + 120))(v33, (char *)&v55 + 8);
        wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v55);
        if ( (v9 & 0x80000000) != 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x44A,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)v9);
          std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v54);
          if ( *(_QWORD *)v50 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
              *(__int64 **)v50,
              *(__int64 **)&v50[2]);
            std::_Deallocate<16>(
              *(void **)v50,
              (struct std::nothrow_t *)((v51 - *(_QWORD *)v50) & 0xFFFFFFFFFFFFFFF8uLL));
            *(_OWORD *)v50 = 0LL;
            v51 = 0LL;
          }
          v42 = v52;
          v52 = 0LL;
          if ( v42 )
          {
            do
            {
              v43 = (_QWORD *)*v42;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v42 + 1);
              std::_Deallocate<16>(v42, (struct std::nothrow_t *)0x10);
              v42 = v43;
            }
            while ( v43 );
          }
          v44 = v53;
          v53 = 0LL;
          if ( v44 )
          {
            do
            {
              v45 = (_QWORD *)*v44;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v44 + 1);
              std::_Deallocate<16>(v44, (struct std::nothrow_t *)0x10);
              v44 = v45;
            }
            while ( v45 );
          }
          return v9;
        }
        (*(void (__fastcall **)(__int64 *, SaDeviceParams *))(**v29 + 72))(*v29, v54);
        v59 = 0LL;
        v60 = 0LL;
        v35 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(**v29 + 240))(*v29, &v59);
        v9 = v35;
        if ( v35 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x44F,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v35);
          std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v59);
          std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v54);
          if ( *(_QWORD *)v50 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
              *(__int64 **)v50,
              *(__int64 **)&v50[2]);
            std::_Deallocate<16>(
              *(void **)v50,
              (struct std::nothrow_t *)((v51 - *(_QWORD *)v50) & 0xFFFFFFFFFFFFFFF8uLL));
            *(_OWORD *)v50 = 0LL;
            v51 = 0LL;
          }
          v38 = v52;
          v52 = 0LL;
          if ( v38 )
          {
            do
            {
              v39 = (_QWORD *)*v38;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v38 + 1);
              std::_Deallocate<16>(v38, (struct std::nothrow_t *)0x10);
              v38 = v39;
            }
            while ( v39 );
          }
          v40 = v53;
          v53 = 0LL;
          if ( v40 )
          {
            do
            {
              v41 = (_QWORD *)*v40;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v40 + 1);
              std::_Deallocate<16>(v40, (struct std::nothrow_t *)0x10);
              v40 = v41;
            }
            while ( v41 );
          }
          return v9;
        }
        v36 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager
                                                                                         + 40LL))(
                g_DeviceGraphManager,
                *v31,
                *v29);
        if ( v36 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1105LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v36);
        v62[0] = 0LL;
        *(_QWORD *)&v55 = v62;
        v37 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v55);
        Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v31, v37);
        std::forward_list<DisplacedStreamGroup>::emplace_front<Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> &>(
          (_QWORD *)v57 + 13,
          v62,
          (__int64 *)&v54,
          (__int64 *)&v59);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v62);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v59);
        std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v54);
        ++v31;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v28 + 1);
      *a3 = 1;
      if ( *(_QWORD *)v50 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 **)v50,
          *(__int64 **)&v50[2]);
        std::_Deallocate<16>(*(void **)v50, (struct std::nothrow_t *)((v51 - *(_QWORD *)v50) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      v28 = (_QWORD *)*v28;
      v4 = v58;
    }
    v46 = v52;
    v52 = 0LL;
    if ( v46 )
    {
      do
      {
        v47 = (_QWORD *)*v46;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v46 + 1);
        std::_Deallocate<16>(v46, (struct std::nothrow_t *)0x10);
        v46 = v47;
      }
      while ( v47 );
    }
    v48 = v53;
    v53 = 0LL;
    if ( v48 )
    {
      do
      {
        v49 = (_QWORD *)*v48;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v48 + 1);
        std::_Deallocate<16>(v48, (struct std::nothrow_t *)0x10);
        v48 = v49;
      }
      while ( v49 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x413,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v8);
    if ( *(_QWORD *)v50 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        *(__int64 **)v50,
        *(__int64 **)&v50[2]);
      std::_Deallocate<16>(*(void **)v50, (struct std::nothrow_t *)((v51 - *(_QWORD *)v50) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_OWORD *)v50 = 0LL;
      v51 = 0LL;
    }
    v10 = v52;
    v52 = 0LL;
    if ( v10 )
    {
      do
      {
        v6 = (_QWORD *)*v10;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10 + 1);
        std::_Deallocate<16>(v10, (struct std::nothrow_t *)0x10);
        v10 = v6;
      }
      while ( v6 );
    }
    v11 = v53;
    v53 = v6;
    if ( v11 )
    {
      do
      {
        v12 = (_QWORD *)*v11;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v11 + 1);
        std::_Deallocate<16>(v11, (struct std::nothrow_t *)0x10);
        v11 = v12;
      }
      while ( v12 );
    }
    return v9;
  }
}
