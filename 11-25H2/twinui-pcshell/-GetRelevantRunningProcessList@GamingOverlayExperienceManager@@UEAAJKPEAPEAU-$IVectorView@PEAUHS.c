/*
 * XREFs of ?GetRelevantRunningProcessList@GamingOverlayExperienceManager@@UEAAJKPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z @ 0x180346EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$CreateExternalVector@PEAUHSTRING__@@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@PEAUHSTRING__@@@234@@ZPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@1234@@Z @ 0x180243668 (--$CreateExternalVector@PEAUHSTRING__@@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1802A64E8 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x18034677C (-GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV-$vector@U-$pair@KV-$ba.c)
 *     ?GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@3@@Z @ 0x1803473C8 (-GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV-$vector@U-$pair@KV-$basic_.c)
 *     ?_Tidy@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1803526F0 (-_Tidy@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetRelevantRunningProcessList(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 i; // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, PVOID); // r14
  const WCHAR *v13; // rax
  HSTRING_HEADER *v14; // rax
  const WCHAR *v16; // [rsp+20h] [rbp-29h] BYREF
  HSTRING_HEADER v17; // [rsp+28h] [rbp-21h] BYREF
  __int64 v18; // [rsp+48h] [rbp-1h] BYREF
  __int128 v19; // [rsp+50h] [rbp+7h] BYREF
  __int64 v20; // [rsp+60h] [rbp+17h]
  __int128 v21; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( a3 )
  {
    v22 = 0LL;
    v20 = 0LL;
    v18 = 0LL;
    v21 = 0LL;
    v19 = 0LL;
    GamingOverlayExperienceManager::GetNonServiceProcessListAndIds(a1, (__int64)&v21, a2);
    GamingOverlayExperienceManager::GetSortedUniqueProcessList(v5, &v21, &v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    v7 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<HSTRING__ *,Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>(
           v6,
           &v18);
    v4 = v7;
    if ( v7 >= 0 )
    {
      for ( i = v19; i != *((_QWORD *)&v19 + 1); i += 32LL )
      {
        v11 = v18;
        v12 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v18 + 104LL);
        v13 = (const WCHAR *)i;
        if ( *(_QWORD *)(i + 24) > 7uLL )
          v13 = *(const WCHAR **)i;
        v16 = v13;
        v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v16, v8);
        v7 = v12(v11, v14[1].Reserved.Reserved1);
        v4 = v7;
        if ( v7 < 0 )
        {
          v9 = 1548LL;
          goto LABEL_14;
        }
      }
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL))(v18, a3);
      v4 = v7;
      if ( v7 < 0 )
      {
        v9 = 1551LL;
        goto LABEL_14;
      }
      v4 = 0;
    }
    else
    {
      v9 = 1544LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    std::vector<std::wstring>::_Tidy((__int64)&v19);
    std::vector<std::pair<unsigned long,std::wstring>>::_Tidy(&v21);
  }
  else
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x600,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80004003LL);
  }
  return v4;
}
