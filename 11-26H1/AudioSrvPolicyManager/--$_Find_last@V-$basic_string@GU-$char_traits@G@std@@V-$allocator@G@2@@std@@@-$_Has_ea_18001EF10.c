/*
 * XREFs of ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18001EF10
 * Callers:
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18000DE30 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18001EA40 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@V.c)
 * Callees:
 *     <none>
 */

const __m128i **__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Find_last<std::wstring>(
        _QWORD *a1,
        const __m128i **a2,
        const __m128i **a3,
        __int64 a4)
{
  const __m128i *v5; // rax
  const __m128i **v7; // r9
  const __m128i *v8; // rbx
  const __m128i *v9; // r14
  unsigned __int64 v10; // r9
  const __m128i *v11; // r11
  const __m128i *v12; // rdi
  unsigned __int64 v13; // rcx
  const __m128i *v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 i; // rax
  __int16 *v18; // rdx
  char *v19; // r11

  v5 = (const __m128i *)a1[1];
  v7 = (const __m128i **)(a1[3] + 16 * (a1[6] & a4));
  v8 = v7[1];
  if ( v8 == v5 )
  {
    *a2 = v5;
    a2[1] = 0LL;
  }
  else
  {
    v9 = *v7;
    v10 = (unsigned __int64)a3[2];
    while ( 1 )
    {
      v11 = v8 + 1;
      if ( v8[2].m128i_i64[1] > 7uLL )
        v11 = (const __m128i *)v11->m128i_i64[0];
      v12 = (const __m128i *)a3;
      if ( (unsigned __int64)a3[3] > 7 )
        v12 = *a3;
      if ( v10 == v8[2].m128i_i64[0] )
      {
        if ( !v10 )
          goto LABEL_28;
        v13 = 0LL;
        _RDX = v12;
        v15 = v11;
        if ( Avx2WmemEnabledWeakValue )
        {
          v16 = 16LL;
          while ( v16 <= v10 )
          {
            __asm
            {
              vmovdqu ymm1, ymmword ptr [rdx]
              vpcmpeqw ymm1, ymm1, ymmword ptr [r8]
              vpmovmskb r10d, ymm1
            }
            if ( _R10D != -1 )
            {
              __asm { vzeroupper }
              goto LABEL_21;
            }
            v13 += 16LL;
            v16 += 16LL;
            _RDX += 2;
            v15 += 2;
            __asm { vzeroupper }
          }
        }
        for ( i = v13 + 8; i <= v10; i += 8LL )
        {
          if ( (unsigned __int16)_mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(_RDX), _mm_loadu_si128(v15))) != 0xFFFF )
            goto LABEL_21;
          v13 += 8LL;
          ++_RDX;
          ++v15;
        }
        if ( v13 + 4 > v10 )
          goto LABEL_17;
        if ( _RDX->m128i_i64[0] == v15->m128i_i64[0] )
          break;
      }
LABEL_21:
      if ( v8 == v9 )
      {
        *a2 = v8;
        a2[1] = 0LL;
        return a2;
      }
      v8 = (const __m128i *)v8->m128i_i64[1];
    }
    v13 += 4LL;
LABEL_17:
    v18 = &v12->m128i_i16[v13];
    v19 = (char *)((char *)v11 - (char *)v12);
    while ( v13 < v10 )
    {
      if ( *v18 != *(__int16 *)((char *)v18 + (_QWORD)v19) )
        goto LABEL_21;
      ++v13;
      ++v18;
    }
LABEL_28:
    *a2 = (const __m128i *)v8->m128i_i64[0];
    a2[1] = v8;
  }
  return a2;
}
