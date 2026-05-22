/*
 * XREFs of ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x18001BA14
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180018D1C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x18001B628 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x18001B830 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18001C320 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ??1?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x18001C3FC (--1-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ??1?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18001C484 (--1-$_Hash@V-$_Umap_traits@PEAUIInputTarget@@V-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180051DC8 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18005433C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uh.c)
 *     ??0InfoMetadata@@QEAA@XZ @ 0x180054B4C (--0InfoMetadata@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x180089F28 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_comp.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     __std_init_once_link_alternate_names_and_abort @ 0x18009C908 (__std_init_once_link_alternate_names_and_abort.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800AE980 (-count@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 *     ??$?0V?$tuple@AEBK@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBKPEAUDeviceInfo@@@std@@AEAA@AEAV?$tuple@AEBK@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1800B175C (--$-0V-$tuple@AEBK@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CBKPEAUDeviceInfo@@@std@@AEAA@AEAV-$tu.c)
 *     ??$_Try_emplace@PEAUIInputTarget@@$$V@?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@_N@1@$$QEAPEAUIInputTarget@@@Z @ 0x1801A7178 (--$_Try_emplace@PEAUIInputTarget@@$$V@-$_Hash@V-$_Umap_traits@PEAUIInputTarget@@V-$unordered_set.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ContextualProcessorBuffer::DeliverInputToTarget(
        _QWORD *a1,
        unsigned int *a2,
        union _RTL_RUN_ONCE *a3,
        __int64 a4,
        __int64 a5)
{
  char v7; // al
  _QWORD **v8; // rdi
  _QWORD *i; // rbx
  unsigned __int8 v10; // r12
  __int64 v11; // rbx
  union _RTL_RUN_ONCE v12; // r8
  __int64 m; // rdi
  union _RTL_RUN_ONCE *v14; // rax
  InfoMetadata *Ptr; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rcx
  const char *v19; // r9
  __int64 v20; // r8
  _DWORD *j; // rax
  WINBOOL **v22; // r14
  __int64 v23; // r10
  union _RTL_RUN_ONCE *v25; // rax
  const char *v26; // r9
  __int64 **v27; // rsi
  __int64 *k; // rdi
  WINBOOL *v29; // rcx
  unsigned int v30; // edi
  size_t v31; // rsi
  wil::details::in1diag3 *v32; // rcx
  WINBOOL *v33; // rcx
  WINBOOL *v34; // rcx
  _QWORD *v35; // r14
  _QWORD *n; // rsi
  WINBOOL *v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // esi
  const struct std::nothrow_t *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r9
  union _RTL_RUN_ONCE v44; // r8
  __int64 v45; // rcx
  __int64 *v46; // rdx
  union _RTL_RUN_ONCE v47; // rcx
  __int64 v48; // rax
  WINBOOL **v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  const struct std::nothrow_t *v56; // rdx
  const struct std::nothrow_t *v57; // rdx
  int v58; // [rsp+28h] [rbp-E0h]
  WINBOOL fPending[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL *v61; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B8h]
  union _RTL_RUN_ONCE *v63; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A8h]
  WINBOOL **v65; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+70h] [rbp-98h] BYREF
  __int64 v67; // [rsp+78h] [rbp-90h] BYREF
  union _RTL_RUN_ONCE *v68; // [rsp+80h] [rbp-88h]
  __int64 v69; // [rsp+88h] [rbp-80h]
  unsigned __int64 *v70; // [rsp+90h] [rbp-78h] BYREF
  __int128 v71; // [rsp+98h] [rbp-70h]
  __int64 v72; // [rsp+A8h] [rbp-60h]
  __int64 v73; // [rsp+B0h] [rbp-58h]
  char v74[8]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD *v75; // [rsp+C0h] [rbp-48h]
  _BYTE v76[64]; // [rsp+F8h] [rbp-10h] BYREF
  char v77[64]; // [rsp+138h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]
  WINBOOL *v80; // [rsp+190h] [rbp+88h] BYREF
  __int64 v81; // [rsp+1A0h] [rbp+98h]

  v81 = a4;
  if ( (*a2 & 0x100003B) != 0 )
  {
    v7 = *((_BYTE *)a2 + 314);
LABEL_4:
    if ( v7 )
      return 0LL;
    goto LABEL_5;
  }
  if ( *a2 == 4096 )
  {
    v7 = *((_BYTE *)a2 + 125);
    goto LABEL_4;
  }
LABEL_5:
  v8 = (_QWORD **)a1[12];
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    if ( !std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
            a3,
            i + 2) )
    {
      v52 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                        a3,
                        &v63,
                        i + 2);
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(*v52 + 24LL, i + 3);
    }
  }
  v10 = 0;
  LOBYTE(v80) = 0;
  v11 = *(_QWORD *)(a1[19] + 16LL);
  v66 = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  fPending[0] = 0;
  if ( !std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
          a3,
          fPending) )
    goto LABEL_26;
  LODWORD(v80) = 0;
  v60 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v80);
  v12.Ptr = a3[3].Ptr;
  m = *((_QWORD *)v12.Ptr + 2 * ((__int64)a3[6].Ptr & v60) + 1);
  v14 = a3 + 1;
  Ptr = (InfoMetadata *)a3[1].Ptr;
  if ( (InfoMetadata *)m == Ptr )
  {
    m = (__int64)a3[1].Ptr;
    v22 = (WINBOOL **)m;
    goto LABEL_39;
  }
  while ( *(_DWORD *)(m + 16) )
  {
    if ( m == *((_QWORD *)v12.Ptr + 2 * ((__int64)a3[6].Ptr & v60)) )
    {
      Ptr = (InfoMetadata *)m;
      v22 = (WINBOOL **)m;
      v14 = a3 + 1;
LABEL_39:
      if ( a3[2].Ptr == (PVOID)0x7FFFFFFFFFFFFFFLL )
        std::_Xlength_error("unordered_map/set too long");
      goto LABEL_71;
    }
    m = *(_QWORD *)(m + 8);
  }
  v16 = m;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v16 + 24);
    if ( v11 != v17 )
    {
      if ( v17 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*(_QWORD *)(v16 + 24));
      v18 = v11;
      v11 = v17;
      v66 = v17;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v10 = 1;
    LOBYTE(v80) = 1;
LABEL_26:
    fPending[0] = 0;
    if ( !__std_init_once_begin_initialize(&InfoMetadata::s_createdInfoMetadata, 0, fPending, 0LL) )
      abort();
    if ( fPending[0] )
    {
      v63 = &InfoMetadata::s_createdInfoMetadata;
      v64 = 4LL;
      v61 = (WINBOOL *)operator new(0x18uLL);
      InfoMetadata::s_instanceInfoMetadata = InfoMetadata::InfoMetadata((InfoMetadata *)v61);
      if ( !InitOnceComplete(&InfoMetadata::s_createdInfoMetadata, 0, 0LL) )
        _std_init_once_link_alternate_names_and_abort(v51, v50);
    }
    if ( !InfoMetadata::s_instanceInfoMetadata )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\metadata\\infometadata.cpp",
        v19);
    v20 = *a2;
    for ( j = *(_DWORD **)InfoMetadata::s_instanceInfoMetadata; ; j += 98 )
    {
      if ( j == *((_DWORD **)InfoMetadata::s_instanceInfoMetadata + 1) )
      {
        v22 = 0LL;
        goto LABEL_34;
      }
      if ( ((unsigned int)v20 & *j) != 0 )
        break;
    }
    v22 = (WINBOOL **)(j + 2);
LABEL_34:
    v65 = v22;
    if ( !v22 )
      break;
    LODWORD(v67) = 0;
    v68 = 0LL;
    v69 = 0LL;
    v25 = (union _RTL_RUN_ONCE *)std::_Allocate<16,std::_Default_allocate_traits>(88LL);
    v25->Ptr = v25;
    v25[1].Ptr = v25;
    v68 = v25;
    v70 = 0LL;
    v71 = 0LL;
    v72 = 7LL;
    v73 = 8LL;
    LODWORD(v67) = 1065353216;
    std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
      &v70,
      0x10uLL,
      (unsigned __int64)v25);
    fPending[0] = 0;
    v27 = (__int64 **)a3[1].Ptr;
    for ( k = *v27; k != (__int64 *)v27; k = (__int64 *)*k )
    {
      if ( *((_DWORD *)k + 4) && k[3] != v11 )
      {
        v60 = k[3];
        v53 = (_QWORD *)std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::_Try_emplace<IInputTarget *,>(
                          &v67,
                          &v63,
                          &v60);
        std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
          *v53 + 24LL,
          &v61,
          k + 2);
      }
    }
    if ( !v69 )
    {
LABEL_48:
      v80 = fPending;
      v61 = (WINBOOL *)a2;
      v29 = v22[23];
      if ( !v29 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        JUMPOUT(0x18001C31ALL);
      }
      (*(void (__fastcall **)(WINBOOL *, WINBOOL **, WINBOOL **))(*(_QWORD *)v29 + 16LL))(v29, &v61, &v80);
      if ( !fPending[0] )
      {
        std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::~_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>(&v67);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        return 0LL;
      }
      std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::~_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>(&v67);
      break;
    }
    a3 = v68;
    for ( m = (__int64)v68->Ptr; ; m = *(_QWORD *)m )
    {
      if ( (union _RTL_RUN_ONCE *)m == a3 )
      {
        v10 = (unsigned __int8)v80;
        goto LABEL_48;
      }
      v63 = 0LL;
      v31 = (int)a2[6];
      v32 = retaddr;
      if ( v31 < 0x20 )
        goto LABEL_111;
      Ptr = (InfoMetadata *)operator new[]((int)a2[6]);
      v63 = (union _RTL_RUN_ONCE *)Ptr;
      LODWORD(v64) = v31;
      memcpy_0(Ptr, a2, v31);
      v60 = (__int64)Ptr;
      v61 = (WINBOOL *)a2;
      v33 = v22[7];
      if ( !v33 )
        goto LABEL_110;
      (*(void (__fastcall **)(WINBOOL *, WINBOOL **, __int64, __int64 *))(*(_QWORD *)v33 + 16LL))(
        v33,
        &v61,
        m + 24,
        &v60);
      std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v76);
      std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v74);
      v61 = (WINBOOL *)Ptr;
      v34 = v22[31];
      if ( !v34 )
        break;
      (*(void (__fastcall **)(WINBOOL *, WINBOOL **, char *))(*(_QWORD *)v34 + 16LL))(v34, &v61, v74);
      v35 = v75;
      for ( n = (_QWORD *)*v75; n != v35; n = (_QWORD *)*n )
      {
        if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
               a5,
               n + 2) )
        {
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
            v76,
            v77,
            n + 2);
        }
      }
      v61 = fPending;
      v60 = (__int64)Ptr;
      v22 = v65;
      v37 = v65[23];
      if ( !v37 )
      {
        std::_Xbad_function_call();
LABEL_110:
        std::_Xbad_function_call();
LABEL_111:
        wil::details::in1diag3::_FailFast_Unexpected(
          v32,
          (void *)0x1F2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
          v26);
      }
      (*(void (__fastcall **)(WINBOOL *, __int64 *, WINBOOL **))(*(_QWORD *)v37 + 16LL))(v37, &v60, &v61);
      if ( fPending[0] )
      {
        v38 = a1[20];
        if ( v38 )
        {
          v58 = 1;
          v39 = (*(__int64 (__fastcall **)(__int64, InfoMetadata *, _BYTE *, _QWORD))(*(_QWORD *)v38 + 24LL))(
                  v38,
                  Ptr,
                  v76,
                  *(_QWORD *)(m + 16));
          v40 = v39;
          if ( v39 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x44C,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
              (const char *)(unsigned int)v39,
              1);
            std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(v74);
            std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(v76);
            operator delete(Ptr, v41);
            std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::~_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>(&v67);
            if ( v11 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            return v40;
          }
        }
        else
        {
          v54 = *(_QWORD *)(m + 16);
          if ( v54 )
          {
            v55 = (*(__int64 (__fastcall **)(__int64, InfoMetadata *))(*(_QWORD *)v54 + 24LL))(v54, Ptr);
            v40 = v55;
            if ( v55 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x450,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualpr"
                              "ocessorbuffer.cpp",
                (const char *)(unsigned int)v55,
                v58);
              std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(v74);
              std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(v76);
              VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v63, v56);
              std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::~_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>(&v67);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v66);
              return v40;
            }
          }
        }
      }
      std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(v74);
      std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(v76);
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v63, v57);
    }
    std::_Xbad_function_call();
LABEL_71:
    v63 = v14;
    v64 = 0LL;
    v16 = std::_Allocate<16,std::_Default_allocate_traits>(32LL);
    v64 = v16;
    v65 = &v80;
    ____0V__tuple_AEBK_std__V__tuple___V_1__0A___Z_S___pair___CBKPEAUDeviceInfo___std__AEAA_AEAV__tuple_AEBK_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v16 + 16,
      &v65);
    if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Check_rehash_required_1((__int64)a3) )
    {
      v42 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a3);
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Forced_rehash(
        a3,
        v42);
      v43 = v60;
      v44.Ptr = a3[3].Ptr;
      v45 = *((_QWORD *)v44.Ptr + 2 * ((__int64)a3[6].Ptr & v60) + 1);
      m = (__int64)a3[1].Ptr;
      if ( v45 == m )
      {
        v62 = 0LL;
LABEL_75:
        v61 = (WINBOOL *)m;
      }
      else
      {
        while ( 1 )
        {
          m = v45;
          if ( *(_DWORD *)(v16 + 16) == *(_DWORD *)(v45 + 16) )
          {
            m = *(_QWORD *)v45;
            v62 = v45;
            goto LABEL_75;
          }
          if ( v45 == *((_QWORD *)v44.Ptr + 2 * ((__int64)a3[6].Ptr & v60)) )
            break;
          v45 = *(_QWORD *)(v45 + 8);
        }
        v61 = (WINBOOL *)v45;
        v62 = 0LL;
      }
      v22 = (WINBOOL **)m;
      Ptr = (InfoMetadata *)v61;
    }
    else
    {
      v43 = v60;
    }
    v46 = *(__int64 **)(m + 8);
    ++a3[2].Ptr;
    *(_QWORD *)v16 = Ptr;
    *(_QWORD *)(v16 + 8) = v46;
    *v46 = v16;
    *(_QWORD *)(m + 8) = v16;
    v47.Ptr = a3[3].Ptr;
    v48 = 2 * (v43 & (__int64)a3[6].Ptr);
    v49 = (WINBOOL **)*((_QWORD *)v47.Ptr + 2 * (v43 & (__int64)a3[6].Ptr));
    if ( v49 == a3[1].Ptr )
    {
      *((_QWORD *)v47.Ptr + 2 * (v43 & (__int64)a3[6].Ptr)) = v16;
      goto LABEL_19;
    }
    if ( v49 == v22 )
    {
      *((_QWORD *)v47.Ptr + 2 * (v43 & (__int64)a3[6].Ptr)) = v16;
    }
    else if ( *((__int64 **)v47.Ptr + 2 * (v43 & (__int64)a3[6].Ptr) + 1) == v46 )
    {
LABEL_19:
      *((_QWORD *)v47.Ptr + v48 + 1) = v16;
    }
  }
  v23 = a1[20];
  if ( v23 )
  {
    if ( !v10 && *(_QWORD *)(v81 + 16) )
    {
      v30 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v23 + 32LL))(a1[20], a2);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      v30 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64, __int64, _DWORD))(*(_QWORD *)v23 + 24LL))(
              v23,
              a2,
              a5,
              v11,
              v10);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    if ( !v11 )
      return 0LL;
    v30 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)v11 + 24LL))(v11, a2, v20);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v30;
}
