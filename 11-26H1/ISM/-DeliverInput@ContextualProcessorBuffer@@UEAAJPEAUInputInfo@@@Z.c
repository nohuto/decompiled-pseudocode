/*
 * XREFs of ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180016490 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180016500 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180017420 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ??$emplace@AEBU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@1@@Z @ 0x180018BD4 (--$emplace@AEBU-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@-$_Hash@V-$_Umap_trai.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXXZ @ 0x180018CF0 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180018D1C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??1ContextualProcessorResponse@@QEAA@XZ @ 0x180018DF0 (--1ContextualProcessorResponse@@QEAA@XZ.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180018FB0 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?_Reinsert_with_invalid_vec@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180019AC4 (-_Reinsert_with_invalid_vec@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_co.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z @ 0x180019D88 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z.c)
 *     ?OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z @ 0x180019E6C (-OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z.c)
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180019FAC (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@W4_Button@@PEAX@std@@@std@@@?$_List_node@W4_Button@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@W4_Button@@PEAX@std@@@1@PEAU01@@Z @ 0x18001B388 (--$_Free_non_head@V-$allocator@U-$_List_node@W4_Button@@PEAX@std@@@std@@@-$_List_node@W4_Button@.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x18001B628 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x18001B730 (--0-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x18001BA14 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ??1?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x18001C3FC (--1-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ??1?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18001E2F8 (--1-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x18001E8B8 (-clear@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProc.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180040DB0 (-clear@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004AF44 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x18004D600 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 *     ??$construct@UInputSample@ContextualProcessorBuffer@@U12@@?$_Default_allocator_traits@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@SAXAEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@1@QEAUInputSample@ContextualProcessorBuffer@@$$QEAU34@@Z @ 0x18004D784 (--$construct@UInputSample@ContextualProcessorBuffer@@U12@@-$_Default_allocator_traits@V-$allocat.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@AEBV01@@Z @ 0x18004F734 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180051DC8 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ?CheckProcessorHasAllState@ContextualProcessorBuffer@@AEAA_NAEBUContextualProcessorMetadata@1@W4ContextualProcessorState@@@Z @ 0x180053C88 (-CheckProcessorHasAllState@ContextualProcessorBuffer@@AEAA_NAEBUContextualProcessorMetadata@1@W4.c)
 *     ??0InfoMetadata@@QEAA@XZ @ 0x180054B4C (--0InfoMetadata@@QEAA@XZ.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@2@_K@Z @ 0x18005876C (-_Erase_bucket@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorState@@V-$_Uhash_compare@KU-$hash@K.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAXXZ @ 0x180065B78 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x18008A89C (-_Unchecked_erase@-$list@U-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$allocat.c)
 *     ??R?$_Func_class@XPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAU1@@std@@QEBAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@1@0@Z @ 0x18009858C (--R-$_Func_class@XPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocato.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     __std_init_once_link_alternate_names_and_abort @ 0x18009C908 (__std_init_once_link_alternate_names_and_abort.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800AE980 (-count@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801A8084 (-_Unchecked_erase@-$list@U-$pair@$$CBKW4ContextualProcessorDecision@@@std@@V-$allocator@U-$pair@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::DeliverInput(ContextualProcessorBuffer *this, struct InputInfo *a2)
{
  const char *v3; // r9
  __int64 kk; // r13
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 ***v11; // r12
  __int64 **v12; // rcx
  __int64 *i; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  _QWORD *v25; // rax
  size_t j; // rdi
  __int64 **v27; // rcx
  __int64 v28; // rax
  __int64 *k; // rax
  _QWORD *v30; // r14
  _QWORD *v31; // rax
  _QWORD *v32; // rsi
  _QWORD *v33; // r14
  _QWORD **v34; // rcx
  _QWORD *v35; // rcx
  _QWORD **v36; // rcx
  _QWORD *v37; // rbx
  _QWORD *v39; // rdi
  char *v40; // rsi
  unsigned __int64 v41; // rcx
  __int64 *v42; // rdi
  bool v43; // zf
  __int64 v44; // rsi
  __int64 *v45; // rax
  void *v46; // rdi
  void *v47; // rcx
  __int64 v48; // rsi
  __int64 **v49; // rbx
  __int64 *v50; // rdi
  __int64 **v51; // r8
  __int64 *v52; // rdx
  _QWORD *v53; // rdx
  unsigned int *v54; // rcx
  __int64 v55; // rdi
  const char *v56; // r9
  unsigned int *v57; // r12
  _DWORD *mm; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rdx
  _QWORD *v61; // rax
  _QWORD *v62; // rdi
  _QWORD *v63; // rsi
  char *v64; // r9
  __int64 v65; // rdx
  _QWORD *v66; // rax
  unsigned __int8 *v67; // rbx
  int *v68; // rbx
  wil::details::in1diag3 *v69; // rcx
  int v70; // esi
  struct IInputTarget *v71; // rbx
  const unsigned __int16 *v72; // rax
  unsigned int v73; // edi
  const unsigned __int16 *v74; // rax
  const struct std::nothrow_t *v75; // rdx
  _QWORD *v76; // rsi
  _QWORD **v77; // rcx
  _QWORD *v78; // rcx
  _QWORD *v79; // rdi
  _QWORD **v80; // rcx
  _QWORD *v81; // rcx
  __int64 *i1; // rax
  __int64 v83; // rax
  _QWORD *v84; // rsi
  __int64 *v85; // rbx
  __int64 *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // r12
  __int64 v89; // r11
  unsigned int *v90; // rax
  __int64 v91; // r13
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rsi
  _QWORD *v94; // rdi
  unsigned __int8 *nn; // rdi
  __int64 v96; // rcx
  unsigned __int64 v97; // r12
  unsigned __int64 v98; // rbx
  __int64 v99; // rsi
  __int64 ***v100; // rdx
  __int64 v101; // r13
  __int64 *m; // rax
  _QWORD *v103; // rdi
  __int64 v104; // rdx
  unsigned __int64 v105; // r8
  unsigned __int64 v106; // rcx
  float v107; // xmm0_4
  float v108; // xmm1_4
  __int64 v109; // r12
  __int64 v110; // rax
  _QWORD *v111; // r8
  const char *v112; // r9
  unsigned __int64 v113; // rbx
  void *v114; // rax
  const struct std::nothrow_t *v115; // rdx
  void *v116; // rcx
  _QWORD *v117; // rbx
  _QWORD *i2; // rdi
  __int64 v119; // rbx
  _QWORD **v120; // rbx
  _QWORD *i3; // rdi
  __int64 v122; // rcx
  __int64 v123; // rdx
  const struct std::nothrow_t *v124; // rdx
  __int64 v125; // rax
  unsigned int *v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 *v130; // rcx
  __int64 *n; // rax
  __int64 v132; // r13
  __int64 v133; // r12
  __int64 *ii; // rax
  InfoMetadata *v135; // rax
  unsigned int **v136; // rax
  unsigned __int64 *v137; // rax
  WINBOOL fPending[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v139; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v140; // [rsp+40h] [rbp-C0h]
  unsigned int *jj; // [rsp+48h] [rbp-B8h] BYREF
  int v142; // [rsp+54h] [rbp-ACh]
  __int64 ***v143; // [rsp+58h] [rbp-A8h]
  void *Src; // [rsp+60h] [rbp-A0h]
  unsigned int v145; // [rsp+68h] [rbp-98h] BYREF
  float v146; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v147; // [rsp+78h] [rbp-88h]
  unsigned __int64 v148; // [rsp+80h] [rbp-80h]
  _QWORD *v149; // [rsp+88h] [rbp-78h]
  __int128 v150; // [rsp+90h] [rbp-70h]
  __int64 v151; // [rsp+A0h] [rbp-60h]
  __int64 v152; // [rsp+A8h] [rbp-58h]
  void *v153; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v154; // [rsp+B8h] [rbp-48h]
  int v155; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v156; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v157; // [rsp+D0h] [rbp-30h]
  _BYTE v158[24]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v159; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v160; // [rsp+F8h] [rbp-8h]
  struct IInputTarget *v161; // [rsp+100h] [rbp+0h] BYREF
  __int64 v162; // [rsp+108h] [rbp+8h] BYREF
  _QWORD *v163; // [rsp+110h] [rbp+10h]
  _BYTE v164[24]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD *v165; // [rsp+130h] [rbp+30h]
  __int64 v166; // [rsp+138h] [rbp+38h]
  __int64 v167; // [rsp+140h] [rbp+40h] BYREF
  int v168; // [rsp+148h] [rbp+48h] BYREF
  _QWORD *v169; // [rsp+150h] [rbp+50h]
  __int64 v170; // [rsp+158h] [rbp+58h]
  __int128 v171; // [rsp+160h] [rbp+60h]
  _QWORD *v172; // [rsp+170h] [rbp+70h]
  __int64 v173; // [rsp+178h] [rbp+78h]
  __int64 v174; // [rsp+180h] [rbp+80h]
  int v175; // [rsp+190h] [rbp+90h] BYREF
  _QWORD *v176; // [rsp+198h] [rbp+98h]
  __int64 v177; // [rsp+1A0h] [rbp+A0h]
  _QWORD *v178; // [rsp+1A8h] [rbp+A8h]
  __int128 v179; // [rsp+1B0h] [rbp+B0h]
  __int64 v180; // [rsp+1C0h] [rbp+C0h]
  __int64 v181; // [rsp+1C8h] [rbp+C8h]
  int v182; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD *v183; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 v184; // [rsp+1E0h] [rbp+E0h]
  _QWORD *v185; // [rsp+1E8h] [rbp+E8h]
  __int128 v186; // [rsp+1F0h] [rbp+F0h]
  __int64 v187; // [rsp+200h] [rbp+100h]
  __int64 v188; // [rsp+208h] [rbp+108h]
  int v189; // [rsp+210h] [rbp+110h] BYREF
  _QWORD *v190; // [rsp+218h] [rbp+118h]
  __int64 v191; // [rsp+220h] [rbp+120h]
  _QWORD *v192; // [rsp+228h] [rbp+128h]
  __int128 v193; // [rsp+230h] [rbp+130h]
  __int64 v194; // [rsp+240h] [rbp+140h]
  __int64 v195; // [rsp+248h] [rbp+148h]
  _QWORD *v196; // [rsp+250h] [rbp+150h]
  _BYTE v197[16]; // [rsp+258h] [rbp+158h] BYREF
  char v198[24]; // [rsp+268h] [rbp+168h] BYREF
  _QWORD v199[2]; // [rsp+280h] [rbp+180h] BYREF
  char v200[64]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v201; // [rsp+2D0h] [rbp+1D0h]
  char v202[64]; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v203[72]; // [rsp+318h] [rbp+218h] BYREF
  _BYTE v204[56]; // [rsp+360h] [rbp+260h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3D8h] [rbp+2D8h]

  Src = a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v204, "ContextualProcessingInput", 0LL);
  if ( !*((_QWORD *)this + 18) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x324,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      v3);
  kk = 0LL;
  v177 = 0LL;
  v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(32LL);
  *v5 = v5;
  v5[1] = v5;
  v176 = v5;
  v180 = 7LL;
  v181 = 8LL;
  v175 = 1065353216;
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v178 = v6;
  v7 = v6 + 16;
  *(_QWORD *)&v179 = v6 + 16;
  *((_QWORD *)&v179 + 1) = v6 + 16;
  do
    *v6++ = v5;
  while ( v6 != v7 );
  v191 = 0LL;
  v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v8 = v8;
  v8[1] = v8;
  v190 = v8;
  v194 = 7LL;
  v195 = 8LL;
  v189 = 1065353216;
  v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v192 = v9;
  v10 = v9 + 16;
  *(_QWORD *)&v193 = v9 + 16;
  *((_QWORD *)&v193 + 1) = v9 + 16;
  do
    *v9++ = v8;
  while ( v9 != v10 );
  v30 = (_QWORD *)*((_QWORD *)this + 4);
  v31 = (_QWORD *)*((_QWORD *)this + 5);
  v196 = v31;
LABEL_5:
  if ( v30 == v31 )
  {
    v32 = (_QWORD *)*((_QWORD *)this + 7);
    v33 = (_QWORD *)*((_QWORD *)this + 8);
    if ( v32 != v33 )
    {
      do
      {
        ContextualProcessorBuffer::DeliverInputToTarget((char *)this - 8, *v32, v32 + 2, v32 + 10, v32 + 18);
        v32 += 26;
      }
      while ( v32 != v33 );
      std::vector<ContextualProcessorBuffer::InputSample>::clear((char *)this + 56);
    }
    ContextualProcessorBuffer::DeliverInputToTarget((char *)this - 8, Src, &v175, *((_QWORD *)this + 18) + 24LL, &v189);
    goto LABEL_35;
  }
  v11 = (__int64 ***)(v30 + 2);
  v143 = (__int64 ***)(v30 + 2);
  v12 = (__int64 **)v30[2];
  for ( i = *v12; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v12 )
    {
LABEL_30:
      v30 += 28;
      v31 = v196;
      goto LABEL_5;
    }
    if ( *((_DWORD *)i + 5) )
      break;
  }
  v153 = (void *)kk;
  v155 = 0;
  v154 = 0LL;
  v156 = (_QWORD *)kk;
  v157 = kk;
  v14 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v14 = v14;
  v14[1] = v14;
  v156 = v14;
  *(_QWORD *)v158 = kk;
  *(_OWORD *)&v158[8] = 0LL;
  v159 = 7LL;
  v160 = 8LL;
  v155 = 1065353216;
  v15 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v16 = (__int64)(*(_QWORD *)&v158[16] - *(_QWORD *)v158) >> 3;
  if ( v16 )
    std::_Deallocate<16>(*(_QWORD *)v158, 8 * v16);
  *(_QWORD *)v158 = v15;
  v17 = v15 + 16;
  *(_QWORD *)&v158[8] = v15 + 16;
  *(_QWORD *)&v158[16] = v15 + 16;
  do
    *v15++ = v14;
  while ( v15 != v17 );
  v161 = (struct IInputTarget *)kk;
  LODWORD(v162) = 0;
  v163 = (_QWORD *)kk;
  *(_QWORD *)v164 = kk;
  v18 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(32LL);
  *v18 = v18;
  v18[1] = v18;
  v163 = v18;
  *(_OWORD *)&v164[8] = 0LL;
  v165 = (_QWORD *)kk;
  v166 = 7LL;
  v167 = 8LL;
  LODWORD(v162) = 1065353216;
  v19 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v20 = ((__int64)v165 - *(_QWORD *)&v164[8]) >> 3;
  if ( v20 )
    std::_Deallocate<16>(*(_QWORD *)&v164[8], 8 * v20);
  *(_QWORD *)&v164[8] = v19;
  v21 = v19 + 16;
  *(_QWORD *)&v164[16] = v19 + 16;
  v165 = v19 + 16;
  do
    *v19++ = v18;
  while ( v19 != v21 );
  v168 = 0;
  v169 = (_QWORD *)kk;
  v170 = kk;
  v22 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v22 = v22;
  v22[1] = v22;
  v169 = v22;
  v171 = 0LL;
  v172 = (_QWORD *)kk;
  v173 = 7LL;
  v174 = 8LL;
  v168 = 1065353216;
  v23 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v24 = (__int64)((__int64)v172 - v171) >> 3;
  if ( v24 )
    std::_Deallocate<16>(v171, 8 * v24);
  *(_QWORD *)&v171 = v23;
  v25 = v23 + 16;
  *((_QWORD *)&v171 + 1) = v23 + 16;
  v172 = v23 + 16;
  do
    *v23++ = v22;
  while ( v23 != v25 );
  j = v30[2];
LABEL_21:
  for ( j = *(_QWORD *)j;
        ;
        j = std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Unchecked_erase(v11) )
  {
    v27 = *v11;
    if ( (__int64 **)j == *v11 )
      break;
    fPending[0] = *(_DWORD *)(j + 16);
    if ( !std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
            &v175,
            fPending) )
      goto LABEL_21;
    if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
           &v189,
           fPending) )
    {
LABEL_190:
      std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
        &v168,
        v198,
        fPending);
      goto LABEL_21;
    }
    v28 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)(j + 16));
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Erase_bucket(
      v30 + 1,
      j,
      v30[7] & v28);
  }
  for ( k = *v27; ; k = (__int64 *)*k )
  {
    if ( k == (__int64 *)v27 )
    {
      LODWORD(v154) = kk;
LABEL_29:
      ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v153);
      goto LABEL_30;
    }
    if ( *((_DWORD *)k + 5) )
      break;
  }
  if ( !*((_BYTE *)v30 + 216) && *((_QWORD *)this + 7) != *((_QWORD *)this + 8) )
  {
    v97 = kk;
    v98 = kk;
    v99 = kk;
    v140 = kk;
    v100 = v143;
    while ( 1 )
    {
      v101 = *((_QWORD *)this + 7);
      if ( v98 >= 0x4EC4EC4EC4EC4EC5LL * ((*((_QWORD *)this + 8) - v101) >> 4) )
        break;
      for ( m = **v100; m != (__int64 *)*v100; m = (__int64 *)*m )
      {
        if ( *((_DWORD *)m + 5) )
        {
          v199[0] = 0LL;
          v199[1] = 0LL;
          std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>(v200);
          v201 = 0LL;
          std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)v202);
          std::unordered_set<unsigned long>::unordered_set<unsigned long>(v203);
          ContextualProcessorBuffer::MakeContextualProcessorDecision(
            (_DWORD)this - 8,
            *(_QWORD *)(v99 + v101),
            (unsigned int)v199,
            (_DWORD)v30,
            v99 + v101 + 16,
            v99 + v101 + 144);
          v130 = (__int64 *)*v143;
          for ( n = **v143; n != v130; n = (__int64 *)*n )
          {
            if ( *((_DWORD *)n + 5) != 2 )
            {
              if ( (unsigned __int8)ContextualProcessorBuffer::CheckProcessorHasAllState(v130, v30, 0LL) )
              {
                ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)v199);
                goto LABEL_203;
              }
LABEL_199:
              ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)v199);
              v100 = v143;
              goto LABEL_200;
            }
          }
          if ( v97 <= v98 )
          {
            v132 = v98 - v97 + 1;
            *(_QWORD *)fPending = v98 + 1;
            v133 = 208 * v97;
            do
            {
              ContextualProcessorBuffer::DeliverInputToTarget(
                (char *)this - 8,
                *(_QWORD *)(v133 + *((_QWORD *)this + 7)),
                v133 + *((_QWORD *)this + 7) + 16LL,
                v133 + *((_QWORD *)this + 7) + 80LL,
                v133 + *((_QWORD *)this + 7) + 144LL);
              v133 += 208LL;
              --v132;
            }
            while ( v132 );
            v99 = v140;
            v97 = *(_QWORD *)fPending;
          }
          goto LABEL_199;
        }
      }
LABEL_200:
      ++v98;
      v99 += 208LL;
      v140 = v99;
    }
LABEL_203:
    for ( ii = **v143; ii != (__int64 *)*v143; ii = (__int64 *)*ii )
    {
      if ( *((_DWORD *)ii + 5) != 2 )
        goto LABEL_208;
    }
    std::vector<ContextualProcessorBuffer::InputSample>::clear((char *)this + 56);
LABEL_208:
    kk = 0LL;
  }
  *((_BYTE *)v30 + 216) = 1;
  v40 = (char *)this - 8;
  LODWORD(v154) = kk;
  if ( v157 )
  {
    if ( v160 >> 3 > v157 )
    {
      *(_QWORD *)fPending = v156;
      v84 = (_QWORD *)*v156;
      if ( (_QWORD *)*v156 != v156 )
      {
        v140 = *(_QWORD *)v158;
        v85 = (__int64 *)v84[1];
        v86 = v84;
        v87 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v84 + 16);
        v88 = 2 * (v87 & v159);
        v139 = *(_QWORD *)(v89 + 16 * (v87 & v159));
        v90 = *(unsigned int **)(v89 + 16 * (v87 & v159) + 8);
        jj = v90;
        do
        {
          v91 = *v86;
          if ( v86 == (__int64 *)v90 )
          {
            std::_Deallocate<16>(v86, 24LL);
            --v157;
            v42 = *(__int64 **)fPending;
            v43 = v139 == (_QWORD)v84;
            v44 = v140;
            if ( v43 )
            {
              *(_QWORD *)(v140 + 8 * v88) = *(_QWORD *)fPending;
              v45 = v42;
            }
            else
            {
              v45 = v85;
            }
            *(_QWORD *)(v44 + 8 * v88 + 8) = v45;
            while ( (__int64 *)v91 != v42 )
            {
              v125 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)(v91 + 16));
              v88 = 2 * (v125 & v159);
              v126 = *(unsigned int **)(v44 + 16 * (v125 & v159) + 8);
              for ( jj = v126; ; v126 = jj )
              {
                v139 = *(_QWORD *)v91;
                if ( (unsigned int *)v91 == v126 )
                  break;
                std::_Deallocate<16>(v91, 24LL);
                --v157;
                v91 = v139;
                if ( (__int64 *)v139 == v42 )
                  goto LABEL_115;
              }
              std::_Deallocate<16>(v91, 24LL);
              --v157;
              *(_QWORD *)(v44 + 8 * v88) = v42;
              *(_QWORD *)(v44 + 8 * v88 + 8) = v42;
              v91 = v139;
            }
            goto LABEL_59;
          }
          std::_Deallocate<16>(v86, 24LL);
          --v157;
          v86 = (__int64 *)v91;
          v90 = jj;
        }
        while ( v91 != *(_QWORD *)fPending );
        if ( (_QWORD *)v139 == v84 )
        {
          v44 = v140;
LABEL_115:
          *(_QWORD *)(v44 + 8 * v88) = v91;
        }
LABEL_59:
        *v85 = v91;
        *(_QWORD *)(v91 + 8) = v85;
        kk = 0LL;
      }
      v40 = (char *)this - 8;
    }
    else
    {
      std::_List_node<enum _Button,void *>::_Free_non_head<std::allocator<std::_List_node<enum _Button,void *>>>(
        v157,
        v156);
      *v156 = v156;
      v156[1] = v156;
      v157 = kk;
      v41 = (unsigned __int64)(*(_QWORD *)&v158[8] - *(_QWORD *)v158 + 7LL) >> 3;
      if ( *(_QWORD *)v158 > *(_QWORD *)&v158[8] )
        v41 = kk;
      if ( v41 )
        memset64(*(void **)v158, (unsigned __int64)v156, v41);
    }
  }
  v46 = (void *)v30[26];
  v47 = v153;
  if ( v153 != v46 )
  {
    if ( v46 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v46 + 8LL))(v30[26]);
      v47 = v153;
    }
    v153 = v46;
    if ( v47 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v47 + 16LL))(v47);
  }
  *(_DWORD *)(*((_QWORD *)v40 + 19) + 104LL) = *((_DWORD *)v30 + 34);
  v48 = *((_QWORD *)v40 + 19) + 112LL;
  if ( (_QWORD *)v48 != v30 + 18 )
  {
    *(_DWORD *)v48 = *((_DWORD *)v30 + 36);
    v49 = (__int64 **)v30[19];
    v50 = *v49;
    v51 = *(__int64 ***)(v48 + 8);
    v52 = *v51;
    while ( v52 != (__int64 *)v51 )
    {
      if ( v50 == (__int64 *)v49 )
      {
        std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Unchecked_erase(v48 + 8);
        goto LABEL_72;
      }
      *((_DWORD *)v52 + 4) = *((_DWORD *)v50 + 4);
      *((_DWORD *)v52 + 5) = *((_DWORD *)v50 + 5);
      v52 = (__int64 *)*v52;
      v50 = (__int64 *)*v50;
    }
    v53 = 0LL;
    v54 = 0LL;
    if ( v50 != (__int64 *)v49 )
    {
      v83 = std::_Allocate<16,std::_Default_allocate_traits>(24LL);
      *(_QWORD *)(v83 + 16) = v50[2];
      jj = (unsigned int *)v83;
      for ( kk = 1LL; ; ++kk )
      {
        v50 = (__int64 *)*v50;
        v139 = v83;
        v53 = (_QWORD *)v83;
        if ( v50 == (__int64 *)v49 )
          break;
        v83 = std::_Allocate<16,std::_Default_allocate_traits>(24LL);
        *(_QWORD *)(v83 + 16) = v50[2];
        v129 = v139;
        *(_QWORD *)v139 = v83;
        *(_QWORD *)(v83 + 8) = v129;
      }
      v54 = jj;
    }
    v55 = *(_QWORD *)(v48 + 8);
    if ( kk )
    {
      v136 = *(unsigned int ***)(v55 + 8);
      *((_QWORD *)v54 + 1) = v136;
      *v136 = v54;
      *v53 = v55;
      *(_QWORD *)(v55 + 8) = v53;
      *(_QWORD *)(v48 + 16) += kk;
    }
LABEL_72:
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Reinsert_with_invalid_vec(
      v48,
      v53);
  }
  fPending[0] = 0;
  if ( !__std_init_once_begin_initialize(&InfoMetadata::s_createdInfoMetadata, 0, fPending, 0LL) )
    abort();
  if ( fPending[0] )
  {
    v142 = 0;
    v135 = (InfoMetadata *)operator new(0x18uLL);
    InfoMetadata::s_instanceInfoMetadata = InfoMetadata::InfoMetadata(v135);
    if ( !InitOnceComplete(&InfoMetadata::s_createdInfoMetadata, 0, 0LL) )
      _std_init_once_link_alternate_names_and_abort();
  }
  if ( !InfoMetadata::s_instanceInfoMetadata )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\metadata\\infometadata.cpp",
      v56);
  v57 = (unsigned int *)Src;
  for ( mm = *(_DWORD **)InfoMetadata::s_instanceInfoMetadata; ; mm += 98 )
  {
    if ( mm == *((_DWORD **)InfoMetadata::s_instanceInfoMetadata + 1) )
    {
      kk = 0LL;
      goto LABEL_81;
    }
    if ( (*(_DWORD *)Src & *mm) != 0 )
      break;
  }
  kk = (__int64)(mm + 2);
LABEL_81:
  v182 = 0;
  v183 = 0LL;
  v184 = 0LL;
  v37 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v37 = v37;
  v37[1] = v37;
  v183 = v37;
  v185 = 0LL;
  v186 = 0LL;
  v187 = 7LL;
  v188 = 8LL;
  v182 = 1065353216;
  v59 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v60 = (__int64)(*((_QWORD *)&v186 + 1) - (_QWORD)v185) >> 3;
  if ( v60 )
    std::_Deallocate<16>(v185, 8 * v60);
  v185 = v59;
  v61 = v59 + 16;
  *(_QWORD *)&v186 = v59 + 16;
  *((_QWORD *)&v186 + 1) = v59 + 16;
  do
    *v59++ = v37;
  while ( v59 != v61 );
  if ( kk )
  {
    jj = v57;
    v96 = *(_QWORD *)(kk + 248);
    if ( !v96 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      goto LABEL_148;
    }
    (*(void (__fastcall **)(__int64, unsigned int **, int *))(*(_QWORD *)v96 + 16LL))(v96, &jj, &v182);
  }
  v146 = 0.0;
  v147 = 0LL;
  v148 = 0LL;
  v62 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v62 = v62;
  v62[1] = v62;
  v147 = v62;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 7LL;
  v152 = 8LL;
  v146 = 1.0;
  v63 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v65 = (__int64)(*((_QWORD *)&v150 + 1) - (_QWORD)v149) >> 3;
  if ( v65 )
    std::_Deallocate<16>(v149, 8 * v65);
  v149 = v63;
  v66 = v63 + 16;
  *(_QWORD *)&v150 = v63 + 16;
  *((_QWORD *)&v150 + 1) = v63 + 16;
  do
    *v63++ = v62;
  while ( v63 != v66 );
  v76 = v149;
  v67 = (unsigned __int8 *)*v143;
  for ( nn = (unsigned __int8 *)**v143; nn != v67; nn = *(unsigned __int8 **)nn )
  {
    if ( *((_DWORD *)nn + 5)
      && (!kk
       || std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
            &v182,
            nn + 16)) )
    {
      v139 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(nn + 16);
      v92 = v76[2 * (v139 & v151) + 1];
      *(_QWORD *)fPending = v147;
      if ( (_QWORD *)v92 == v147 )
      {
        v93 = *(_QWORD *)fPending;
LABEL_137:
        if ( v148 == 0xAAAAAAAAAAAAAAALL )
          std::_Xlength_error("unordered_map/set too long");
        v104 = std::_Allocate<16,std::_Default_allocate_traits>(24LL);
        v140 = v104;
        jj = (unsigned int *)(v104 + 16);
        *(_DWORD *)(v104 + 16) = *((_DWORD *)nn + 4);
        v105 = v148;
        v106 = v148 + 1;
        if ( (__int64)(v148 + 1) < 0 )
          v107 = (float)(int)(v106 & 1 | (v106 >> 1)) + (float)(int)(v106 & 1 | (v106 >> 1));
        else
          v107 = (float)(int)v106;
        if ( v152 < 0 )
          v108 = (float)(v152 & 1 | (unsigned int)((unsigned __int64)v152 >> 1))
               + (float)(v152 & 1 | (unsigned int)((unsigned __int64)v152 >> 1));
        else
          v108 = (float)(int)v152;
        if ( (float)(v107 / v108) > v146 )
        {
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Rehash_for_1(
            &v146,
            v104);
          v109 = v139;
          v137 = (unsigned __int64 *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                                       &v146,
                                       v197,
                                       jj,
                                       v139);
          v105 = v148;
          v93 = *v137;
          *(_QWORD *)fPending = *v137;
          v104 = v140;
        }
        else
        {
          v109 = v139;
        }
        v64 = *(char **)(v93 + 8);
        v148 = v105 + 1;
        *(_QWORD *)v104 = v93;
        *(_QWORD *)(v104 + 8) = v64;
        *(_QWORD *)v64 = v104;
        *(_QWORD *)(v93 + 8) = v104;
        v110 = 2 * (v109 & v151);
        v76 = v149;
        v111 = (_QWORD *)v149[2 * (v109 & v151)];
        if ( v111 != v147 )
        {
          if ( v111 == *(_QWORD **)fPending )
          {
            v149[2 * (v109 & v151)] = v104;
          }
          else
          {
            if ( (char *)v149[2 * (v109 & v151) + 1] != v64 )
              continue;
LABEL_160:
            v76[v110 + 1] = v104;
          }
          v76 = v149;
          continue;
        }
        v149[2 * (v109 & v151)] = v104;
        goto LABEL_160;
      }
      while ( *((_DWORD *)nn + 4) != *(_DWORD *)(v92 + 16) )
      {
        if ( v92 == v76[2 * (v139 & v151)] )
        {
          v93 = v92;
          *(_QWORD *)fPending = v92;
          goto LABEL_137;
        }
        v92 = *(_QWORD *)(v92 + 8);
      }
    }
  }
  v68 = (int *)Src;
  if ( !v148 )
    goto LABEL_95;
  j = *((int *)Src + 6);
  v69 = retaddr;
  if ( j < 0x20 )
LABEL_219:
    wil::details::in1diag3::_FailFast_Unexpected(
      v69,
      (void *)0x1F2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
      v64);
  v11 = (__int64 ***)operator new[](*((int *)Src + 6));
  memcpy_0(v11, v68, j);
  v145 = 1;
  if ( !kk )
    goto LABEL_92;
  if ( v148 < v184 )
    std::_Func_class<void,InputInfo *,std::unordered_set<unsigned long> &,InputInfo *>::operator()(
      kk + 64,
      v68,
      &v146,
      v11);
  jj = &v145;
  v139 = (__int64)v11;
  v127 = *(_QWORD *)(kk + 184);
  if ( !v127 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    goto LABEL_219;
  }
  (*(void (__fastcall **)(__int64, __int64 *, unsigned int **))(*(_QWORD *)v127 + 16LL))(v127, &v139, &jj);
  jj = (unsigned int *)v11;
  v128 = *(_QWORD *)(kk + 376);
  if ( !v128 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    goto LABEL_190;
  }
  (*(void (__fastcall **)(__int64, unsigned int **, int *))(*(_QWORD *)v128 + 16LL))(v128, &jj, &v189);
LABEL_92:
  v70 = (*(__int64 (__fastcall **)(_QWORD, __int64 ***, _QWORD, void **))(*(_QWORD *)*v30 + 40LL))(
          *v30,
          v11,
          *((_QWORD *)this + 18),
          &v153);
  v71 = v161;
  v72 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v30 + 48LL))(*v30);
  InputETW::ContextualProcessing::OnInput(v72, v71, v70);
  v73 = v145;
  v74 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v30 + 48LL))(*v30);
  InputTraceLogging::ContextualProcessing::OnInput((const struct InputInfo *)v11, v74, v73, v70);
  if ( v70 < 0 )
  {
    LODWORD(v154) = 0;
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(&v155);
  }
  v68 = (int *)Src;
  ContextualProcessorBuffer::ProcessContextualProcessorDecision(
    (_DWORD)this - 8,
    (_DWORD)Src,
    (unsigned int)&v153,
    (_DWORD)v30,
    (__int64)&v175,
    (__int64)&v189);
  operator delete(v11, v75);
  v76 = v149;
LABEL_95:
  if ( v76 )
  {
    std::_Deallocate<16>(v76, (*((_QWORD *)&v150 + 1) - (_QWORD)v76) & 0xFFFFFFFFFFFFFFF8uLL);
    kk = 0LL;
    v149 = 0LL;
    v150 = 0LL;
  }
  else
  {
    kk = 0LL;
  }
  v77 = (_QWORD **)v147;
  *(_QWORD *)v147[1] = 0LL;
  v78 = *v77;
  if ( v78 )
  {
    do
    {
      v79 = (_QWORD *)*v78;
      std::_Deallocate<16>(v78, 24LL);
      v78 = v79;
    }
    while ( v79 );
  }
  std::_Deallocate<16>(v147, 24LL);
  if ( v185 )
  {
    std::_Deallocate<16>(v185, (*((_QWORD *)&v186 + 1) - (_QWORD)v185) & 0xFFFFFFFFFFFFFFF8uLL);
    v185 = 0LL;
    v186 = 0LL;
  }
  v80 = (_QWORD **)v183;
  *(_QWORD *)v183[1] = 0LL;
  v81 = *v80;
  if ( v81 )
  {
    do
    {
      v94 = (_QWORD *)*v81;
      std::_Deallocate<16>(v81, 24LL);
      v81 = v94;
    }
    while ( v94 );
  }
  std::_Deallocate<16>(v183, 24LL);
  for ( i1 = **v143; ; i1 = (__int64 *)*i1 )
  {
    if ( i1 == (__int64 *)*v143 )
      goto LABEL_29;
    if ( *((_DWORD *)i1 + 5) == 1 )
      break;
  }
  ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v153);
  v153 = 0LL;
  v113 = v68[6];
  if ( v113 < 0x20 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1F2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
      v112);
  v114 = operator new[](v113);
  v116 = v153;
  v153 = v114;
  if ( v116 )
  {
    operator delete(v116, v115);
    v114 = v153;
  }
  LODWORD(v154) = v113;
  memcpy_0(v114, Src, v113);
  v155 = v175;
  v156 = 0LL;
  v157 = 0LL;
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::_Alloc_sentinel_and_proxy(&v156);
  memset(v158, 0, sizeof(v158));
  v159 = v180;
  v160 = v181;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
    v158,
    (__int64)(v179 - (_QWORD)v178) >> 3,
    v156);
  v117 = v176;
  for ( i2 = (_QWORD *)*v176; i2 != v117; i2 = (_QWORD *)*i2 )
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::emplace<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>> const &>(
      &v155,
      v197,
      i2 + 2);
  v119 = *((_QWORD *)this + 18);
  LODWORD(v161) = *(_DWORD *)(v119 + 24);
  v162 = 0LL;
  v163 = 0LL;
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::_Alloc_sentinel_and_proxy(&v162);
  memset(v164, 0, sizeof(v164));
  v165 = *(_QWORD **)(v119 + 72);
  v166 = *(_QWORD *)(v119 + 80);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
    v164,
    (__int64)(*(_QWORD *)(v119 + 56) - *(_QWORD *)(v119 + 48)) >> 3,
    v162);
  v120 = *(_QWORD ***)(v119 + 32);
  for ( i3 = *v120; i3 != v120; i3 = (_QWORD *)*i3 )
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::emplace<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>> const &>(
      &v161,
      v197,
      i3 + 2);
  std::unordered_set<unsigned long>::unordered_set<unsigned long>(&v167, &v189);
  v123 = *((_QWORD *)this + 8);
  if ( v123 == *((_QWORD *)this + 9) )
  {
    std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
      (char *)this + 56,
      v123,
      &v153);
  }
  else
  {
    std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::InputSample>>::construct<ContextualProcessorBuffer::InputSample,ContextualProcessorBuffer::InputSample>(
      v122,
      v123,
      &v153);
    *((_QWORD *)this + 8) += 208LL;
  }
  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(&v167);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(&v161);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(&v155);
  if ( v153 )
    operator delete(v153, v124);
LABEL_35:
  if ( v192 )
  {
    std::_Deallocate<16>(v192, (*((_QWORD *)&v193 + 1) - (_QWORD)v192) & 0xFFFFFFFFFFFFFFF8uLL);
    v192 = (_QWORD *)kk;
    v193 = 0LL;
  }
  v34 = (_QWORD **)v190;
  *(_QWORD *)v190[1] = kk;
  v35 = *v34;
  if ( v35 )
  {
    do
    {
      v39 = (_QWORD *)*v35;
      std::_Deallocate<16>(v35, 24LL);
      v35 = v39;
    }
    while ( v39 );
  }
  std::_Deallocate<16>(v190, 24LL);
  if ( v178 )
  {
    std::_Deallocate<16>(v178, (*((_QWORD *)&v179 + 1) - (_QWORD)v178) & 0xFFFFFFFFFFFFFFF8uLL);
    v178 = (_QWORD *)kk;
    v179 = 0LL;
  }
  v36 = (_QWORD **)v176;
  *(_QWORD *)v176[1] = kk;
  v37 = *v36;
  if ( *v36 )
  {
    do
    {
LABEL_148:
      v103 = (_QWORD *)*v37;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37 + 3);
      std::_Deallocate<16>(v37, 32LL);
      v37 = v103;
    }
    while ( v103 );
  }
  std::_Deallocate<16>(v176, 32LL);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v204);
  return 0LL;
}
