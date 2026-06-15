/*
 * XREFs of ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1801521CC
 * Callers:
 *     ?OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z @ 0x180150E08 (-OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z.c)
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180151000 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180151240 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 *     ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180151588 (-OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Win.c)
 *     ?OnMixedRealitySpatialAudioFormatPolicyChange@CExclusiveModeListener@@EEAAJK@Z @ 0x180151A20 (-OnMixedRealitySpatialAudioFormatPolicyChange@CExclusiveModeListener@@EEAAJK@Z.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z @ 0x180151C00 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180007A6C (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004EB10 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?SignalSpatialRelatedChange@CSpatialProperties@@SAJPEBU_tlgProvider_t@@PEAUIPropertyStore@@W4SignalingKeySource@@@Z @ 0x180146DC4 (-SignalSpatialRelatedChange@CSpatialProperties@@SAJPEBU_tlgProvider_t@@PEAUIPropertyStore@@W4Sig.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CExclusiveModeListener::UpdateExclusiveViewingMode(CExclusiveModeListener *this)
{
  int v2; // ebx
  _DWORD *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int i; // r14d
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, const wchar_t **); // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, __int64 *); // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  char v19; // [rsp+30h] [rbp-89h] BYREF
  char v20; // [rsp+31h] [rbp-88h] BYREF
  char v21; // [rsp+32h] [rbp-87h] BYREF
  char v22; // [rsp+33h] [rbp-86h] BYREF
  __int64 v23; // [rsp+38h] [rbp-81h] BYREF
  const wchar_t *v24; // [rsp+40h] [rbp-79h] BYREF
  __int64 v25; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-69h] BYREF
  __int64 v27; // [rsp+58h] [rbp-61h] BYREF
  const wchar_t *v28; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v29[32]; // [rsp+70h] [rbp-49h] BYREF
  char *v30; // [rsp+90h] [rbp-29h]
  __int64 v31; // [rsp+98h] [rbp-21h]
  char *v32; // [rsp+A0h] [rbp-19h]
  __int64 v33; // [rsp+A8h] [rbp-11h]
  char *v34; // [rsp+B0h] [rbp-9h]
  __int64 v35; // [rsp+B8h] [rbp-1h]
  char *v36; // [rsp+C0h] [rbp+7h]
  __int64 v37; // [rsp+C8h] [rbp+Fh]
  char *v38; // [rsp+D0h] [rbp+17h]
  __int64 v39; // [rsp+D8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  if ( !*((_BYTE *)this + 385) )
    return 0LL;
  v2 = 0;
  if ( *((_DWORD *)this + 44) == 2 )
  {
    if ( *((_BYTE *)this + 384) )
      v2 = 3 - (*((_DWORD *)this + 95) != 1);
    else
      v2 = 1;
  }
  v3 = (_DWORD *)*((_QWORD *)this + 44);
  if ( *v3 > 5u )
  {
    v20 = *((_BYTE *)this + 152);
    v21 = v2;
    v22 = *((_BYTE *)this + 176);
    v19 = *((_BYTE *)this + 384);
    v38 = &v20;
    v39 = 1LL;
    v36 = &v21;
    v37 = 1LL;
    v34 = &v22;
    v35 = 1LL;
    v32 = &v19;
    v33 = 1LL;
    v30 = (char *)this + 136;
    v31 = 16LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v3, byte_1801AE78F, 0LL, 0LL, 7, (__int64)v29);
  }
  if ( v2 == *((_DWORD *)this + 38) )
    return 0LL;
  *((_DWORD *)this + 38) = v2;
  v27 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, __int64 *))g_DeviceEnumerator->lpVtbl->EnumAudioEndpoints)(
         g_DeviceEnumerator,
         0LL,
         1LL,
         &v27);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 371LL;
    goto LABEL_13;
  }
  v26 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 24LL))(v27, &v26);
  v5 = v4;
  if ( v4 >= 0 )
  {
    for ( i = 0; i < v26; ++i )
    {
      v25 = 0LL;
      v24 = 0LL;
      v23 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 32LL))(v27, i, &v25);
      v5 = v8;
      if ( v8 < 0 )
      {
        v17 = 382LL;
        goto LABEL_29;
      }
      v9 = v25;
      v10 = *(__int64 (__fastcall **)(__int64, const wchar_t **))(*(_QWORD *)v25 + 40LL);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v24,
        0LL);
      v8 = v10(v9, &v24);
      v5 = v8;
      if ( v8 < 0 )
      {
        v17 = 383LL;
        goto LABEL_29;
      }
      v11 = v25;
      v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v25 + 32LL);
      v13 = v23;
      v23 = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v8 = v12(v11, 2LL, &v23);
      v5 = v8;
      if ( v8 < 0 )
      {
        v17 = 384LL;
        goto LABEL_29;
      }
      v16 = (_DWORD *)*((_QWORD *)this + 44);
      if ( *v16 > 5u )
      {
        v28 = v24;
        v19 = *((_BYTE *)this + 152);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>>(
          (int)v16,
          (int)&unk_1801AE69D,
          v14,
          v15,
          (__int64)&v19,
          &v28);
      }
      v8 = CSpatialProperties::SignalSpatialRelatedChange(*((_DWORD **)this + 44), v23, 16);
      v5 = v8;
      if ( v8 < 0 )
      {
        v17 = 390LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v8);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v24);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
        goto LABEL_30;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
    return 0LL;
  }
  v6 = 374LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)v4);
LABEL_30:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
  return v5;
}
