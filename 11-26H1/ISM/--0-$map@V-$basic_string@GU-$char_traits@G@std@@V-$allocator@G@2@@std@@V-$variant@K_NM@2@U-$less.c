/*
 * XREFs of ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x180022ADC
 * Callers:
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180023864 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 *     _lambda_ac1ab69820883e1c7555fea4db797a8f_::operator() @ 0x1800BF780 (_lambda_ac1ab69820883e1c7555fea4db797a8f_--operator().c)
 *     _lambda_9db3a47598234cc48958c5ce7f83f5e9_::operator() @ 0x1801BE2A4 (_lambda_9db3a47598234cc48958c5ce7f83f5e9_--operator().c)
 *     _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801BF808 (_lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator().c)
 *     _lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator() @ 0x1801C3078 (_lambda_aa4734cb05b2f20ab38c0941f0d86b7b_--operator().c)
 *     _lambda_2f33fc4b0ac679fd125de0d601496fc7_::operator() @ 0x1801C8D9C (_lambda_2f33fc4b0ac679fd125de0d601496fc7_--operator().c)
 * Callees:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@1@@Z @ 0x180022B74 (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
        __int64 *a1,
        __m128i *a2)
{
  __int64 v4; // rdi
  __m128i v5; // xmm0
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits>(72LL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *a1 = v4;
  v5 = *a2;
  v6 = a2->m128i_i64[0];
  v7 = _mm_srli_si128(v5, 8).m128i_u64[0];
  while ( v6 != v7 )
  {
    std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Emplace_hint<std::pair<std::wstring const,std::variant<unsigned long,bool,float>> const &>(
      a1,
      v4,
      v6);
    v6 += 40LL;
  }
  return a1;
}
