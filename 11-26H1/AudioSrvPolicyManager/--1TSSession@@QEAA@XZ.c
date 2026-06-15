/*
 * XREFs of ??1TSSession@@QEAA@XZ @ 0x1800433FC
 * Callers:
 *     ??R?$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z @ 0x18004399C (--R-$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18001681C (-clear@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@XZ @ 0x18002A594 (--1-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@X.c)
 *     ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x18002E8DC (--1-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndId@@@std@@@std@@.c)
 *     ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x180043314 (--1-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCDriverListener@@U?$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ @ 0x180043358 (--1-$unique_ptr@VCDriverListener@@U-$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_WTSINFOW@@P6AXPEAX@Z$1?WTSFreeMemory@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180043378 (--1-$unique_storage@U-$resource_policy@PEAU_WTSINFOW@@P6AXPEAX@Z$1-WTSFreeMemory@@YAX0@ZU-$integ.c)
 *     ??1CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x18004339C (--1CStreamClassPolicyGainsWrapper@@QEAA@XZ.c)
 *     ?UnregisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x180044C8C (-UnregisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ.c)
 */

void __fastcall TSSession::~TSSession(TSSession *this)
{
  DuckingDescriptorAndId **v2; // rsi
  DuckingDescriptorAndId *v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void **v6; // rsi
  void **v7; // rbx

  TSSession::UnregisterSessionDisplayNotificationCallback(this);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)this + 138);
  std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>((void **)this + 137);
  std::unique_ptr<CDriverListener>::~unique_ptr<CDriverListener>((_QWORD *)this + 135);
  v2 = (DuckingDescriptorAndId **)*((_QWORD *)this + 133);
  *((_QWORD *)this + 133) = 0LL;
  if ( v2 )
  {
    do
    {
      v3 = *v2;
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(v2 + 1);
      std::_Deallocate<16>(v2, (const struct std::nothrow_t *)0x10);
      v2 = (DuckingDescriptorAndId **)v3;
    }
    while ( v3 );
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 132);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 131);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 130);
  v4 = (void *)*((_QWORD *)this + 123);
  if ( v4 )
  {
    std::_Deallocate<16>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 125) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL));
    *((_QWORD *)this + 123) = 0LL;
    *((_QWORD *)this + 124) = 0LL;
    *((_QWORD *)this + 125) = 0LL;
  }
  CStreamClassPolicyGainsWrapper::~CStreamClassPolicyGainsWrapper((TSSession *)((char *)this + 72));
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    std::_Deallocate<16>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::clear((void **)this + 5);
  wil::details::unique_storage<wil::details::resource_policy<_WTSINFOW *,void (*)(void *),&void WTSFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,_WTSINFOW *,_WTSINFOW *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_WTSINFOW *,void (*)(void *),&void WTSFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,_WTSINFOW *,_WTSINFOW *,0,std::nullptr_t>>((void **)this + 3);
  v6 = (void **)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v6 )
  {
    do
    {
      v7 = (void **)*v6;
      std::unique_ptr<AUDIOPROTOCOLNOTIFY>::~unique_ptr<AUDIOPROTOCOLNOTIFY>(v6 + 1);
      std::_Deallocate<16>(v6, (const struct std::nothrow_t *)0x10);
      v6 = v7;
    }
    while ( v7 );
  }
}
