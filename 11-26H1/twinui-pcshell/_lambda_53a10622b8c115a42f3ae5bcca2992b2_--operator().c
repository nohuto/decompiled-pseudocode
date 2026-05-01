/*
 * XREFs of _lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator() @ 0x1800F70D4
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x1800F7090 (-Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1800F79B4 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator()(_BYTE **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  void *v6; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v9[17]; // [rsp+28h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v11; // [rsp+C8h] [rbp+6Fh] BYREF
  const wchar_t *v12; // [rsp+D0h] [rbp+77h] BYREF
  const wchar_t *v13; // [rsp+D8h] [rbp+7Fh] BYREF

  v13 = L"AssignedAccessConfiguration";
  v12 = L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration";
  v11 = 0LL;
  v9[0] = &wistd::__function::__func<_lambda_42d7dced1872ed24a4c1197da8e68253_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v9[1] = &v12;
  v9[2] = &v13;
  v9[13] = v9;
  v2 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
         &v11,
         v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
      (const char *)(unsigned int)v2);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v11);
    return v3;
  }
  else
  {
    v4 = v11;
    if ( v11 )
    {
      v5 = *a1;
      v6 = (void *)*((_QWORD *)*a1 + 1);
      if ( v6 )
        CoTaskMemFree(v6);
      v5[1] = v4;
      v5[3] = -1LL;
      v5[2] = -1LL;
      *a1[1] = 1;
    }
    return 0LL;
  }
}
