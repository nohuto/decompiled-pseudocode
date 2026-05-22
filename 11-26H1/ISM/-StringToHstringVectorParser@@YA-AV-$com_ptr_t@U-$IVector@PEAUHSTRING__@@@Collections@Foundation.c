/*
 * XREFs of ?StringToHstringVectorParser@@YA?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEBG@Z @ 0x180175330
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x180044EA8 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x18010E628 (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 *     ??$CreateExternalVector@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@PEAUHSTRING__@@@234@@ZPEAPEAV?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@1234@@Z @ 0x18016CB94 (--$CreateExternalVector@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAU.c)
 *     ?substr@?$basic_string_view@GU?$char_traits@G@std@@@std@@QEBA?AV12@_K_K@Z @ 0x180176A90 (-substr@-$basic_string_view@GU-$char_traits@G@std@@@std@@QEBA-AV12@_K_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall StringToHstringVectorParser(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 i; // rbx
  __m128i v9; // xmm1
  __m128i v10; // xmm1
  _QWORD v12[2]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-18h] BYREF
  HSTRING string; // [rsp+90h] [rbp+40h] BYREF
  HSTRING v15; // [rsp+98h] [rbp+48h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+50h] BYREF

  string = (HSTRING)a1;
  v16 = 0LL;
  Windows::Foundation::Collections::Internal::detail::CreateExternalVector<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>>(
    (__int64)a1,
    &v16);
  v12[0] = a2;
  v4 = std::_WChar_traits<unsigned short>::length(a2);
  v12[1] = v4;
  v5 = 0LL;
  v7 = std::_Traits_find_ch<std::char_traits<unsigned short>>(v6, v4, 0LL);
  for ( i = v16; v7 != -1; string = 0LL )
  {
    v9 = *(__m128i *)std::basic_string_view<unsigned short>::substr(v12, v13, v5, v7 - v5);
    string = 0LL;
    Microsoft::WRL::Wrappers::HString::Set(
      &string,
      (const unsigned __int16 *)v9.m128i_i64[0],
      _mm_srli_si128(v9, 8).m128i_u32[0]);
    (*(void (__fastcall **)(__int64, HSTRING))(*(_QWORD *)i + 104LL))(i, string);
    v5 = v7 + 1;
    v7 = std::_Traits_find_ch<std::char_traits<unsigned short>>(a2, v4, v7 + 1);
    WindowsDeleteString(string);
  }
  v10 = *(__m128i *)std::basic_string_view<unsigned short>::substr(v12, v13, v5, -1LL);
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HString::Set(
    &v15,
    (const unsigned __int16 *)v10.m128i_i64[0],
    _mm_srli_si128(v10, 8).m128i_u32[0]);
  (*(void (__fastcall **)(__int64, HSTRING))(*(_QWORD *)i + 104LL))(i, v15);
  v16 = 0LL;
  *a1 = i;
  WindowsDeleteString(v15);
  v15 = 0LL;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v16);
  return a1;
}
