/*
 * XREFs of ??$emplace@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180015614
 * Callers:
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001A490 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_last@PEAX@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAX_K@Z @ 0x180028AC8 (--$_Find_last@PEAX@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_pol.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x180037E00 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18003AA80 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18003ABE0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::emplace<IAudioSessionInfo * &,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy> &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 *v8; // r12
  _QWORD *v9; // rsi
  unsigned __int8 *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  float v19; // xmm0_4
  __int64 v20; // rcx
  float v21; // xmm1_4
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  _QWORD v29[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = (__int64 *)(a1 + 8);
  v29[0] = a1 + 8;
  v9 = operator new(0x20uLL);
  v29[1] = v9;
  v10 = (unsigned __int8 *)(v9 + 2);
  v9[2] = *a3;
  v11 = *a4;
  v9[3] = *a4;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()(v10);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = *(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & v12) + 8);
  v15 = *v8;
  if ( v14 == *v8 )
  {
LABEL_9:
    v17 = *(_QWORD *)(a1 + 16);
    if ( v17 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v18 = v17 + 1;
    if ( v18 < 0 )
      v19 = (float)(v18 & 1 | (unsigned int)((unsigned __int64)v18 >> 1))
          + (float)(v18 & 1 | (unsigned int)((unsigned __int64)v18 >> 1));
    else
      v19 = (float)(int)v18;
    v20 = *(_QWORD *)(a1 + 56);
    if ( v20 < 0 )
    {
      v22 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v20 >> 1);
      v21 = (float)(int)v22 + (float)(int)v22;
    }
    else
    {
      v21 = (float)(int)v20;
    }
    if ( (float)(v19 / v21) > *(float *)a1 )
    {
      v23 = std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        a1,
        v23);
      v15 = *(_QWORD *)((__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int8 *, __int64))std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Find_last<void *>)(
                         a1,
                         v29,
                         v10,
                         v12);
    }
    v24 = *(_QWORD **)(v15 + 8);
    ++*(_QWORD *)(a1 + 16);
    *v9 = v15;
    v9[1] = v24;
    *v24 = v9;
    *(_QWORD *)(v15 + 8) = v9;
    v25 = 2 * (v12 & *(_QWORD *)(a1 + 48));
    v26 = *(_QWORD *)(a1 + 24);
    v27 = *(_QWORD *)(v26 + 16 * (v12 & *(_QWORD *)(a1 + 48)));
    if ( v27 == *v8 )
    {
      *(_QWORD *)(v26 + 16 * (v12 & *(_QWORD *)(a1 + 48))) = v9;
LABEL_24:
      *(_QWORD *)(v26 + 8 * v25 + 8) = v9;
      goto LABEL_25;
    }
    if ( v27 == v15 )
    {
      *(_QWORD *)(v26 + 16 * (v12 & *(_QWORD *)(a1 + 48))) = v9;
    }
    else if ( *(_QWORD **)(v26 + 16 * (v12 & *(_QWORD *)(a1 + 48)) + 8) == v24 )
    {
      goto LABEL_24;
    }
LABEL_25:
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  v16 = *(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & v12));
  while ( *(_QWORD *)v10 != *(_QWORD *)(v14 + 16) )
  {
    if ( v14 == v16 )
    {
      v15 = v14;
      goto LABEL_9;
    }
    v14 = *(_QWORD *)(v14 + 8);
  }
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v9 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v9 + 3);
    std::_Deallocate<16>(v9, 32LL);
  }
  return a2;
}
