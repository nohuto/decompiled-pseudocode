/*
 * XREFs of ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18001D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0AEBK$$Z$$V@?$pair@$$CBKW4ContextualProcessorDecision@@@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBK@1@V?$tuple@$$V@1@@Z @ 0x18001D0BC (--$-0AEBK$$Z$$V@-$pair@$$CBKW4ContextualProcessorDecision@@@std@@QEAA@Upiecewise_construct_t@1@V.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x18001D8F8 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x18001DAEC (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800322E0 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18008B824 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall ContextualProcessorBuffer::TryAddProcessorAndContact(__int64 a1, int a2, __int64 a3, int *a4)
{
  __int64 v6; // r14
  __int64 i; // rbx
  int v8; // r11d
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 *v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rbx
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  _QWORD *v32; // rax
  _QWORD *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rbx
  int v36; // r15d
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  float v43; // xmm0_4
  float v44; // xmm1_4
  __int64 *v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rax
  _QWORD *v48; // rdx
  __int64 v49; // rcx
  _QWORD **v50; // rcx
  _QWORD *v51; // rcx
  _QWORD *v52; // rbx
  _QWORD **v53; // rcx
  _QWORD *v54; // rcx
  _QWORD **v55; // rcx
  _QWORD *v56; // rcx
  _QWORD *v57; // rbx
  __int64 v58; // rcx
  _QWORD *v59; // rbx
  __int64 v60; // rax
  __int64 *v61; // rax
  _QWORD *v62; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v63; // [rsp+28h] [rbp-D8h]
  __int64 v64; // [rsp+30h] [rbp-D0h] BYREF
  float v65; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v66; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+48h] [rbp-B8h]
  __int128 v68; // [rsp+50h] [rbp-B0h]
  _QWORD *v69; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+68h] [rbp-98h]
  __int64 v71; // [rsp+70h] [rbp-90h]
  int v72; // [rsp+78h] [rbp-88h]
  __int128 v73; // [rsp+80h] [rbp-80h]
  __int128 v74; // [rsp+90h] [rbp-70h]
  _QWORD *v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h]
  __int64 v77; // [rsp+B0h] [rbp-50h]
  __int64 v78; // [rsp+B8h] [rbp-48h]
  int v79; // [rsp+C0h] [rbp-40h]
  _QWORD *v80; // [rsp+C8h] [rbp-38h]
  __int64 v81; // [rsp+D0h] [rbp-30h]
  _QWORD *v82; // [rsp+D8h] [rbp-28h]
  __int128 v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  __int64 v86; // [rsp+100h] [rbp+0h]
  __int64 v87; // [rsp+108h] [rbp+8h]
  int *v88; // [rsp+110h] [rbp+10h] BYREF
  int *v89; // [rsp+160h] [rbp+60h] BYREF
  int v90; // [rsp+168h] [rbp+68h] BYREF
  int *v91; // [rsp+178h] [rbp+78h]

  v91 = a4;
  v90 = a2;
  v6 = a1 + 24;
  for ( i = *(_QWORD *)(a1 + 24); i != *(_QWORD *)(a1 + 32); i += 224LL )
  {
    if ( *(_QWORD *)i == a3 )
    {
      LODWORD(v89) = *a4;
      v9 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v90);
      v10 = *(_QWORD *)(i + 32);
      v11 = *(_QWORD *)(v10 + 16 * (*(_QWORD *)(i + 56) & v9) + 8);
      v12 = *(_QWORD *)(i + 16);
      if ( v11 != v12 )
      {
        v13 = *(_QWORD *)(v10 + 16 * (*(_QWORD *)(i + 56) & v9));
        while ( v8 != *(_DWORD *)(v11 + 16) )
        {
          if ( v11 == v13 )
          {
            v12 = v11;
            goto LABEL_10;
          }
          v11 = *(_QWORD *)(v11 + 8);
        }
        goto LABEL_20;
      }
LABEL_10:
      if ( *(_QWORD *)(i + 24) == 0xAAAAAAAAAAAAAAALL )
        std::_Xlength_error("unordered_map/set too long");
      v62 = (_QWORD *)(i + 16);
      v11 = std::_Allocate<16,std::_Default_allocate_traits>(24LL);
      v63 = v11;
      v88 = &v90;
      ____0AEBK__Z__V___pair___CBKW4ContextualProcessorDecision___std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBK_1_V__tuple___V_1__Z(
        v11 + 16,
        v14,
        (__int64)&v88);
      v15 = *(_QWORD *)(i + 24) + 1LL;
      if ( v15 < 0 )
        v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
            + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
      else
        v16 = (float)(int)v15;
      v17 = *(_QWORD *)(i + 64);
      if ( v17 < 0 )
      {
        v60 = *(_QWORD *)(i + 64) & 1LL | ((unsigned __int64)v17 >> 1);
        v18 = (float)(int)v60 + (float)(int)v60;
      }
      else
      {
        v18 = (float)(int)v17;
      }
      if ( (float)(v16 / v18) > *(float *)(i + 8) )
      {
        std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::_Rehash_for_1(i + 8);
        v12 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
                           i + 8,
                           &v62,
                           v11 + 16,
                           v9);
      }
      v19 = *(__int64 **)(v12 + 8);
      ++*(_QWORD *)(i + 24);
      *(_QWORD *)v11 = v12;
      *(_QWORD *)(v11 + 8) = v19;
      *v19 = v11;
      *(_QWORD *)(v12 + 8) = v11;
      v20 = 2 * (*(_QWORD *)(i + 56) & v9);
      v21 = *(_QWORD *)(i + 32);
      v22 = *(_QWORD *)(v21 + 8 * v20);
      if ( v22 == *(_QWORD *)(i + 16) )
      {
        *(_QWORD *)(v21 + 8 * v20) = v11;
        goto LABEL_19;
      }
      if ( v22 == v12 )
      {
        *(_QWORD *)(v21 + 8 * v20) = v11;
      }
      else if ( *(__int64 **)(v21 + 8 * v20 + 8) == v19 )
      {
LABEL_19:
        *(_QWORD *)(v21 + 8 * v20 + 8) = v11;
      }
LABEL_20:
      *(_DWORD *)(v11 + 20) = (_DWORD)v89;
      result = *((_QWORD *)a4 + 1);
      if ( result && result != *(_QWORD *)(i + 208) )
        result = Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(i + 208, a4 + 2);
      goto LABEL_21;
    }
  }
  v64 = 0LL;
  v67 = 0LL;
  v25 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v25 = v25;
  v25[1] = v25;
  v66 = v25;
  v70 = 7LL;
  v71 = 8LL;
  v65 = 1.0;
  v26 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  *(_QWORD *)&v68 = v26;
  v27 = v26 + 16;
  *((_QWORD *)&v68 + 1) = v26 + 16;
  v69 = v26 + 16;
  do
    *v26++ = v25;
  while ( v26 != v27 );
  v73 = 0LL;
  v28 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v28 = v28;
  v28[1] = v28;
  *(_QWORD *)&v73 = v28;
  v76 = 7LL;
  v77 = 8LL;
  v72 = 1065353216;
  v29 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  *(_QWORD *)&v74 = v29;
  v30 = v29 + 16;
  *((_QWORD *)&v74 + 1) = v29 + 16;
  v75 = v29 + 16;
  do
    *v29++ = v28;
  while ( v29 != v30 );
  v78 = 0LL;
  v81 = 0LL;
  v31 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v31 = v31;
  v31[1] = v31;
  v80 = v31;
  v84 = 7LL;
  v85 = 8LL;
  v79 = 1065353216;
  v33 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v82 = v33;
  v32 = v33 + 16;
  *(_QWORD *)&v83 = v33 + 16;
  *((_QWORD *)&v83 + 1) = v33 + 16;
  do
    *v33++ = v31;
  while ( v33 != v32 );
  v86 = 0LL;
  v87 = 0LL;
  v34 = v64;
  if ( v64 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      v34 = v64;
    }
    v64 = a3;
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = *((_QWORD *)a4 + 1);
  if ( v86 != v35 )
  {
    if ( v35 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v35 + 8LL))(*((_QWORD *)a4 + 1));
    v86 = v35;
  }
  LOBYTE(v87) = 0;
  LODWORD(v78) = 0;
  v36 = *a4;
  v37 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v90);
  v38 = *(_QWORD *)(v68 + 16 * (v70 & v37) + 8);
  v39 = (__int64)v66;
  if ( (_QWORD *)v38 != v66 )
  {
    while ( v90 != *(_DWORD *)(v38 + 16) )
    {
      if ( v38 == *(_QWORD *)(v68 + 16 * (v70 & v37)) )
      {
        v39 = v38;
        goto LABEL_46;
      }
      v38 = *(_QWORD *)(v38 + 8);
    }
    goto LABEL_56;
  }
LABEL_46:
  if ( v67 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("unordered_map/set too long");
  v62 = &v66;
  v38 = std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  v63 = v38;
  v89 = &v90;
  ____0AEBK__Z__V___pair___CBKW4ContextualProcessorDecision___std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBK_1_V__tuple___V_1__Z(
    v38 + 16,
    v40,
    (__int64)&v89);
  v41 = v67;
  v42 = v67 + 1;
  if ( v67 + 1 < 0 )
    v43 = (float)(int)(v42 & 1 | (v42 >> 1)) + (float)(int)(v42 & 1 | (v42 >> 1));
  else
    v43 = (float)(int)v42;
  if ( v71 < 0 )
    v44 = (float)(v71 & 1 | (unsigned int)((unsigned __int64)v71 >> 1))
        + (float)(v71 & 1 | (unsigned int)((unsigned __int64)v71 >> 1));
  else
    v44 = (float)(int)v71;
  if ( (float)(v43 / v44) > v65 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::_Rehash_for_1(&v65);
    v61 = (__int64 *)std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
                       &v65,
                       &v62,
                       v38 + 16,
                       v37);
    v41 = v67;
    v39 = *v61;
  }
  v45 = *(__int64 **)(v39 + 8);
  v67 = v41 + 1;
  *(_QWORD *)v38 = v39;
  *(_QWORD *)(v38 + 8) = v45;
  *v45 = v38;
  *(_QWORD *)(v39 + 8) = v38;
  v46 = 2 * (v70 & v37);
  v47 = v68;
  v48 = *(_QWORD **)(v68 + 8 * v46);
  if ( v48 == v66 )
  {
    *(_QWORD *)(v68 + 8 * v46) = v38;
  }
  else
  {
    if ( v48 == (_QWORD *)v39 )
    {
      *(_QWORD *)(v68 + 8 * v46) = v38;
      goto LABEL_56;
    }
    if ( *(__int64 **)(v68 + 8 * v46 + 8) != v45 )
      goto LABEL_56;
  }
  *(_QWORD *)(v47 + 8 * v46 + 8) = v38;
LABEL_56:
  *(_DWORD *)(v38 + 20) = v36;
  if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 16) )
  {
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
      v6,
      *(_QWORD *)(v6 + 8),
      &v64);
  }
  else
  {
    ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
      *(ContextualProcessorBuffer::ContextualProcessorMetadata **)(v6 + 8),
      (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)&v64);
    *(_QWORD *)(v6 + 8) += 224LL;
  }
  v49 = v86;
  if ( v86 )
  {
    v86 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  if ( v82 )
  {
    std::_Deallocate<16>(v82, (*((_QWORD *)&v83 + 1) - (_QWORD)v82) & 0xFFFFFFFFFFFFFFF8uLL);
    v82 = 0LL;
    v83 = 0LL;
  }
  v50 = (_QWORD **)v80;
  *(_QWORD *)v80[1] = 0LL;
  v51 = *v50;
  if ( v51 )
  {
    do
    {
      v52 = (_QWORD *)*v51;
      std::_Deallocate<16>(v51, 24LL);
      v51 = v52;
    }
    while ( v52 );
  }
  std::_Deallocate<16>(v80, 24LL);
  if ( (_QWORD)v74 )
  {
    std::_Deallocate<16>(v74, ((unsigned __int64)v75 - v74) & 0xFFFFFFFFFFFFFFF8uLL);
    v74 = 0LL;
    v75 = 0LL;
  }
  v53 = (_QWORD **)v73;
  **(_QWORD **)(v73 + 8) = 0LL;
  v54 = *v53;
  if ( v54 )
  {
    do
    {
      v59 = (_QWORD *)*v54;
      std::_Deallocate<16>(v54, 24LL);
      v54 = v59;
    }
    while ( v59 );
  }
  std::_Deallocate<16>(v73, 24LL);
  if ( (_QWORD)v68 )
  {
    std::_Deallocate<16>(v68, ((unsigned __int64)v69 - v68) & 0xFFFFFFFFFFFFFFF8uLL);
    v68 = 0LL;
    v69 = 0LL;
  }
  v55 = (_QWORD **)v66;
  *(_QWORD *)v66[1] = 0LL;
  v56 = *v55;
  if ( v56 )
  {
    do
    {
      v57 = (_QWORD *)*v56;
      std::_Deallocate<16>(v56, 24LL);
      v56 = v57;
    }
    while ( v57 );
  }
  result = std::_Deallocate<16>(v66, 24LL);
  v58 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
LABEL_21:
  v24 = *((_QWORD *)a4 + 1);
  if ( v24 )
  {
    *((_QWORD *)a4 + 1) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return result;
}
