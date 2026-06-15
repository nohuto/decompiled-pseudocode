/*
 * XREFs of ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180090F60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180013A08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@HHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1801397DC (-GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV-$basic_string@G.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@@details@wil@@QEAA_NXZ @ 0x18013FED4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristicsCache::GetEndpointCharacteristics(
        CEndpointCharacteristicsCache *this,
        unsigned __int16 *a2,
        int a3,
        int a4,
        struct CEndpointCharacteristics **a5)
{
  int v7; // r13d
  void **v8; // rdi
  void **v9; // rcx
  void **v10; // rsi
  void **v11; // rbx
  unsigned int EndpointCharacteristics_sanitizedId; // ebx
  const char *v13; // r9
  const struct std::nothrow_t *v14; // rdx
  void *v15; // r8
  __int64 result; // rax
  void *v17[3]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v7 = (int)this;
    std::wstring::wstring((char **)v17, a2);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::GetImpl'::`2'::impl) )
    {
      v8 = v17;
      if ( v18 > 7 )
        v8 = (void **)v17[0];
      v9 = v17;
      if ( v18 > 7 )
        v9 = (void **)v17[0];
      v10 = (void **)((char *)v9 + 2 * (__int64)v17[2]);
      v11 = v17;
      if ( v18 > 7 )
        v11 = (void **)v17[0];
      while ( v11 != v10 )
      {
        *(_WORD *)v8 = _o_towlower(*(unsigned __int16 *)v11);
        v11 = (void **)((char *)v11 + 2);
        v8 = (void **)((char *)v8 + 2);
      }
    }
    EndpointCharacteristics_sanitizedId = CEndpointCharacteristicsCache::GetEndpointCharacteristics_sanitizedId(
                                            v7,
                                            (unsigned int)v17,
                                            a3,
                                            a4,
                                            (__int64)a5);
    if ( v18 > 7 )
    {
      v14 = (const struct std::nothrow_t *)(2 * v18 + 2);
      v15 = v17[0];
      if ( (unsigned __int64)v14 >= 0x1000 )
      {
        v14 = (const struct std::nothrow_t *)(2 * v18 + 41);
        v15 = (void *)*((_QWORD *)v17[0] - 1);
        if ( (unsigned __int64)((char *)v17[0] - (char *)v15 - 8) > 0x1F )
          _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
      }
      operator delete(v15, v14);
    }
    result = EndpointCharacteristics_sanitizedId;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1494,
                           (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                           v13);
  }
  return result;
}
