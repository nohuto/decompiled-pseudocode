/*
 * XREFs of ndisEtwCaptureMiniportDriverData @ 0x140098584
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x140099298 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140075F10 (--4-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV0.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAXXZ @ 0x14008E8E0 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$inte.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___ @ 0x14013A6EC (KRegKey--QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A190 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 */

__int64 __fastcall ndisEtwCaptureMiniportDriverData(
        PDEVICE_OBJECT DeviceObject,
        void **a2,
        void **a3,
        void **a4,
        _OWORD *a5)
{
  void **v9; // rax
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // esi
  __int64 v15; // rdx
  bool v16; // zf
  const wchar_t *v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  void *v20; // [rsp+20h] [rbp-58h] BYREF
  void *v21; // [rsp+28h] [rbp-50h] BYREF
  void *v22; // [rsp+30h] [rbp-48h] BYREF
  void *v23; // [rsp+38h] [rbp-40h] BYREF
  __int128 v24; // [rsp+40h] [rbp-38h] BYREF
  __int128 v25; // [rsp+50h] [rbp-28h] BYREF

  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a2, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a3, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a4, 0LL);
  v20 = 0LL;
  *a5 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::put(&v20);
  if ( IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x80000000, v9) )
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v21, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v22, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v23, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20);
    return 240LL;
  }
  else
  {
    v11 = (unsigned int)KRegKey::QueryValueString(&v20, L"DriverDate", &v23) != 0 ? 0x10 : 0;
    v12 = v11 | 0x20;
    if ( !(unsigned int)KRegKey::QueryValueString(&v20, L"DriverVersion", &v22) )
      v12 = v11;
    v13 = KRegKey::QueryValueString(&v20, L"InfPath", &v21);
    v14 = v12 | 0x40;
    v15 = 0x7FFFLL;
    v16 = v13 == 0;
    v17 = L"InstallTimestamp";
    v24 = 0LL;
    if ( v16 )
      v14 = v12;
    do
    {
      if ( !*v17 )
        break;
      ++v17;
      --v15;
    }
    while ( v15 );
    v18 = v15 == 0 ? 0xC000000D : 0;
    if ( v15 )
    {
      *((_QWORD *)&v24 + 1) = L"InstallTimestamp";
      LOWORD(v24) = -2 - 2 * v15;
      WORD1(v24) = -2 * v15;
      v18 = KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___(&v20, &v24, &v25, 2LL);
    }
    v19 = v14 | 0x80;
    if ( !v18 )
      v19 = v14;
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(a2, &v23);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(a3, &v22);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(a4, &v21);
    *a5 = v25;
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v21, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v22, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v23, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20);
    return v19;
  }
}
