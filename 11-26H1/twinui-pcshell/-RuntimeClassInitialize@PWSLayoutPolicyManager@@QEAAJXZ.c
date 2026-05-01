/*
 * XREFs of ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1803F131C
 * Callers:
 *     ??$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803F03D8 (--$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C6D84 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x1801C6F28 (--1_variant_t@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801EB560 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$.c)
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x1801EB5F8 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x18022B208 (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ??4_variant_t@@QEAAAEAV0@AEBV0@@Z @ 0x1802BF854 (--4_variant_t@@QEAAAEAV0@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutPolicyManager::RuntimeClassInitialize(
        PWSLayoutPolicyManager *this,
        const unsigned __int16 *a2)
{
  const VARIANTARG *v3; // rax
  _QWORD *bstr; // rax
  _QWORD *v5; // rax
  const char *v6; // r9
  VARIANTARG v8; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  OLECHAR *v10; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    v3 = (const VARIANTARG *)_variant_t::_variant_t((_variant_t *)&v8, a2);
    _variant_t::operator=((VARIANTARG *)((char *)this + 80), v3);
    _variant_t::~_variant_t(&v8);
    bstr = wil::make_bstr(&v10);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      (_QWORD *)this + 13,
      bstr);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v10);
    v5 = wil::make_bstr(&v10);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      (_QWORD *)this + 15,
      v5);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v10);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x56,
                           (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
                           v6);
  }
  return 0LL;
}
