/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180073B6C
 * Callers:
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180054BE8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_ddaf1e9eb7e2eca453b2b4697b517284__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x180073B40 (std--_Func_impl_no_alloc__lambda_ddaf1e9eb7e2eca453b2b4697b517284__long_wil--com_ptr_t_CEndpoint.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800CB474 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@.c)
 *     std::_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800D3B60 (std--_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil--com_pt_ea_1800D3B60.c)
 *     wil::details::lambda_call__lambda_92eec2372635fc8216ce32d67db4c3b4___::_lambda_call__lambda_92eec2372635fc8216ce32d67db4c3b4___ @ 0x1800E03B4 (wil--details--lambda_call__lambda_92eec2372635fc8216ce32d67db4c3b4___--_lambda_call__lambda_92ee.c)
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800E53B0 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18010BA94 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?SetEndpointVisibilityImpl@CPolicyConfig@@QEAAJPEBGHK@Z @ 0x18010C8EC (-SetEndpointVisibilityImpl@CPolicyConfig@@QEAAJPEBGHK@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$unordered_map@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@5@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@QEAA@XZ @ 0x18003EBD4 (--0-$unordered_map@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@@Z @ 0x18003F8B0 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSessio.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??1?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1800440F0 (--1-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncod.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045598 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x180073394 (--$_Emplace_reallocate@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x18007FDDC (-clear@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_retur.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x1800853BC (-UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@.c)
 *     ??4?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AC2D0 (--4-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionManager::Disconnect(struct _RTL_CRITICAL_SECTION *a1, unsigned int a2, char a3)
{
  unsigned int v3; // r15d
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // r13
  RTL_SRWLOCK *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // r9
  const unsigned __int16 **v8; // r12
  const unsigned __int16 *v9; // rdx
  int EndpointStore; // eax
  unsigned int v11; // ebx
  _QWORD *SpinCount; // rbx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  const unsigned __int16 *v15; // rdx
  __int64 *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 **v19; // rdi
  __int64 **v20; // rbx
  char v21; // r13
  __int64 v22; // r8
  __int64 **v23; // rdi
  __int64 **v24; // rbx
  char v25; // r13
  _QWORD *v26; // rbx
  _QWORD *v27; // rdi
  struct _RTL_CRITICAL_SECTION *v28; // r14
  const unsigned __int16 *v29; // rdx
  int v30[4]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v31; // [rsp+30h] [rbp-108h]
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-100h] BYREF
  struct CEndpointStore *v33; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-F0h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+50h] [rbp-E8h]
  struct _RTL_CRITICAL_SECTION_DEBUG *v36; // [rsp+58h] [rbp-E0h]
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+60h] [rbp-D8h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+68h] [rbp-D0h]
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+70h] [rbp-C8h] BYREF
  char v40[8]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 **v41; // [rsp+88h] [rbp-B0h]
  char v42[8]; // [rsp+C0h] [rbp-78h] BYREF
  __int64 **v43; // [rsp+C8h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *p_LockCount; // [rsp+140h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+148h] [rbp+10h]
  char v47; // [rsp+150h] [rbp+18h]
  __int64 v48; // [rsp+158h] [rbp+20h] BYREF

  v47 = a3;
  v46 = a2;
  p_LockCount = a1;
  v3 = a2;
  v4 = a1;
  v5 = a1;
  v37 = a1;
  v6 = (RTL_SRWLOCK *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = v5 + 6;
    if ( v5[6].LockSemaphore > HANDLE_FLAG_PROTECT_FROM_CLOSE|HANDLE_FLAG_INHERIT|0x4 )
      v7 = (struct _RTL_CRITICAL_SECTION *)v7->DebugInfo;
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids, v7);
  }
  *(_OWORD *)v30 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v8 = (const unsigned __int16 **)&v4[6];
  v38 = v4 + 6;
  v35 = v4 + 6;
  v9 = (const unsigned __int16 *)&v4[6];
  if ( v4[6].LockSemaphore > HANDLE_FLAG_PROTECT_FROM_CLOSE|HANDLE_FLAG_INHERIT|0x4 )
    v9 = *v8;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v6, v9, &v33);
  v11 = EndpointStore;
  if ( EndpointStore >= 0 )
  {
    if ( v3 != 1 && v3 != 6 )
    {
      EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v4 + 112));
      v39 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 112);
      SpinCount = (_QWORD *)v4[3].SpinCount;
      DebugInfo = v4[4].DebugInfo;
      v36 = DebugInfo;
      while ( 1 )
      {
        v34 = SpinCount;
        if ( SpinCount == (_QWORD *)DebugInfo )
          break;
        v32 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(SpinCount, (__int64 *)&v32) >= 0 && v32 )
        {
          v48 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v32, &v48) >= 0 )
          {
            v15 = (const unsigned __int16 *)v35;
            if ( v4[6].LockSemaphore > HANDLE_FLAG_PROTECT_FROM_CLOSE|HANDLE_FLAG_INHERIT|0x4 )
              v15 = *v8;
            (*(void (__fastcall **)(__int64, const unsigned __int16 *))(*(_QWORD *)v48 + 376LL))(v48, v15);
            v16 = *(__int64 **)&v30[2];
            if ( *(_QWORD *)&v30[2] == v31 )
            {
              try
              {
                std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
                  (__int64 *)v30,
                  *(__int64 *)&v30[2],
                  &v48);
              }
              catch ( std::bad_alloc )
              {
                v4 = p_LockCount;
                v3 = v46;
                SpinCount = v34;
                DebugInfo = v36;
                v5 = v37;
                v8 = (const unsigned __int16 **)v38;
              }
            }
            else
            {
              **(_QWORD **)&v30[2] = v48;
              Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v16);
              *(_QWORD *)&v30[2] += 8LL;
            }
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v48);
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v32);
        ++SpinCount;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v39);
    }
    std::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>((__int64)v40);
    EnterCriticalSection((LPCRITICAL_SECTION)&v4->LockCount);
    p_LockCount = (struct _RTL_CRITICAL_SECTION *)&v4->LockCount;
    v17 = (__int64)&v5[1].LockCount;
    if ( v3 == 1 )
    {
      std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::operator=(
        v40,
        v17);
      v19 = v41;
      v20 = (__int64 **)*v41;
      v21 = v47;
      while ( v20 != v19 )
      {
        LOBYTE(v18) = v21;
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v20[12] + 72))(v20[12], 1LL, v18);
        CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(
          (CAudioSessionManager *)v4,
          (struct CAudioSession *)v20[12]);
        v20 = (__int64 **)*v20;
      }
    }
    else
    {
      std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>(
        (__int64)v42,
        v17);
      v23 = v43;
      v24 = (__int64 **)*v43;
      v25 = v47;
      while ( v24 != v23 )
      {
        LOBYTE(v22) = v25;
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*v24[12] + 72))(v24[12], v3, v22);
        v24 = (__int64 **)*v24;
      }
      std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>((__int64)v42);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&p_LockCount);
    std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::clear(v40);
    if ( v3 != 1 && v3 != 6 )
    {
      v26 = *(_QWORD **)v30;
      v27 = *(_QWORD **)&v30[2];
      if ( *(_QWORD *)v30 != *(_QWORD *)&v30[2] )
      {
        v28 = v35;
        do
        {
          v29 = (const unsigned __int16 *)v28;
          if ( v4[6].LockSemaphore > HANDLE_FLAG_PROTECT_FROM_CLOSE|HANDLE_FLAG_INHERIT|0x4 )
            v29 = *v8;
          (*(void (__fastcall **)(_QWORD, const unsigned __int16 *))(*(_QWORD *)*v26 + 384LL))(*v26, v29);
          ++v26;
        }
        while ( v26 != v27 );
      }
    }
    std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>((__int64)v40);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v33);
    if ( *(_QWORD *)v30 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        *(__int64 **)v30,
        *(__int64 **)&v30[2]);
      std::_Deallocate<16>(*(void **)v30, (struct std::nothrow_t *)((v31 - *(_QWORD *)v30) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)EndpointStore);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v33);
    if ( *(_QWORD *)v30 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        *(__int64 **)v30,
        *(__int64 **)&v30[2]);
      std::_Deallocate<16>(*(void **)v30, (struct std::nothrow_t *)((v31 - *(_QWORD *)v30) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return v11;
  }
}
