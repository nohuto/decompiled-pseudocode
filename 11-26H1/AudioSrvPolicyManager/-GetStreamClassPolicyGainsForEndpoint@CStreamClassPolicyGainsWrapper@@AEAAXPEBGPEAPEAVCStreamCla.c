/*
 * XREFs of ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18000DE30
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x18001F8E0 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 *     ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x18004462C (-TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180006440 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000E540 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E70C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18001EA40 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@V.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18001EF10 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Has_ea_18001EF10.c)
 *     ??0CStreamClassPolicyGains@@QEAA@XZ @ 0x180029268 (--0CStreamClassPolicyGains@@QEAA@XZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$?0V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@AEAA@AEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18002E2C4 (--$-0V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V-$tuple@.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18003AA80 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??R?$_Conditionally_enabled_hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$00@std@@SA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18003F668 (--R-$_Conditionally_enabled_hash@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18004233C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_ea_18004233C.c)
 *     ??1?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAA@XZ @ 0x1800423E4 (--1-$unique_ptr@VCStreamClassPolicyGains@@U-$default_delete@VCStreamClassPolicyGains@@@std@@@std.c)
 *     ??R?$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z @ 0x1800424DC (--R-$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18004256C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18004256C.c)
 *     ?find@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180042864 (-find@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$u.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
        CStreamClassPolicyGainsWrapper *this,
        const unsigned __int16 *a2,
        struct CStreamClassPolicyGains **a3)
{
  CStreamClassPolicyGainsWrapper *v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  SIZE_T v9; // r12
  char *v10; // r12
  size_t v11; // rbx
  const struct std::nothrow_t *v12; // rdx
  void *v13; // rcx
  __m128i **v14; // r14
  SIZE_T v15; // rbx
  void *v16; // r14
  __int64 v17; // rax
  __int64 v18; // r12
  CStreamClassPolicyGainsWrapper *v19; // r13
  __int64 v20; // rdx
  __m128i *v21; // rdi
  __m128i *v22; // rbx
  __m128i *v23; // r15
  unsigned __int64 v24; // r14
  const char *v25; // r9
  void *v26; // rsi
  const __m128i *v27; // r11
  void **v28; // rbx
  unsigned __int64 v29; // r8
  const __m128i *v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 i; // rax
  _WORD *v34; // rcx
  signed __int64 v35; // r11
  size_t v36; // rbx
  HANDLE v37; // rax
  HANDLE ProcessHeap; // rax
  void *v39; // rdx
  CStreamClassPolicyGains *v40; // rax
  CStreamClassPolicyGains *v41; // rbx
  CStreamClassPolicyGains *v42; // rbx
  CStreamClassPolicyGains **v43; // rax
  CStreamClassPolicyGains *v44; // rdx
  __int64 v48; // rdx
  float v49; // xmm0_4
  __int64 v50; // rcx
  float v51; // xmm1_4
  __int64 v52; // rax
  __int64 v53; // rax
  __m128i **v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __m128i *v57; // r8
  void *v58; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v59; // [rsp+38h] [rbp-C0h] BYREF
  CStreamClassPolicyGainsWrapper *v60; // [rsp+40h] [rbp-B8h]
  struct CStreamClassPolicyGains **v61; // [rsp+48h] [rbp-B0h]
  void *v62[2]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v63; // [rsp+60h] [rbp-98h]
  unsigned __int64 v64; // [rsp+68h] [rbp-90h]
  void *v65[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v66; // [rsp+80h] [rbp-78h]
  _QWORD v67[4]; // [rsp+90h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v61 = a3;
  v4 = this;
  v60 = this;
  *(_OWORD *)v62 = 0LL;
  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  try
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
    if ( v6 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( v6 <= 7 )
    {
      v63 = v6;
      v64 = 7LL;
      v36 = 2 * v6;
      memcpy_0(v62, a2, v36);
      *(_WORD *)((char *)v62 + v36) = 0;
LABEL_14:
      std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::find(
        v4,
        v67,
        v62);
      if ( v64 > 7 )
      {
        v12 = (const struct std::nothrow_t *)(2 * v64 + 2);
        v59 = (unsigned __int64)v12;
        v13 = v62[0];
        v58 = v62[0];
        if ( (unsigned __int64)v12 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v58, &v59);
          v12 = (const struct std::nothrow_t *)v59;
          v13 = v58;
        }
        operator delete(v13, v12);
      }
      v14 = (__m128i **)((char *)v4 + 8);
      v62[0] = v14;
      if ( (__m128i *)v67[0] == *v14 )
      {
        v40 = (CStreamClassPolicyGains *)operator new(0x1A8uLL);
        v41 = v40;
        if ( v40 )
        {
          memset_0(v40, 0, 0x1A8uLL);
          v42 = CStreamClassPolicyGains::CStreamClassPolicyGains(v41);
        }
        else
        {
          v42 = 0LL;
        }
        v58 = v42;
        std::wstring::wstring(v67, a2);
        v43 = (CStreamClassPolicyGains **)std::unordered_map<std::wstring,std::unique_ptr<CStreamClassPolicyGains>>::operator[](
                                            v60,
                                            v67);
        v58 = 0LL;
        v44 = *v43;
        *v43 = v42;
        if ( v44 )
          std::default_delete<CStreamClassPolicyGains>::operator()();
        std::wstring::~wstring((__int64)v67);
        std::unique_ptr<CStreamClassPolicyGains>::~unique_ptr<CStreamClassPolicyGains>(&v58);
      }
      *(_OWORD *)v65 = 0LL;
      v66 = 0LL;
      do
        ++v5;
      while ( a2[v5] );
      if ( v5 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlength_error("string too long");
      if ( v5 <= 7 )
      {
        *(_QWORD *)&v66 = v5;
        *((_QWORD *)&v66 + 1) = 7LL;
        memcpy_0(v65, a2, 2 * v5);
        *((_WORD *)v65 + v5) = 0;
LABEL_31:
        v17 = std::_Conditionally_enabled_hash<std::wstring,1>::operator()((unsigned __int8 *)v65);
        v18 = v17;
        v19 = v60;
        v20 = *((_QWORD *)v60 + 3);
        v21 = *(__m128i **)(v20 + 16 * (v17 & *((_QWORD *)v60 + 6)) + 8);
        v22 = *v14;
        if ( v21 != *v14 )
        {
          v23 = *(__m128i **)(v20 + 16 * (v17 & *((_QWORD *)v60 + 6)));
          LODWORD(v60) = 0xFFFF;
          v24 = *((_QWORD *)&v66 + 1);
          v25 = (const char *)v66;
          v26 = v65[0];
          while ( 1 )
          {
            v27 = v21 + 1;
            if ( v21[2].m128i_i64[1] > 7uLL )
              v27 = (const __m128i *)v27->m128i_i64[0];
            v28 = v65;
            if ( *((_QWORD *)&v66 + 1) > 7uLL )
              v28 = (void **)v65[0];
            if ( (_QWORD)v66 == v21[2].m128i_i64[0] )
            {
              if ( !(_QWORD)v66 )
                goto LABEL_61;
              v29 = 0LL;
              _RCX = (const __m128i *)v28;
              v31 = v27;
              if ( Avx2WmemEnabledWeakValue )
              {
                v32 = 16LL;
                while ( v32 <= (unsigned __int64)v66 )
                {
                  __asm
                  {
                    vmovdqu ymm1, ymmword ptr [rcx]
                    vpcmpeqw ymm1, ymm1, ymmword ptr [rdx]
                    vpmovmskb r10d, ymm1
                  }
                  if ( _R10D != -1 )
                  {
                    __asm { vzeroupper }
                    goto LABEL_51;
                  }
                  v29 += 16LL;
                  v32 += 16LL;
                  _RCX += 2;
                  v31 += 2;
                  __asm { vzeroupper }
                }
              }
              for ( i = v29 + 8; i <= (unsigned __int64)v66; i += 8LL )
              {
                if ( (unsigned __int16)_mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(v31), _mm_loadu_si128(_RCX))) != (_WORD)v60 )
                  goto LABEL_51;
                v29 += 8LL;
                ++_RCX;
                ++v31;
              }
              if ( v29 + 4 > (unsigned __int64)v66 )
                goto LABEL_47;
              if ( _RCX->m128i_i64[0] == v31->m128i_i64[0] )
                break;
            }
LABEL_51:
            if ( v21 == v23 )
            {
              v22 = v21;
              v14 = (__m128i **)v62[0];
              goto LABEL_81;
            }
            v21 = (__m128i *)v21->m128i_i64[1];
          }
          v29 += 4LL;
LABEL_47:
          v34 = (_WORD *)v28 + v29;
          v35 = (char *)v27 - (char *)v28;
          while ( v29 < (unsigned __int64)v66 )
          {
            if ( *v34 != *(_WORD *)((char *)v34 + v35) )
              goto LABEL_51;
            ++v29;
            ++v34;
          }
          goto LABEL_61;
        }
LABEL_81:
        if ( *((_QWORD *)v19 + 2) == 0x492492492492492LL )
          std::_Xlength_error("unordered_map/set too long");
        v62[0] = v14;
        v62[1] = 0LL;
        v21 = (__m128i *)std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL);
        v62[1] = v21;
        v67[0] = v65;
        ____0V__tuple___QEAV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___std__V__tuple___V_1__0A___Z_S___pair___CBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__V__com_ptr_t_UIApplicationSpecificEndpointInfo__Uerr_returncode_policy_wil___wil___std__AEAA_AEAV__tuple___QEAV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
          &v21[1],
          v67);
        v48 = *((_QWORD *)v19 + 2) + 1LL;
        if ( v48 < 0 )
          v49 = (float)(v48 & 1 | (unsigned int)((unsigned __int64)v48 >> 1))
              + (float)(v48 & 1 | (unsigned int)((unsigned __int64)v48 >> 1));
        else
          v49 = (float)(int)v48;
        v50 = *((_QWORD *)v19 + 7);
        if ( v50 < 0 )
        {
          v52 = *((_QWORD *)v19 + 7) & 1LL | ((unsigned __int64)v50 >> 1);
          v51 = (float)(int)v52 + (float)(int)v52;
        }
        else
        {
          v51 = (float)(int)v50;
        }
        if ( (float)(v49 / v51) > *(float *)v19 )
        {
          v53 = std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Desired_grow_bucket_count(v19);
          std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Forced_rehash(
            v19,
            v53);
          v22 = *(__m128i **)std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Find_last<std::wstring>(
                               v19,
                               v67,
                               &v21[1],
                               v18);
        }
        v62[1] = 0LL;
        v54 = (__m128i **)v22->m128i_i64[1];
        ++*((_QWORD *)v19 + 2);
        v21->m128i_i64[0] = (__int64)v22;
        v21->m128i_i64[1] = (__int64)v54;
        *v54 = v21;
        v22->m128i_i64[1] = (__int64)v21;
        v55 = 2 * (v18 & *((_QWORD *)v19 + 6));
        v56 = *((_QWORD *)v19 + 3);
        v57 = *(__m128i **)(v56 + 16 * (v18 & *((_QWORD *)v19 + 6)));
        if ( v57 == *((__m128i **)v19 + 1) )
        {
          *(_QWORD *)(v56 + 16 * (v18 & *((_QWORD *)v19 + 6))) = v21;
LABEL_96:
          *(_QWORD *)(v56 + 8 * v55 + 8) = v21;
          goto LABEL_97;
        }
        if ( v57 == v22 )
        {
          *(_QWORD *)(v56 + 16 * (v18 & *((_QWORD *)v19 + 6))) = v21;
        }
        else if ( *(__m128i ***)(v56 + 16 * (v18 & *((_QWORD *)v19 + 6)) + 8) == v54 )
        {
          goto LABEL_96;
        }
LABEL_97:
        std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>,void *>>>(v62);
        v24 = *((_QWORD *)&v66 + 1);
        v26 = v65[0];
LABEL_61:
        *v61 = (struct CStreamClassPolicyGains *)v21[3].m128i_i64[0];
        if ( v24 > 7 )
        {
          v39 = (void *)(2 * v24 + 2);
          v62[0] = v39;
          v58 = v26;
          if ( (unsigned __int64)v39 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v58, (unsigned __int64 *)v62);
            v39 = v62[0];
            v26 = v58;
          }
          operator delete(v26, (const struct std::nothrow_t *)v39);
        }
        return;
      }
      if ( (v5 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v15 = -2LL;
      }
      else
      {
        v7 = v5 | 7;
        if ( (v5 | 7) < 0xA )
          v7 = 10LL;
        if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v15 = 2 * (v7 + 1);
        if ( !v15 )
        {
          v16 = 0LL;
LABEL_30:
          v65[0] = v16;
          *(_QWORD *)&v66 = v5;
          *((_QWORD *)&v66 + 1) = v7;
          memcpy_0(v16, a2, 2 * v5);
          *((_WORD *)v16 + v5) = 0;
          v14 = (__m128i **)v62[0];
          goto LABEL_31;
        }
      }
      if ( v15 < 0x1000 )
      {
        ProcessHeap = GetProcessHeap();
        v16 = HeapAlloc(ProcessHeap, 0, v15);
      }
      else
      {
        v16 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v15);
      }
      goto LABEL_30;
    }
    v8 = v6 | 7;
    if ( (v6 | 7) > 0x7FFFFFFFFFFFFFFELL )
    {
      v8 = 0x7FFFFFFFFFFFFFFELL;
      v9 = -2LL;
    }
    else
    {
      if ( v8 < 0xA )
        v8 = 10LL;
      if ( v8 + 1 > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
      v9 = 2 * (v8 + 1);
      if ( !v9 )
      {
        v10 = 0LL;
LABEL_13:
        v62[0] = v10;
        v63 = v6;
        v64 = v8;
        v11 = 2 * v6;
        memcpy_0(v10, a2, v11);
        *(_WORD *)&v10[v11] = 0;
        v4 = v60;
        goto LABEL_14;
      }
    }
    if ( v9 < 0x1000 )
    {
      v37 = GetProcessHeap();
      v10 = (char *)HeapAlloc(v37, 0, v9);
    }
    else
    {
      v10 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v9);
    }
    goto LABEL_13;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x66,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      v25);
  }
}
