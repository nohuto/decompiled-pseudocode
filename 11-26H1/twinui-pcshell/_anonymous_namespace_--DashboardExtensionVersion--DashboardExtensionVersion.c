/*
 * XREFs of _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x18013B8F4
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026D69C (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D7BC (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180279994 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180279DE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D89C0 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18013BA68 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18013BCD0 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18013BF14 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Assign_counted_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXPEBH_K@Z @ 0x180220F30 (--$_Assign_counted_range@PEBH@-$vector@HV-$allocator@H@std@@@std@@AEAAXPEBH_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Copy_memmove@PEANPEAN@std@@YAPEANPEAN00@Z @ 0x18033D2B0 (--$_Copy_memmove@PEANPEAN@std@@YAPEANPEAN00@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion(__int64 a1, void **a2)
{
  __int64 size_of; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  const void *v7; // rcx
  void *v8; // rdx
  int i; // ebx
  _BYTE v11[152]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v12[104]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 Src; // [rsp+158h] [rbp+50h] BYREF

  Src = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  size_of = std::_Get_size_of_n<4>(2LL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = v5 + 8;
  std::_Copy_memmove<double *,double *>(&Src);
  *(_QWORD *)(a1 + 8) = v5 + 8;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v6 = std::_WChar_traits<wchar_t>::length((__int64)&pvData);
  std::wstring::_Construct<1,unsigned short const *>((char **)(a1 + 24), v7, v6);
  if ( (void **)(a1 + 24) != a2 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2[3] > 7 )
      v8 = *a2;
    std::wstring::assign((void *)(a1 + 24), v8);
  }
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v11,
    a2);
  std::basic_istream<unsigned short>::operator>>(v11, *(_QWORD *)a1);
  for ( i = 1; i < 2; ++i )
  {
    if ( !(unsigned __int16)std::basic_istream<unsigned short>::get(v11) )
    {
      Src = 0LL;
      std::vector<int>::_Assign_counted_range<int const *>(a1, &Src, 2LL);
      break;
    }
    std::basic_istream<unsigned short>::operator>>(v11, *(_QWORD *)a1 + 4LL * i);
  }
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v12);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v12);
  return a1;
}
