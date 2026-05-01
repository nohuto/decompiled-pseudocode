/*
 * XREFs of ?stoul@std@@YAKAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PEA_KH@Z @ 0x180664D60
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x18066186C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x180661B9C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_180661B9C.c)
 * Callees:
 *     <none>
 */

void __fastcall std::stoul(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = a1;
  v4 = (_DWORD *)_o__errno(a1, a2, a3);
  v5 = v4;
  if ( v3[3] > 0xFuLL )
    v3 = (_QWORD *)*v3;
  v6 = 0LL;
  *v4 = 0;
  _o_strtoul(v3, &v6, 10LL);
  if ( v3 == v6 )
  {
    std::_Xinvalid_argument("invalid stoul argument");
    __debugbreak();
  }
  if ( *v5 == 34 )
  {
    std::_Xout_of_range("stoul argument out of range");
    __debugbreak();
  }
}
