/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18001D940
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E2F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x18006202C (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180078030 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeProvider::GetDeviceVolumeStrip(
        CVolumeProvider *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip **a3)
{
  int EndpointStore; // eax
  unsigned int v6; // ebx
  struct CEndpointStore *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // r14
  struct IVolumeStrip **v9; // r15
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  struct IVolumeStrip *v15; // rsi
  unsigned int v16; // edi
  struct IVolumeStrip *v17; // rcx
  signed __int32 v18; // edx
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-10h] BYREF
  const unsigned __int16 *v21; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct CEndpointStore *v23; // [rsp+80h] [rbp+40h] BYREF
  __int64 v24; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  v23 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(this, a2, &v23);
  v6 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)(unsigned int)EndpointStore);
    if ( v23 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v23);
    return v6;
  }
  v7 = v23;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)v23 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v23 + 112));
  v20 = v8;
  v24 = 0LL;
  v9 = (struct IVolumeStrip **)((char *)v7 + 152);
  if ( !*((_QWORD *)v7 + 19) )
  {
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((char *)v7 + 152);
    v21 = a2;
    v10 = Microsoft::WRL::Details::MakeAndInitialize<CVolumeStrip,IVolumeStrip,unsigned short const * &>(
            (char *)v7 + 152,
            &v21);
    v11 = v10;
    if ( v10 < 0 )
    {
      v6 = -2004287484;
      if ( v10 == -2004287484 )
      {
        if ( v8 )
          LeaveCriticalSection(v8);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
          (const char *)(unsigned int)v10);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
        v6 = v11;
      }
      goto LABEL_7;
    }
    v12 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v12 > 4u
      && (*(_BYTE *)(v12 + 16) & 2) != 0
      && (*(_QWORD *)(v12 + 24) & 2LL) == *(_QWORD *)(v12 + 24) )
    {
      v21 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v12,
        (unsigned int)&unk_1801A7E9B,
        v13,
        v14,
        (__int64)&v21);
    }
  }
  v15 = *v9;
  v16 = (*(__int64 (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)*v9 + 8LL))(*v9);
  (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 >= 0x3FFFFFFF )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)0x8007000ELL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
LABEL_7:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v23);
    return v6;
  }
  v17 = *v9;
  if ( *v9 )
  {
    *a3 = v17;
    (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  else
  {
    *a3 = 0LL;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  do
    v18 = *((_DWORD *)v7 + 3);
  while ( v18 != 0x7FFFFFFF && v18 != _InterlockedCompareExchange((volatile signed __int32 *)v7 + 3, v18 - 1, v18) );
  if ( v18 == 1 )
  {
    (*(void (__fastcall **)(struct CEndpointStore *, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL, 0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
