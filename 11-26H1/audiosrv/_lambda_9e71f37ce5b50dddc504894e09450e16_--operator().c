/*
 * XREFs of _lambda_9e71f37ce5b50dddc504894e09450e16_::operator() @ 0x1800C4BC4
 * Callers:
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800CBEE0 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E2F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045598 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180061E24 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077420 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG_N@Z @ 0x1800C5A58 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9e71f37ce5b50dddc504894e09450e16_::operator()(__int64 a1)
{
  int EndpointStore; // ebx
  __int64 v3; // rdx
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v6; // rcx
  struct CEndpointStore **v7; // rbx
  struct CEndpointStore *v8; // rcx
  struct _RTL_CRITICAL_SECTION **v9; // rax
  CEndpointCharacteristics *v10; // rdi
  void **v11; // rbx
  void *v12; // rcx
  __int64 v13; // rcx
  struct _RTL_CRITICAL_SECTION **v14; // rax
  __int64 v15; // rcx
  struct _RTL_CRITICAL_SECTION **v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, __int64 *); // rdi
  __int64 *v21; // rbx
  int v22; // eax
  __int64 (__fastcall *v23)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD); // rbx
  char v24; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+40h] [rbp+8h] BYREF

  EndpointStore = Microsoft::WRL::WeakRef::As<IInspectable>(*(_QWORD **)a1, *(__int64 **)(a1 + 8));
  if ( EndpointStore < 0 )
  {
    v3 = 2882LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
    return (unsigned int)EndpointStore;
  }
  v5 = *(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 8);
  if ( !*v5 )
  {
    EndpointStore = -2147024809;
    v3 = 2883LL;
    goto LABEL_3;
  }
  EndpointStore = Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(v5, *(__int64 **)(a1 + 16));
  if ( EndpointStore < 0 )
  {
    v3 = 2885LL;
    goto LABEL_3;
  }
  v6 = **(_QWORD **)(a1 + 16);
  if ( !v6 )
  {
    EndpointStore = -2147024809;
    v3 = 2886LL;
    goto LABEL_3;
  }
  **(_QWORD **)(a1 + 24) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6);
  v7 = *(struct CEndpointStore ***)(a1 + 32);
  v8 = *v7;
  *v7 = 0LL;
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v8);
  EndpointStore = CEndpointStoreCache::GetEndpointStore((RTL_SRWLOCK *)v8, **(const unsigned __int16 ***)(a1 + 24), v7);
  if ( EndpointStore < 0 )
  {
    v3 = 2889LL;
    goto LABEL_3;
  }
  EndpointStore = GetEndpointCharacteristicsDescriptor(
                    **(const unsigned __int16 ***)(a1 + 24),
                    0,
                    *(struct EndpointCharacteristicsDescriptor **)(a1 + 40));
  if ( EndpointStore < 0 )
  {
    v3 = 2893LL;
    goto LABEL_3;
  }
  v9 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 56LL) + 80LL))(
                                          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL),
                                          &v26,
                                          **(_QWORD **)(a1 + 32));
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::operator=(
    *(struct _RTL_CRITICAL_SECTION ***)(a1 + 48),
    v9);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
  v10 = **(CEndpointCharacteristics ***)(a1 + 40);
  v11 = *(void ***)(a1 + 64);
  v12 = *v11;
  *v11 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  CEndpointCharacteristics::TryGetCustomResourceManagerService(v10, &GUID_475d74a7_6824_4b91_89be_33d893b255ed, v11);
  v13 = **(_QWORD **)(a1 + 64);
  if ( v13 )
  {
    v14 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)v13 + 104LL))(
                                             v13,
                                             &v26);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::operator=(
      *(struct _RTL_CRITICAL_SECTION ***)(a1 + 72),
      v14);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
  }
  v15 = *(_QWORD *)(**(_QWORD **)(a1 + 32) + 104LL);
  v16 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)v15 + 128LL))(
                                           v15,
                                           &v26);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::operator=(
    *(struct _RTL_CRITICAL_SECTION ***)(a1 + 80),
    v16);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
  if ( !**(_BYTE **)(a1 + 88)
    || (*(int (__fastcall **)(struct IAudioResourceManager *, _QWORD, _QWORD))(*(_QWORD *)g_AudioResourceManager + 72LL))(
         g_AudioResourceManager,
         *(_QWORD *)(a1 + 40),
         **(_QWORD **)(a1 + 16)) >= 0 )
  {
    v17 = *(_QWORD **)(a1 + 96);
    v18 = operator new[](0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v18 )
    {
      *(_OWORD *)v18 = 0LL;
      v18[2] = 0LL;
    }
    *v17 = v18;
    if ( !**(_QWORD **)(a1 + 96) )
    {
      EndpointStore = -2147024882;
      v3 = 2922LL;
      goto LABEL_3;
    }
    (*(void (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 280LL))(**(_QWORD **)(a1 + 16));
    **(_QWORD **)(a1 + 104) = *(_QWORD *)(**(_QWORD **)(a1 + 96) + 8LL);
    if ( **(_BYTE **)(a1 + 112)
      || ***(_DWORD ***)(a1 + 96) != 1
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(a1 + 16) + 392LL))(
            **(_QWORD **)(a1 + 16),
            **(_QWORD **)(a1 + 104))
      && *(_BYTE *)(**(_QWORD **)(a1 + 96) + 16LL) )
    {
      v19 = **(_QWORD **)(a1 + 16);
      v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 224LL);
      v21 = *(__int64 **)(a1 + 120);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v21);
      EndpointStore = v20(v19, v21);
      if ( EndpointStore < 0 )
      {
        v3 = 2943LL;
        goto LABEL_3;
      }
      if ( **(_QWORD **)(a1 + 120) )
      {
        (*(void (__fastcall **)(struct IDeviceGraphManager *, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
          g_DeviceGraphManager,
          **(_QWORD **)(a1 + 16));
        (*(void (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 296LL))(**(_QWORD **)(a1 + 16));
        if ( ***(_DWORD ***)(a1 + 96) == 1 )
        {
          v22 = CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(*(CAudioResourceManager **)(a1 + 56));
          if ( v22 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              2954LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v22);
        }
        v23 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
        v24 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 240LL))(**(_QWORD **)(a1 + 16));
        EndpointStore = v23(g_DeviceGraphManager, **(_QWORD **)(a1 + 16), **(_QWORD **)(a1 + 120), v24 == 0, 0LL);
        if ( EndpointStore < 0 )
        {
          v3 = 2958LL;
          goto LABEL_3;
        }
      }
    }
  }
  return 0LL;
}
