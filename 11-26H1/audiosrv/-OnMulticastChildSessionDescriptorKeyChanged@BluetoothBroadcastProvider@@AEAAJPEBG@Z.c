/*
 * XREFs of ?OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z @ 0x1800EC7CC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Do_call @ 0x1800EDAD0 (std--_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddChildEndpointIdIfNotPresent@BluetoothBroadcastSession@@QEAAJPEBGPEA_N@Z @ 0x1800EB270 (-AddChildEndpointIdIfNotPresent@BluetoothBroadcastSession@@QEAAJPEBGPEA_N@Z.c)
 *     ?GetEndpointProperties@BluetoothBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800EB9B0 (-GetEndpointProperties@BluetoothBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL__.c)
 *     ?NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ @ 0x1800EC230 (-NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ.c)
 *     ?RemoveChildEndpointId@BluetoothBroadcastSession@@QEAA_NPEBG@Z @ 0x1800ECFA4 (-RemoveChildEndpointId@BluetoothBroadcastSession@@QEAA_NPEBG@Z.c)
 *     ?RetrieveBroadcastSession@BluetoothBroadcastProvider@@AEAAAEAUBluetoothBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800ED1F0 (-RetrieveBroadcastSession@BluetoothBroadcastProvider@@AEAAAEAUBluetoothBroadcastSession@@AEBU_GU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BluetoothBroadcastProvider::OnMulticastChildSessionDescriptorKeyChanged(
        BluetoothBroadcastProvider *this,
        unsigned __int16 *a2)
{
  char v4; // si
  int EndpointProperties; // eax
  unsigned int v6; // ebx
  const char *v7; // r9
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rsi
  BluetoothBroadcastSession *BroadcastSession; // rax
  const char *v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  BluetoothBroadcastSession *v16; // r15
  BluetoothBroadcastSession *i; // rbx
  struct IPropertyStore *v18; // [rsp+20h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+28h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+80h] [rbp+18h] BYREF
  int v24; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  LOBYTE(v23) = 0;
  v24 = 0;
  v18 = 0LL;
  try
  {
    EndpointProperties = BluetoothBroadcastProvider::GetEndpointProperties(
                           this,
                           a2,
                           &v18,
                           (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *)&v24);
    v6 = EndpointProperties;
    if ( EndpointProperties < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x229,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)EndpointProperties);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      return v6;
    }
    *(_OWORD *)pvar = 0LL;
    v21 = 0LL;
    v9 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))v18->lpVtbl->GetValue)(
           v18,
           &PKEY_Multicast_Child_SessionDescriptor,
           pvar);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)v9);
      PropVariantClear(pvar);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      return v10;
    }
    if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) == 36 )
    {
      v11 = v21;
      if ( *(_QWORD *)(v21 + 4) != (_QWORD)BLUETOOTH_AUDIO_BROADCAST_PROVIDER
        || *(_QWORD *)(v21 + 12) != _mm_srli_si128((__m128i)BLUETOOTH_AUDIO_BROADCAST_PROVIDER, 8).m128i_u64[0] )
      {
LABEL_22:
        PropVariantClear(pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
        return 0LL;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
      v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
      BroadcastSession = (BluetoothBroadcastSession *)BluetoothBroadcastProvider::RetrieveBroadcastSession(
                                                        this,
                                                        v11 + 20);
      v14 = BluetoothBroadcastSession::AddChildEndpointIdIfNotPresent(BroadcastSession, (char *)a2, (bool *)&v23, v13);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x236,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)(unsigned int)v14);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
        PropVariantClear(pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
        return v15;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
      v4 = (char)v23;
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
      v23 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
      v16 = (BluetoothBroadcastSession *)*((_QWORD *)this + 9);
      for ( i = (BluetoothBroadcastSession *)*((_QWORD *)this + 8);
            i != v16;
            i = (BluetoothBroadcastSession *)((char *)i + 48) )
      {
        if ( BluetoothBroadcastSession::RemoveChildEndpointId(i, a2) )
          v4 = 1;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
    }
    if ( v4 && *((_BYTE *)this + 16) )
      BluetoothBroadcastProvider::NotifyMulticastManager(this);
    goto LABEL_22;
  }
  catch ( ... )
  {
    LODWORD(v23) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x24D,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
                     v7);
    return (unsigned int)v23;
  }
  return result;
}
