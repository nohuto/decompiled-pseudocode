/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x180017460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x180017544 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::Initialize(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this)
{
  char v2; // r14
  int v3; // eax
  void *v4; // rsi
  char v5; // bl
  void *v6; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v9[19]; // [rsp+28h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  void *v11; // [rsp+D0h] [rbp+67h] BYREF
  const wchar_t *v12; // [rsp+D8h] [rbp+6Fh] BYREF
  const wchar_t *v13; // [rsp+E0h] [rbp+77h] BYREF

  v2 = 0;
  v13 = L"AssignedAccessConfiguration";
  v12 = L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration";
  v11 = 0LL;
  v9[0] = &wistd::__function::__func<_lambda_6166c63e326ec22a386edc375e0b06c9_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v9[1] = &v12;
  v9[2] = &v13;
  v9[13] = v9;
  v3 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
         &v11,
         v8);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
      (const char *)(unsigned int)v3);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v11);
    return 0;
  }
  v4 = v11;
  v5 = 1;
  if ( v11 )
  {
    v6 = (void *)*((_QWORD *)this + 1);
    if ( v6 )
      CoTaskMemFree(v6);
    *((_QWORD *)this + 1) = v4;
    *((_QWORD *)this + 3) = -1LL;
    *((_QWORD *)this + 2) = -1LL;
    v2 = 1;
  }
  if ( !v2 )
    return 0;
  return v5;
}
