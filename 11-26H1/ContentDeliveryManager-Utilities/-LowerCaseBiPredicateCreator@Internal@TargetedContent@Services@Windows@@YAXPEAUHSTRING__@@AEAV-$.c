/*
 * XREFs of ?LowerCaseBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180082AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D99C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003DAC8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FF78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x180083C00 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Services::TargetedContent::Internal::LowerCaseBiPredicateCreator(
        HSTRING a1,
        void **a2,
        _DWORD *a3)
{
  PCWSTR StringRawBuffer; // rax
  int v6; // eax
  LPWSTR v7; // rdx
  LPWSTR lpsz; // [rsp+20h] [rbp-20h] BYREF
  DWORD cchLength[2]; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  *a3 = 0;
  lpsz = 0LL;
  *(_QWORD *)cchLength = 0LL;
  v10 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Initialize(&lpsz, StringRawBuffer);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      245LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6,
      (int)lpsz);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&lpsz);
  CharLowerBuffW(lpsz, cchLength[0]);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&lpsz);
  *a3 = 2 * cchLength[0] + 2;
  v7 = lpsz;
  lpsz = 0LL;
  v10 = 0LL;
  *(_QWORD *)cchLength = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    a2,
    v7);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpsz);
}
