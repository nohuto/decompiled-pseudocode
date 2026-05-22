/*
 * XREFs of ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180019FAC
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180018FB0 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorState@@W4ContextualProcessorDecision@@2_NPEBUIInputTarget@@4444@Z @ 0x180017554 (-Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorSt.c)
 *     ?Get@InfoMetadata@@SAPEAV1@XZ @ 0x18001B564 (-Get@InfoMetadata@@SAPEAV1@XZ.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x18001B628 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x18001B830 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_.c)
 *     ??A?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@$$QEAK@Z @ 0x18001B898 (--A-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@KUPointerState@InputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@$0A@@std@@@std@@IEBAXXZ @ 0x18001C3C8 (-_Check_max_size@-$_Hash@V-$_Umap_traits@KUPointerState@InputInfoValidator@@V-$_Uhash_compare@KU.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18001E688 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compar.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004AF44 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180051DC8 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18005433C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uh.c)
 *     ?OnlyObserve@@YA_NPEAUInputInfo@@@Z @ 0x18005F608 (-OnlyObserve@@YA_NPEAUInputInfo@@@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAXXZ @ 0x180065B78 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x180089EFC (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compa.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?FailFast_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18008FF0C (-FailFast_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800AE980 (-count@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 *     ??$?0V?$tuple@AEBK@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBKPEAUDeviceInfo@@@std@@AEAA@AEAV?$tuple@AEBK@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1800B175C (--$-0V-$tuple@AEBK@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CBKPEAUDeviceInfo@@@std@@AEAA@AEAV-$tu.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1801A80F4 (-count@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 ContextualProcessorBuffer::ProcessContextualProcessorDecision(__int64 a1, unsigned int *a2, ...)
{
  unsigned int v2; // r14d
  unsigned int *v3; // r15
  unsigned int *v4; // rsi
  __int64 v5; // rbx
  unsigned int *v6; // rdi
  const char *v7; // r12
  struct InfoMetadata *v8; // rax
  __int64 v9; // r8
  __int64 i; // rcx
  __int64 v11; // r13
  char v12; // al
  __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // r10
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // rcx
  __int64 *v19; // r9
  _QWORD **v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rdx
  _QWORD *v31; // r9
  __int64 *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r13
  __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v39; // r14d
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rax
  _QWORD *v46; // r9
  __int64 *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  _QWORD *v52; // r14
  unsigned int v53; // eax
  unsigned int v54; // edx
  __int64 v55; // rdx
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // r13
  __int64 v59; // r14
  __int64 v60; // rcx
  unsigned int v61; // r9d
  __int64 v62; // rcx
  __int64 *v63; // rdi
  __int64 *v64; // rbx
  __int64 *v65; // rax
  __int64 v66; // r8
  __int64 v67; // rbx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // rbx
  __int64 v72; // r14
  _QWORD *v73; // rax
  unsigned __int8 v74; // [rsp+68h] [rbp-A0h]
  __int16 v75; // [rsp+69h] [rbp-9Fh]
  unsigned __int8 v76; // [rsp+6Bh] [rbp-9Dh]
  unsigned __int8 v77; // [rsp+6Ch] [rbp-9Ch]
  _QWORD *v78; // [rsp+70h] [rbp-98h]
  unsigned int v79; // [rsp+70h] [rbp-98h]
  unsigned int v80; // [rsp+78h] [rbp-90h]
  char v81; // [rsp+7Ch] [rbp-8Ch]
  __int64 v82; // [rsp+80h] [rbp-88h] BYREF
  __int64 v83; // [rsp+88h] [rbp-80h] BYREF
  __int64 v84; // [rsp+90h] [rbp-78h]
  unsigned __int64 v85; // [rsp+98h] [rbp-70h]
  _QWORD v86[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-58h]
  _QWORD *v88; // [rsp+B8h] [rbp-50h]
  __int64 v89; // [rsp+C0h] [rbp-48h]
  char v90[8]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD **v91; // [rsp+D0h] [rbp-38h]
  __int64 v92; // [rsp+E0h] [rbp-28h]
  __int128 v93; // [rsp+E8h] [rbp-20h]
  char v94[16]; // [rsp+108h] [rbp+0h] BYREF
  char v95[16]; // [rsp+118h] [rbp+10h] BYREF
  char v96[16]; // [rsp+128h] [rbp+20h] BYREF
  char v97[16]; // [rsp+138h] [rbp+30h] BYREF
  char v98[16]; // [rsp+148h] [rbp+40h] BYREF
  char v99[16]; // [rsp+158h] [rbp+50h] BYREF
  char v100[16]; // [rsp+168h] [rbp+60h] BYREF
  char v101[16]; // [rsp+178h] [rbp+70h] BYREF
  char v102[16]; // [rsp+188h] [rbp+80h] BYREF
  char v103[80]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]
  __int64 v107; // [rsp+208h] [rbp+100h] BYREF
  va_list va; // [rsp+208h] [rbp+100h]
  _QWORD *v109; // [rsp+210h] [rbp+108h] BYREF
  va_list va1; // [rsp+210h] [rbp+108h]
  _QWORD *v111; // [rsp+218h] [rbp+110h]
  __int64 v112; // [rsp+220h] [rbp+118h]
  va_list va2; // [rsp+228h] [rbp+120h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v107 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v109 = va_arg(va2, _QWORD *);
  v111 = va_arg(va2, _QWORD *);
  v112 = va_arg(va2, _QWORD);
  v4 = (unsigned int *)v109;
  v5 = v107;
  v6 = a2;
  v7 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 48LL))(*(_QWORD *)v4);
  v4[34] = *(_DWORD *)(v5 + 8);
  v81 = 0;
  v85 = 0LL;
  std::unordered_set<unsigned long>::unordered_set<unsigned long>(v90);
  v8 = InfoMetadata::Get();
  v9 = *v6;
  for ( i = *(_QWORD *)v8; ; i += 392LL )
  {
    if ( i == *((_QWORD *)v8 + 1) )
    {
      v11 = 0LL;
      goto LABEL_7;
    }
    if ( ((unsigned int)v9 & *(_DWORD *)i) != 0 )
      break;
  }
  v11 = i + 8;
  if ( i != -8 )
  {
    v82 = (__int64)v6;
    v62 = *(_QWORD *)(i + 256);
    if ( !v62 )
    {
      std::_Xbad_function_call();
      goto LABEL_101;
    }
    (*(void (__fastcall **)(__int64, __int64 *, char *))(*(_QWORD *)v62 + 16LL))(v62, &v82, v90);
  }
LABEL_7:
  v4 = (unsigned int *)*((_QWORD *)v4 + 2);
  v6 = *(unsigned int **)v4;
  while ( v6 != v4 )
  {
    v3 = v6 + 4;
    v80 = *(_DWORD *)(v5 + 8);
    v5 = 0LL;
    v83 = 0LL;
    v74 = 0;
    v12 = v81;
    if ( !v6[4] )
      v12 = 1;
    v81 = v12;
    v2 = v6[5];
    if ( v2 )
    {
      if ( !v11 )
        goto LABEL_13;
LABEL_101:
      if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
             v90,
             v3) )
      {
        goto LABEL_13;
      }
      if ( std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::count(
             v107 + 16,
             v3) )
      {
        wil::details::in1diag3::FailFast_HrMsg(
          retaddr,
          (void *)0x1DD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
          (const char *)0x80070057LL,
          (int)"%ws: Decision exception for out-of-frame contact",
          v7);
      }
      if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
             v109 + 9,
             v3) )
      {
        if ( !std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::count(
                v109 + 18,
                v3) )
        {
          v74 = 1;
LABEL_13:
          v75 = 0;
          v76 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
                  v112,
                  v3) != 0;
          v78 = v109 + 9;
          v77 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
                  v109 + 9,
                  v3) != 0;
          v13 = v107;
          if ( std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::count(
                 v107 + 16,
                 v3) )
          {
            v80 = *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Try_emplace<unsigned long const &,>(
                                           v13 + 16,
                                           v94,
                                           v3)
                            + 20LL);
            *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Try_emplace<unsigned long const &,>(
                                     v109 + 18,
                                     v95,
                                     v3)
                      + 20LL) = v80;
            ++v85;
            HIBYTE(v75) = 1;
            v84 = v11;
          }
          else
          {
            v14 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v3);
            v15 = v109;
            v16 = 2 * (v14 & v109[24]);
            v17 = v109[21];
            v18 = *(__int64 **)(v17 + 16 * (v14 & v109[24]) + 8);
            v19 = (__int64 *)v109[19];
            v84 = v11;
            if ( v18 == v19 )
            {
LABEL_25:
              v18 = 0LL;
            }
            else
            {
              while ( *v3 != *((_DWORD *)v18 + 4) )
              {
                if ( v18 == *(__int64 **)(v17 + 8 * v16) )
                  goto LABEL_25;
                v18 = (__int64 *)v18[1];
              }
            }
            if ( v18 )
            {
              if ( *(__int64 **)(v17 + 8 * v16 + 8) == v18 )
              {
                if ( *(__int64 **)(v17 + 8 * v16) == v18 )
                  *(_QWORD *)(v17 + 8 * v16) = v19;
                else
                  v19 = (__int64 *)v18[1];
                *(_QWORD *)(v17 + 8 * v16 + 8) = v19;
              }
              else if ( *(__int64 **)(v17 + 8 * v16) == v18 )
              {
                *(_QWORD *)(v17 + 8 * v16) = *v18;
              }
              v55 = *v18;
              --v15[20];
              *(_QWORD *)v18[1] = v55;
              *(_QWORD *)(v55 + 8) = v18[1];
              std::_Deallocate<16>(v18, 24LL);
            }
          }
          v82 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v3);
          v24 = 2 * (v82 & v78[6]);
          v25 = v78[3];
          v26 = *(_QWORD *)(v25 + 16 * (v82 & v78[6]) + 8);
          v27 = v78 + 1;
          v86[0] = v78 + 1;
          v28 = v78[1];
          if ( v26 != v28 )
          {
            while ( *v3 != *(_DWORD *)(v26 + 16) )
            {
              if ( v26 == *(_QWORD *)(v25 + 8 * v24) )
              {
                v28 = v26;
                v27 = (_QWORD *)v86[0];
                goto LABEL_31;
              }
              v26 = *(_QWORD *)(v26 + 8);
            }
            goto LABEL_38;
          }
LABEL_31:
          if ( v78[2] == 0xAAAAAAAAAAAAAAALL )
            std::_Xlength_error("unordered_map/set too long");
          v86[1] = v27;
          v87 = 0LL;
          v29 = std::_Allocate<16,std::_Default_allocate_traits>(24LL);
          v87 = v29;
          *(_DWORD *)(v29 + 16) = *v3;
          if ( (unsigned __int8)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Check_rehash_required_1(v78) )
          {
            std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Rehash_for_1(
              v31,
              v30);
            v28 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                               v78,
                               v96,
                               v29 + 16,
                               v82);
            v31 = v78;
          }
          v87 = 0LL;
          v32 = *(__int64 **)(v28 + 8);
          ++v31[2];
          *(_QWORD *)v29 = v28;
          *(_QWORD *)(v29 + 8) = v32;
          *v32 = v29;
          *(_QWORD *)(v28 + 8) = v29;
          v33 = 2 * (v82 & v31[6]);
          v34 = v31[3];
          v35 = *(_QWORD *)(v34 + 16 * (v82 & v31[6]));
          if ( v35 == v31[1] )
          {
            *(_QWORD *)(v34 + 16 * (v82 & v31[6])) = v29;
            goto LABEL_37;
          }
          if ( v35 == v28 )
          {
            *(_QWORD *)(v34 + 16 * (v82 & v31[6])) = v29;
            goto LABEL_38;
          }
          if ( *(__int64 **)(v34 + 16 * (v82 & v31[6]) + 8) == v32 )
LABEL_37:
            *(_QWORD *)(v34 + 8 * v33 + 8) = v29;
LABEL_38:
          v36 = v112;
          v37 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
                  v112,
                  v3);
          v38 = v3[1];
          v79 = v38;
          if ( v37 )
          {
            v39 = 0;
          }
          else
          {
            v39 = v80;
            if ( v80 == 2 || (v79 = v3[1], v80 == 3) )
            {
              if ( (*a2 & 0x100003B) != 0 )
              {
                v40 = *((_BYTE *)a2 + 314);
                goto LABEL_44;
              }
              if ( *a2 == 4096 )
              {
                v40 = *((_BYTE *)a2 + 125);
LABEL_44:
                if ( v40 )
                {
                  if ( v80 == 3 )
                    wil::details::in1diag3::FailFast_HrMsg(
                      retaddr,
                      (void *)0x24B,
                      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contex"
                                    "tualprocessorbuffer.cpp",
                      (const char *)0x80070005LL,
                      (int)"%ws: Invalid decision: Drop while OnlyObserve",
                      v7);
                  wil::details::in1diag3::FailFast_HrMsg(
                    retaddr,
                    (void *)0x24F,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextu"
                                  "alprocessorbuffer.cpp",
                    (const char *)0x80070005LL,
                    (int)"%ws: Invalid decision: Send while OnlyObserve",
                    v7);
                }
              }
              if ( v38 == 3 )
                std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
                  v36,
                  v97,
                  v3);
              if ( v80 == 3 )
              {
                v41 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v3);
                v82 = v41;
                v42 = v111[3];
                v43 = *(_QWORD *)(v42 + 16 * (v111[6] & v41) + 8);
                v44 = v111[1];
                if ( v43 != v44 )
                {
                  v45 = *(_QWORD *)(v42 + 16 * (v111[6] & v41));
                  while ( *v3 != *(_DWORD *)(v43 + 16) )
                  {
                    if ( v43 == v45 )
                    {
                      v44 = v43;
                      goto LABEL_53;
                    }
                    v43 = *(_QWORD *)(v43 + 8);
                  }
                  goto LABEL_58;
                }
LABEL_53:
                std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator::PointerState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator::PointerState>>,0>>::_Check_max_size(v111);
                v88 = v111 + 1;
                v89 = 0LL;
                v43 = std::_Allocate<16,std::_Default_allocate_traits>(32LL);
                v89 = v43;
                v86[0] = v3;
                ____0V__tuple_AEBK_std__V__tuple___V_1__0A___Z_S___pair___CBKPEAUDeviceInfo___std__AEAA_AEAV__tuple_AEBK_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
                  v43 + 16,
                  v86);
                if ( (unsigned __int8)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Check_rehash_required_1(v111) )
                {
                  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Rehash_for_1(v46);
                  v44 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                                     v111,
                                     v98,
                                     v43 + 16,
                                     v82);
                  v46 = v111;
                }
                v89 = 0LL;
                v47 = *(__int64 **)(v44 + 8);
                ++v46[2];
                *(_QWORD *)v43 = v44;
                *(_QWORD *)(v43 + 8) = v47;
                *v47 = v43;
                *(_QWORD *)(v44 + 8) = v43;
                v48 = 2 * (v82 & v46[6]);
                v49 = v46[3];
                v50 = *(_QWORD *)(v49 + 16 * (v82 & v46[6]));
                if ( v50 == v46[1] )
                {
                  *(_QWORD *)(v49 + 16 * (v82 & v46[6])) = v43;
                }
                else
                {
                  if ( v50 == v44 )
                  {
                    *(_QWORD *)(v49 + 16 * (v82 & v46[6])) = v43;
                    goto LABEL_58;
                  }
                  if ( *(__int64 **)(v49 + 16 * (v82 & v46[6]) + 8) != v47 )
                  {
LABEL_58:
                    v51 = *(_QWORD *)(v43 + 24);
                    if ( v51 )
                    {
                      *(_QWORD *)(v43 + 24) = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
                    }
                    goto LABEL_60;
                  }
                }
                *(_QWORD *)(v49 + 8 * v48 + 8) = v43;
                goto LABEL_58;
              }
              v70 = v107;
              v71 = v107 + 88;
              if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
                     v107 + 88,
                     v3)
                && *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                                            v71,
                                            v99,
                                            v3)
                             + 24LL) )
              {
                v73 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                                  v71,
                                  v100,
                                  v3);
                Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(&v83, *v73 + 24LL);
                LOBYTE(v75) = 1;
              }
              else
              {
                Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(&v83, v70 + 80);
              }
              v5 = v83;
              if ( !v83 )
                wil::details::in1diag3::FailFast_HrMsg(
                  retaddr,
                  (void *)0x28A,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextual"
                                "processorbuffer.cpp",
                  (const char *)0x80004003LL,
                  (int)"%ws: Invalid target: nullptr",
                  v7);
              v72 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                                 v111,
                                 v101,
                                 v3);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v72 + 24));
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
              *(_QWORD *)(v72 + 24) = v5;
LABEL_60:
              v52 = v111;
              if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
                     v111,
                     v3) )
              {
                if ( !std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
                        a1 + 88,
                        v3) )
                {
                  v56 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                                     v52,
                                     v102,
                                     v3);
                  v57 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                          a1 + 88,
                          v103,
                          v3);
                  v58 = *(_QWORD *)v57;
                  v59 = *(_QWORD *)(v56 + 24);
                  if ( *(_QWORD *)(*(_QWORD *)v57 + 24LL) != v59 )
                  {
                    if ( v59 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
                    v60 = *(_QWORD *)(v58 + 24);
                    *(_QWORD *)(v58 + 24) = v59;
                    if ( v60 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                  }
                }
              }
              v53 = 2;
              v3[1] = 2;
              v39 = v80;
LABEL_63:
              v54 = v79;
LABEL_64:
              InputTraceLogging::ContextualProcessing::Decision(
                a2,
                (const WCHAR *)v7,
                *v3,
                v54,
                v39,
                v53,
                HIBYTE(v75),
                v5,
                v75,
                v74,
                v77,
                v76);
              if ( v5 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
              v11 = v84;
              goto LABEL_67;
            }
            if ( v80 == 1 )
            {
              if ( OnlyObserve((struct InputInfo *)a2) )
                wil::details::in1diag3::FailFast_HrMsg(
                  retaddr,
                  (void *)0x2A5,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextual"
                                "processorbuffer.cpp",
                  (const char *)0x80070005LL,
                  (int)"%ws: Invalid decision: Buffer while OnlyObserve",
                  v7);
              if ( v54 != v61 )
              {
                if ( v54 == 2 )
                  wil::details::in1diag3::FailFast_HrMsg(
                    retaddr,
                    (void *)0x2B1,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextu"
                                  "alprocessorbuffer.cpp",
                    (const char *)0x8000FFFFLL,
                    (int)"%ws: Invalid state transition: Handle to Buffer",
                    v7);
                if ( v54 == 3 )
                  wil::details::in1diag3::FailFast_HrMsg(
                    retaddr,
                    (void *)0x2B5,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextu"
                                  "alprocessorbuffer.cpp",
                    (const char *)0x8000FFFFLL,
                    (int)"%ws: Invalid state transition: Listen to Buffer",
                    v7);
                wil::details::in1diag3::FailFast_HrMsg(
                  retaddr,
                  (void *)0x2B9,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextual"
                                "processorbuffer.cpp",
                  (const char *)0x8000FFFFLL,
                  (int)"%ws: Invalid state transition: Unknown to Buffer",
                  v7);
              }
              v3[1] = v61;
              v53 = v61;
              goto LABEL_64;
            }
            if ( v80 == 4 )
            {
              if ( v38 == 2 )
                wil::details::in1diag3::FailFast_HrMsg(
                  retaddr,
                  (void *)0x2C9,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextual"
                                "processorbuffer.cpp",
                  (const char *)0x8000FFFFLL,
                  (int)"%ws: Invalid state transition: Handle to Listen",
                  v7);
              v3[1] = 3;
              v53 = 3;
              v54 = v38;
              goto LABEL_64;
            }
            v79 = v3[1];
            if ( v80 )
              wil::details::in1diag3::FailFast_HrMsg(
                retaddr,
                (void *)0x2E3,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualpr"
                              "ocessorbuffer.cpp",
                (const char *)0x80070057LL,
                (int)"%ws: Unknown decision",
                v7);
          }
          if ( v38 == 2
            && !std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
                  v36,
                  v3) )
          {
            wil::details::in1diag3::FailFast_HrMsg(
              retaddr,
              (void *)0x2DB,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
              (const char *)0x8000FFFFLL,
              (int)"%ws: Invalid state transition: Handle to Ignore",
              v7);
          }
          v3[1] = 0;
          v53 = 0;
          goto LABEL_63;
        }
        if ( v2 == 1 )
          wil::details::in1diag3::FailFast_HrMsg(
            retaddr,
            (void *)0x200,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
            (const char *)0x8000FFFFLL,
            (int)"%ws: Out-of-frame contact left in Buffer state",
            v7);
      }
    }
LABEL_67:
    v6 = *(unsigned int **)v6;
    v5 = v107;
  }
  if ( v85 < *(_QWORD *)(v5 + 32) )
    wil::details::in1diag3::FailFast_HrMsg(
      retaddr,
      (void *)0x300,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      (const char *)0x80070057LL,
      (int)"%ws: Unused decision exceptions",
      v7);
  if ( !v81 )
  {
    if ( *(_DWORD *)(v5 + 8) == 3 )
    {
      LODWORD(v109) = 0;
      v65 = (__int64 *)std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::operator[](
                         v111,
                         (_QWORD **)va1,
                         v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v65);
    }
    else if ( *(_DWORD *)(v5 + 8) == 2 )
    {
      v63 = (__int64 *)(v5 + 80);
      if ( *(_QWORD *)(v5 + 80) )
      {
        LODWORD(v109) = 0;
        v64 = (__int64 *)std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::operator[](
                           v111,
                           (_QWORD **)va1,
                           v9);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v64);
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v63);
        *v64 = *v63;
      }
    }
    LODWORD(v109) = 0;
    if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
           v111,
           (_QWORD **)va1) )
    {
      LODWORD(v109) = 0;
      if ( !std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
              a1 + 88,
              (_QWORD **)va1) )
      {
        LODWORD(v109) = 0;
        v67 = std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::operator[](
                v111,
                (_QWORD **)va1,
                v66);
        LODWORD(v107) = 0;
        v69 = std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::operator[](
                a1 + 88,
                (__int64 *)va,
                v68);
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v69, v67);
      }
    }
  }
  if ( v92 )
  {
    std::_Deallocate<16>(v92, (*((_QWORD *)&v93 + 1) - v92) & 0xFFFFFFFFFFFFFFF8uLL);
    v92 = 0LL;
    v93 = 0LL;
  }
  v20 = v91;
  *v91[1] = 0LL;
  v21 = *v20;
  if ( v21 )
  {
    do
    {
      v22 = (_QWORD *)*v21;
      std::_Deallocate<16>(v21, 24LL);
      v21 = v22;
    }
    while ( v22 );
  }
  return std::_Deallocate<16>(v91, 24LL);
}
