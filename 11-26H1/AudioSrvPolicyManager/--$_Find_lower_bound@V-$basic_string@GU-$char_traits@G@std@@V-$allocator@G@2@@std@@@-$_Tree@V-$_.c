/*
 * XREFs of ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800064B0
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180005F0C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

const __m128i **__fastcall std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<std::wstring>(
        __int64 a1,
        const __m128i **a2,
        const __m128i **a3)
{
  const __m128i *v5; // r9
  const __m128i *v6; // r11
  int v7; // r13d
  const __m128i *v8; // rdi
  const __m128i *v9; // rbx
  const __m128i *v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r10
  const __m128i *v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 i; // rax
  unsigned __int16 v18; // r9
  __int16 *v19; // rax
  signed __int64 v20; // rbx
  bool v21; // cf
  unsigned int v22; // ecx
  int v23; // r8d
  int v24; // eax
  unsigned __int64 v26; // rax
  unsigned int v30; // eax
  unsigned __int64 v31; // rdx

  v5 = *(const __m128i **)(*(_QWORD *)a1 + 8LL);
  *a2 = v5;
  v6 = v5;
  a2[1] = 0LL;
  a2[2] = *(const __m128i **)a1;
  if ( !v5[1].m128i_i8[9] )
  {
    v7 = Avx2WmemEnabledWeakValue;
    do
    {
      *a2 = v6;
      v8 = v6 + 2;
      v9 = (const __m128i *)a3;
      v10 = a3[2];
      if ( (unsigned __int64)a3[3] > 7 )
        v9 = *a3;
      v11 = v6[3].m128i_u64[0];
      if ( v6[3].m128i_i64[1] > 7uLL )
        v8 = (const __m128i *)v8->m128i_i64[0];
      v12 = (unsigned __int64)a3[2];
      _RCX = v8;
      v14 = v9;
      if ( (unsigned __int64)v10 >= v11 )
        v12 = v6[3].m128i_u64[0];
      v15 = 0LL;
      if ( v7 )
      {
        v16 = 16LL;
        while ( v16 <= v12 )
        {
          __asm
          {
            vmovdqu ymm1, ymmword ptr [rcx]
            vpcmpeqw ymm1, ymm1, ymmword ptr [rdx]
            vpmovmskb r9d, ymm1
          }
          if ( _R9D != -1 )
          {
            _BitScanForward(&v30, ~_R9D);
            v31 = (v30 >> 1) + v15;
            v23 = -1;
            if ( v8->m128i_i16[v31] >= (unsigned int)v9->m128i_i16[v31] )
              v23 = 1;
            __asm { vzeroupper }
LABEL_24:
            if ( v23 < 0 )
              goto LABEL_31;
            goto LABEL_25;
          }
          v15 += 16LL;
          v16 += 16LL;
          _RCX += 2;
          v14 += 2;
          __asm { vzeroupper }
        }
      }
      for ( i = v15 + 8; i <= v12; i += 8LL )
      {
        v18 = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(v14), _mm_loadu_si128(_RCX)));
        if ( v18 != 0xFFFF )
        {
          _BitScanForward(&v22, ~v18);
          v21 = v8->m128i_i16[v15 + (v22 >> 1)] < (unsigned int)v9->m128i_i16[v15 + (v22 >> 1)];
          goto LABEL_22;
        }
        v15 += 8LL;
        ++_RCX;
        ++v14;
      }
      if ( v15 + 4 <= v12 )
      {
        if ( _RCX->m128i_i64[0] != v14->m128i_i64[0] )
        {
          _BitScanForward64(&v26, _RCX->m128i_i64[0] ^ v14->m128i_i64[0]);
          v21 = v8->m128i_i16[((unsigned int)v26 >> 4) + v15] < (unsigned int)v9->m128i_i16[((unsigned int)v26 >> 4)
                                                                                          + v15];
LABEL_22:
          v23 = -1;
          if ( !v21 )
            v23 = 1;
          goto LABEL_24;
        }
        v15 += 4LL;
      }
      v19 = &v8->m128i_i16[v15];
      v20 = (char *)v9 - (char *)v8;
      while ( v15 < v12 )
      {
        v21 = (unsigned __int16)*v19 < *(unsigned __int16 *)((char *)v19 + v20);
        if ( *v19 != *(__int16 *)((char *)v19 + v20) )
          goto LABEL_22;
        ++v15;
        ++v19;
      }
      if ( v11 >= (unsigned __int64)v10 )
      {
LABEL_25:
        a2[2] = v6;
        v24 = 1;
      }
      else
      {
LABEL_31:
        ++v6;
        v24 = 0;
      }
      *((_DWORD *)a2 + 2) = v24;
      v6 = (const __m128i *)v6->m128i_i64[0];
    }
    while ( !v6[1].m128i_i8[9] );
  }
  return a2;
}
