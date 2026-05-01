/*
 * XREFs of ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x180064178
 * Callers:
 *     _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x1800639B0 (_lambda_8ded4d93739c225b374c706a19b0781a_--operator()_std--pair_unsigned___int64_const__winrt--W.c)
 *     ?GetAppIdForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x180559CE0 (-GetAppIdForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix@@@details@wil@@QEAA_NXZ @ 0x18055B920 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WindowTabHostInitialize.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAppIdForWindow(
        __int64 a1,
        winrt::hstring *a2,
        __int64 a3)
{
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, __int64, __int64 *); // rbx
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64); // rdi
  __int64 v10; // rax
  const unsigned __int16 *v11; // rdx
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, __int64, __int64 *); // rbx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64); // rdi
  __int64 v16; // rax
  int v17; // eax
  const unsigned __int16 *v19; // [rsp+28h] [rbp-8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+38h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix>::GetImpl'::`2'::impl) )
  {
    if ( *(_BYTE *)(a1 + 873) )
    {
      v6 = *(_QWORD *)(a1 + 168);
      v7 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v20);
      if ( v7(v6, a3, &v20) >= 0 )
      {
        v8 = v20;
        if ( v20 )
        {
          v9 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 136LL);
          v10 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v19);
          if ( v9(v8, v10) >= 0 )
          {
            v11 = v19;
            goto LABEL_11;
          }
        }
      }
    }
LABEL_10:
    v11 = &LocaleName;
    goto LABEL_11;
  }
  v12 = *(_QWORD *)(a1 + 168);
  v13 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v20);
  if ( v13(v12, a3, &v20) < 0 )
    goto LABEL_10;
  v14 = v20;
  if ( !v20 )
    goto LABEL_10;
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 136LL);
  v16 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v19);
  v17 = v15(v14, v16);
  v11 = v19;
  if ( v17 < 0 )
    goto LABEL_10;
LABEL_11:
  winrt::hstring::hstring(a2, v11);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  return a2;
}
