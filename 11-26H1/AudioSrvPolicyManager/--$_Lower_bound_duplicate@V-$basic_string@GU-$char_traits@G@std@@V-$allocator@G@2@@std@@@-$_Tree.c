/*
 * XREFs of ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180006160
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180005F0C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Lower_bound_duplicate<std::wstring>(
        __int64 a1,
        const __m128i *a2,
        const __m128i **a3)
{
  const __m128i *v3; // rbx
  const __m128i *v4; // r11
  unsigned __int64 v5; // rsi
  const __m128i *v6; // rdi
  unsigned __int64 v7; // r9
  const __m128i *v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 i; // rax
  unsigned __int16 v13; // r10
  __int16 *v14; // rax
  char *v15; // r11
  bool v16; // cf
  unsigned __int64 v17; // rax
  int v18; // r8d
  unsigned __int64 v23; // rcx

  v3 = (const __m128i *)a3;
  if ( a2[1].m128i_i8[9] )
    return 0;
  v4 = a2 + 2;
  v5 = a2[3].m128i_u64[0];
  if ( a2[3].m128i_i64[1] > 7uLL )
    v4 = (const __m128i *)v4->m128i_i64[0];
  v6 = a3[2];
  if ( (unsigned __int64)a3[3] > 7 )
    v3 = *a3;
  v7 = a2[3].m128i_u64[0];
  _RCX = v3;
  v9 = v4;
  if ( v5 >= (unsigned __int64)v6 )
    v7 = (unsigned __int64)a3[2];
  v10 = 0LL;
  if ( Avx2WmemEnabledWeakValue )
  {
    v11 = 16LL;
    while ( v11 <= v7 )
    {
      __asm
      {
        vmovdqu ymm1, ymmword ptr [rcx]
        vpcmpeqw ymm1, ymm1, ymmword ptr [rdx]
        vpmovmskb r10d, ymm1
      }
      if ( _R10D != -1 )
      {
        _BitScanForward((unsigned int *)&v23, ~_R10D);
        v16 = v3->m128i_i16[(v23 >> 1) + v10] < (unsigned int)v4->m128i_i16[(v23 >> 1) + v10];
        v18 = -1;
        if ( !v16 )
          v18 = 1;
        __asm { vzeroupper }
        return v18 >= 0;
      }
      v10 += 16LL;
      v11 += 16LL;
      _RCX += 2;
      v9 += 2;
      __asm { vzeroupper }
    }
  }
  for ( i = v10 + 8; i <= v7; i += 8LL )
  {
    v13 = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(v9), _mm_loadu_si128(_RCX)));
    if ( v13 != 0xFFFF )
    {
      _BitScanForward((unsigned int *)&v17, ~v13);
      v16 = v3->m128i_i16[(v17 >> 1) + v10] < (unsigned int)v4->m128i_i16[(v17 >> 1) + v10];
      goto LABEL_21;
    }
    v10 += 8LL;
    ++_RCX;
    ++v9;
  }
  if ( v10 + 4 <= v7 )
  {
    if ( _RCX->m128i_i64[0] != v9->m128i_i64[0] )
    {
      _BitScanForward64((unsigned __int64 *)&_RCX, _RCX->m128i_i64[0] ^ v9->m128i_i64[0]);
      v16 = v3->m128i_i16[((unsigned __int64)_RCX >> 4) + v10] < (unsigned int)v4->m128i_i16[((unsigned __int64)_RCX >> 4)
                                                                                           + v10];
LABEL_21:
      v18 = -1;
      if ( !v16 )
        v18 = 1;
      return v18 >= 0;
    }
    v10 += 4LL;
  }
  v14 = &v3->m128i_i16[v10];
  v15 = (char *)((char *)v4 - (char *)v3);
  while ( v10 < v7 )
  {
    v16 = (unsigned __int16)*v14 < (unsigned int)*(__int16 *)((char *)v14 + (_QWORD)v15);
    if ( *v14 != *(__int16 *)((char *)v14 + (_QWORD)v15) )
      goto LABEL_21;
    ++v10;
    ++v14;
  }
  return (unsigned __int64)v6 >= v5;
}
