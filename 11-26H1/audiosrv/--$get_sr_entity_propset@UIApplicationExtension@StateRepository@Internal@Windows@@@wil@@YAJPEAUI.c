/*
 * XREFs of ??$get_sr_entity_propset@UIApplicationExtension@StateRepository@Internal@Windows@@@wil@@YAJPEAUIApplicationExtension@StateRepository@Internal@Windows@@PEAPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x180154570
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180037E78 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800B98C4 (--0-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAXXZ @ 0x1800BA8C0 (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ??$size_address@I@?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA?AU?$size_address_ptr@I@01@XZ @ 0x180154644 (--$size_address@I@-$unique_any_array_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@.c)
 *     ??1?$size_address_ptr@I@?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x180154C10 (--1-$size_address_ptr@I@-$unique_any_array_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::get_sr_entity_propset<Windows::Internal::StateRepository::IApplicationExtension>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64 *); // r9
  __int64 v6; // r10
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-20h]
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v12);
  v4 = wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::size_address<unsigned int>(
         &v12,
         v14,
         v3);
  v7 = v5(v6, v4 + 8, &v12);
  wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::size_address_ptr<unsigned int>::~size_address_ptr<unsigned int>(v14);
  if ( v7 >= 0 )
  {
    v10 = SRDictionaryToPropertySet(v13, v12, a2);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v10;
    v9 = 22LL;
  }
  else
  {
    v8 = (unsigned int)v7;
    v9 = 21LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecore\\internal\\sdk\\inc\\wil\\staterepository.h",
    (const char *)v8);
LABEL_7:
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset((__int64)&v12);
  return (unsigned int)v7;
}
