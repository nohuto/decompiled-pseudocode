/*
 * XREFs of ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18001C750
 * Callers:
 *     <none>
 * Callees:
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18001CF2C (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     ??$?0AEBK$$Z$$V@?$pair@$$CBKW4ContextualProcessorDecision@@@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBK@1@V?$tuple@$$V@1@@Z @ 0x18001D0BC (--$-0AEBK$$Z$$V@-$pair@$$CBKW4ContextualProcessorDecision@@@std@@QEAA@Upiecewise_construct_t@1@V.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x18001D8F8 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x18001DAEC (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800322E0 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18008B824 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall ContextualProcessorBuffer::AddProcessor(__int64 a1, __int64 a2, int *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  float v25; // xmm0_4
  float v26; // xmm1_4
  __int64 *v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // [rsp+20h] [rbp-E0h] BYREF
  float v36; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h]
  _QWORD *v39; // [rsp+40h] [rbp-C0h]
  _QWORD *v40; // [rsp+48h] [rbp-B8h]
  _QWORD *v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h]
  __int128 v45; // [rsp+70h] [rbp-90h]
  _QWORD *v46; // [rsp+80h] [rbp-80h]
  _QWORD *v47; // [rsp+88h] [rbp-78h]
  _QWORD *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+B0h] [rbp-50h]
  _QWORD *v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C0h] [rbp-40h]
  _QWORD *v55; // [rsp+C8h] [rbp-38h]
  _QWORD *v56; // [rsp+D0h] [rbp-30h]
  _QWORD *v57; // [rsp+D8h] [rbp-28h]
  __int64 v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int64 v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  int *v62; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v63; // [rsp+108h] [rbp+8h] BYREF
  __int64 v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+178h] [rbp+78h] BYREF

  v35 = 0LL;
  v38 = 0LL;
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v6 = v6;
  v6[1] = v6;
  v37 = v6;
  v42 = 7LL;
  v43 = 8LL;
  v36 = 1.0;
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v39 = v7;
  v8 = v7 + 16;
  v40 = v7 + 16;
  v41 = v7 + 16;
  while ( v7 != v8 )
    *v7++ = v6;
  v45 = 0LL;
  v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v9 = v9;
  v9[1] = v9;
  *(_QWORD *)&v45 = v9;
  v49 = 7LL;
  v50 = 8LL;
  v44 = 1065353216;
  v10 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v46 = v10;
  v11 = v10 + 16;
  v47 = v10 + 16;
  v48 = v10 + 16;
  while ( v10 != v11 )
    *v10++ = v9;
  v51 = 0LL;
  v54 = 0LL;
  v12 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v12 = v12;
  v12[1] = v12;
  v53 = v12;
  v58 = 7LL;
  v59 = 8LL;
  v52 = 1065353216;
  v13 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v55 = v13;
  v14 = v13 + 16;
  v56 = v13 + 16;
  v57 = v13 + 16;
  while ( v13 != v14 )
    *v13++ = v12;
  v60 = 0LL;
  v61 = 0LL;
  v15 = v35;
  if ( v35 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v15 = v35;
    }
    v35 = a2;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *a3;
  v65 = 0;
  v17 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v65);
  v18 = v17;
  v19 = v39[2 * (v42 & v17) + 1];
  v20 = (__int64)v37;
  if ( (_QWORD *)v19 != v37 )
  {
    v21 = v39[2 * (v42 & v17)];
    while ( *(_DWORD *)(v19 + 16) )
    {
      if ( v19 == v21 )
      {
        v20 = v19;
        goto LABEL_19;
      }
      v19 = *(_QWORD *)(v19 + 8);
    }
    goto LABEL_29;
  }
LABEL_19:
  if ( v38 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("unordered_map/set too long");
  v63 = &v37;
  v64 = 0LL;
  v19 = std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  v64 = v19;
  v62 = &v65;
  ____0AEBK__Z__V___pair___CBKW4ContextualProcessorDecision___std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBK_1_V__tuple___V_1__Z(
    v19 + 16,
    v22,
    &v62);
  v23 = v38;
  v24 = v38 + 1;
  if ( v38 + 1 < 0 )
    v25 = (float)(int)(v24 & 1 | (v24 >> 1)) + (float)(int)(v24 & 1 | (v24 >> 1));
  else
    v25 = (float)(int)v24;
  if ( v43 < 0 )
    v26 = (float)(v43 & 1 | (unsigned int)((unsigned __int64)v43 >> 1))
        + (float)(v43 & 1 | (unsigned int)((unsigned __int64)v43 >> 1));
  else
    v26 = (float)(int)v43;
  if ( (float)(v25 / v26) > v36 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::_Rehash_for_1(&v36);
    v34 = (__int64 *)std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
                       &v36,
                       &v63,
                       v19 + 16,
                       v18);
    v23 = v38;
    v20 = *v34;
  }
  v27 = *(__int64 **)(v20 + 8);
  v38 = v23 + 1;
  *(_QWORD *)v19 = v20;
  *(_QWORD *)(v19 + 8) = v27;
  *v27 = v19;
  *(_QWORD *)(v20 + 8) = v19;
  v28 = 2 * (v18 & v42);
  v29 = v39;
  v30 = (_QWORD *)v39[2 * (v18 & v42)];
  if ( v30 == v37 )
  {
    v39[2 * (v18 & v42)] = v19;
    goto LABEL_28;
  }
  if ( v30 == (_QWORD *)v20 )
  {
    v39[2 * (v18 & v42)] = v19;
    goto LABEL_29;
  }
  if ( (__int64 *)v39[2 * (v18 & v42) + 1] == v27 )
LABEL_28:
    v29[v28 + 1] = v19;
LABEL_29:
  *(_DWORD *)(v19 + 20) = v16;
  v31 = *((_QWORD *)a3 + 1);
  v32 = v60;
  if ( v60 != v31 )
  {
    if ( v31 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v31 + 8LL))(*((_QWORD *)a3 + 1));
      v32 = v60;
    }
    v60 = v31;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  LODWORD(v51) = 0;
  LOBYTE(v61) = 0;
  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 40) )
  {
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
      a1 + 24,
      *(_QWORD *)(a1 + 32),
      &v35);
  }
  else
  {
    ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
      *(ContextualProcessorBuffer::ContextualProcessorMetadata **)(a1 + 32),
      (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)&v35);
    *(_QWORD *)(a1 + 32) += 224LL;
  }
  ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata((ContextualProcessorBuffer::ContextualProcessorMetadata *)&v35);
  v33 = *((_QWORD *)a3 + 1);
  if ( v33 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
}
