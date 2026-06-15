/*
 * XREFs of ??$_Find@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18001F160
 * Callers:
 *     ?find@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180042864 (-find@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$u.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Find<std::wstring>(
        _QWORD *a1,
        const __m128i **a2,
        __int64 a3)
{
  __int64 *v3; // r15
  __int64 v4; // rax
  const __m128i *v5; // r12
  const __m128i *v7; // rbx
  const __m128i *v8; // r14
  unsigned __int64 v9; // r9
  const __m128i *v10; // r11
  const __m128i *v11; // rdi
  unsigned __int64 v12; // rcx
  const __m128i *v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 i; // rax
  __int16 *v17; // rdx
  char *v18; // r11

  v3 = 0LL;
  v4 = a1[3];
  v5 = (const __m128i *)a1[1];
  v7 = *(const __m128i **)(v4 + 16 * (a3 & a1[6]) + 8);
  if ( v7 != v5 )
  {
    v8 = *(const __m128i **)(v4 + 16 * (a3 & a1[6]));
    v9 = (unsigned __int64)a2[2];
    while ( 1 )
    {
      v10 = v7 + 1;
      if ( v7[2].m128i_i64[1] > 7uLL )
        v10 = (const __m128i *)v10->m128i_i64[0];
      v11 = (const __m128i *)a2;
      if ( (unsigned __int64)a2[3] > 7 )
        v11 = *a2;
      if ( v9 == v7[2].m128i_i64[0] )
      {
        if ( !v9 )
          goto LABEL_25;
        v12 = 0LL;
        _RDX = v11;
        v14 = v10;
        if ( Avx2WmemEnabledWeakValue )
        {
          v15 = 16LL;
          while ( v15 <= v9 )
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
            v12 += 16LL;
            v15 += 16LL;
            _RDX += 2;
            v14 += 2;
            __asm { vzeroupper }
          }
        }
        for ( i = v12 + 8; i <= v9; i += 8LL )
        {
          if ( (unsigned __int16)_mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(v14), _mm_loadu_si128(_RDX))) != 0xFFFF )
            goto LABEL_21;
          v12 += 8LL;
          ++_RDX;
          ++v14;
        }
        if ( v12 + 4 > v9 )
          goto LABEL_17;
        if ( _RDX->m128i_i64[0] == v14->m128i_i64[0] )
          break;
      }
LABEL_21:
      if ( v7 == v8 )
        goto LABEL_26;
      v7 = (const __m128i *)v7->m128i_i64[1];
    }
    v12 += 4LL;
LABEL_17:
    v17 = &v11->m128i_i16[v12];
    v18 = (char *)((char *)v10 - (char *)v11);
    while ( v12 < v9 )
    {
      if ( *v17 != *(__int16 *)((char *)v17 + (_QWORD)v18) )
        goto LABEL_21;
      ++v12;
      ++v17;
    }
LABEL_25:
    v3 = (__int64 *)v7;
  }
LABEL_26:
  if ( v3 )
    return (const __m128i *)v3;
  return v5;
}
