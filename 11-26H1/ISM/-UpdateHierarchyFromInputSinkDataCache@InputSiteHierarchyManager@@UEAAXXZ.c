/*
 * XREFs of ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18002BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$_Deleted_copy_assign@U?$_Variant_destroy_layer_@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180013B00 (--1-$_Deleted_copy_assign@U-$_Variant_destroy_layer_@PEAXV-$unique_any_t@V-$unique_storage@U-$ha.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180017010 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18001E3B0 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KPEAUIMPC.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18002AE40 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z @ 0x18002BAF0 (-RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z.c)
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?reset@?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ @ 0x18002C4E4 (-reset@-$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??1InputSiteHierarchyEntry@InputSiteHierarchyManager@@QEAA@XZ @ 0x18002C5EC (--1InputSiteHierarchyEntry@InputSiteHierarchyManager@@QEAA@XZ.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18002C654 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$a.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002C7C0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$vector@V-$ComPtr@VInputSite@@@WRL@.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002C898 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyMa.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     atexit @ 0x18009A4BC (atexit.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18009AF8C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009AFF4 (_Init_thread_header.c)
 *     ??0?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x1800A5438 (--0-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x1800A5514 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800A5528 (-find@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_Uhash_co.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180132CA8 (--$_Emplace_reallocate@AEBV-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@-$vector.c)
 *     ??$?0V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@$0A@$0A@@?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x1801331CC (--$-0V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompos.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache(InputSiteHierarchyManager *this)
{
  InputSiteHierarchyManager *v1; // r15
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // rcx
  __int128 v12; // xmm2
  __int64 v13; // r14
  __int64 m; // r15
  int (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 *v19; // rdi
  __int64 *v20; // rdi
  __int64 n; // rbx
  __int64 v22; // rcx
  int v23; // ecx
  char *v24; // r12
  __int64 *v25; // r15
  unsigned __int8 *v26; // rbx
  __int64 *v27; // rdi
  _QWORD *v28; // rcx
  _QWORD *v29; // r8
  _QWORD *i; // rax
  __int64 v31; // r14
  __int64 v32; // rdi
  __int64 v33; // rax
  InputSiteHierarchyManager *v34; // r8
  __int64 **v35; // rdx
  __int64 *v36; // rax
  __int64 *v37; // rax
  __int64 *v38; // rcx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 v40; // r15
  __int64 *v41; // rdi
  __int64 *j; // r14
  __int64 v43; // rbx
  __m128i *v44; // r9
  __m128i *v45; // r8
  __m128i *v46; // rax
  __m128i *k; // rcx
  _QWORD *v48; // r10
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 *v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // [rsp+20h] [rbp-E0h]
  int v57; // [rsp+20h] [rbp-E0h]
  __int64 v58; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v59; // [rsp+30h] [rbp-D0h] BYREF
  InputSiteHierarchyManager *v60; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A0h]
  __int64 v65; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v66; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v67; // [rsp+80h] [rbp-80h] BYREF
  __int64 v68; // [rsp+88h] [rbp-78h]
  __int64 v69; // [rsp+90h] [rbp-70h] BYREF
  __int64 v70; // [rsp+98h] [rbp-68h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-60h]
  __int64 v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  __int64 v75; // [rsp+C0h] [rbp-40h]
  char v76[16]; // [rsp+C8h] [rbp-38h] BYREF
  char v77[16]; // [rsp+D8h] [rbp-28h] BYREF
  char v78[16]; // [rsp+E8h] [rbp-18h] BYREF
  char v79[16]; // [rsp+F8h] [rbp-8h] BYREF
  char v80[16]; // [rsp+108h] [rbp+8h] BYREF
  char v81[16]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v82[440]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v83; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int128 v84; // [rsp+2F0h] [rbp+1F0h]
  __int128 v85; // [rsp+300h] [rbp+200h]
  __int128 v86; // [rsp+310h] [rbp+210h]
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  v1 = this;
  v60 = this;
  v56 = 0;
  LODWORD(v65) = 0;
  if ( dword_180254E40 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180254E40);
    if ( dword_180254E40 == -1 )
    {
      SRWLock.Ptr = 0LL;
      std::unordered_map<unsigned __int64,unsigned __int64>::unordered_map<unsigned __int64,unsigned __int64>(&unk_180254DD8);
      qword_180254E18 = 0LL;
      xmmword_180254E20 = 0LL;
      qword_180254E30 = 0LL;
      byte_180254E38 = 0;
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180254E40);
    }
  }
  AcquireSRWLockExclusive(&SRWLock);
  v2 = *((_QWORD *)&xmmword_180254E20 + 1);
  v72 = *((_QWORD *)&xmmword_180254E20 + 1);
  v3 = 0LL;
  v68 = 0LL;
  xmmword_180254E20 = 0uLL;
  v4 = qword_180254E18;
  v71 = qword_180254E18;
  qword_180254E18 = 0LL;
  v73 = v71;
  v74 = 0LL;
  v75 = v72;
  ReleaseSRWLockExclusive(&SRWLock);
  if ( v4 )
  {
    v6 = *((_QWORD *)v1 + 12);
    if ( v6 )
    {
      v7 = (_QWORD *)*((_QWORD *)v1 + 11);
      if ( *((_QWORD *)v1 + 17) >> 3 <= v6 )
      {
        std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>>>(
          v6,
          v7);
        **((_QWORD **)v1 + 11) = *((_QWORD *)v1 + 11);
        *(_QWORD *)(*((_QWORD *)v1 + 11) + 8LL) = *((_QWORD *)v1 + 11);
        *((_QWORD *)v1 + 12) = 0LL;
        v61 = *((_QWORD *)v1 + 11);
        std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>>>(
          *((unsigned __int64 **)v1 + 13),
          *((unsigned __int64 **)v1 + 14),
          &v61);
      }
      else
      {
        std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Unchecked_erase(
          (char *)v1 + 80,
          *v7,
          *((_QWORD *)v1 + 11));
      }
      v5 = v4;
      v58 = v4;
LABEL_10:
      while ( 1 )
      {
        v8 = *(_QWORD *)(v5 + 8);
        v59 = v8;
        v9 = *(_QWORD *)(v5 + 24);
        v62 = v9;
        v10 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 == 2 )
          break;
        if ( v10 )
        {
          v23 = v10 - 1;
          if ( v23 )
          {
            if ( v23 != 2 )
              goto LABEL_27;
            v24 = (char *)v1 + 16;
            std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find(
              (char *)v1 + 16,
              &v66,
              &v59);
            v25 = (__int64 *)*((_QWORD *)v1 + 3);
            v26 = (unsigned __int8 *)v66;
            if ( v66 == v25 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x76,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteh"
                              "ierarchymanager.cpp",
                (const char *)0x8000FFFFLL,
                v56);
            v65 = v66[4];
            std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find(
              v24,
              &v67,
              &v65);
            v27 = v67;
            if ( v67 != v25 )
            {
              v28 = (_QWORD *)v67[6];
              v29 = (_QWORD *)v67[5];
              if ( v29 != v28 )
              {
                do
                {
                  if ( *v29 == v8 )
                    break;
                  ++v29;
                }
                while ( v29 != v28 );
                if ( v29 != v28 )
                {
                  for ( i = v29 + 1; i != v28; ++i )
                  {
                    if ( *i != v8 )
                      *v29++ = *i;
                  }
                  if ( v29 != v28 )
                    v27[6] = std::_Copy_memmove<enum _Button *,enum _Button *>(v28);
                }
              }
            }
            v31 = *((_QWORD *)v26 + 6);
            v32 = *((_QWORD *)v26 + 5);
            if ( v32 != v31 )
            {
              do
              {
                *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                         v24,
                                         v76,
                                         v32)
                          + 32LL) = 0LL;
                v32 += 8LL;
              }
              while ( v32 != v31 );
              v3 = v68;
            }
            v33 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()(v26 + 16);
            v34 = v60;
            v35 = (__int64 **)(*((_QWORD *)v60 + 5) + 16 * (v33 & *((_QWORD *)v60 + 8)));
            v36 = *v35;
            if ( v35[1] == (__int64 *)v26 )
            {
              if ( v36 == (__int64 *)v26 )
              {
                v37 = (__int64 *)*((_QWORD *)v60 + 3);
                *v35 = v37;
              }
              else
              {
                v37 = (__int64 *)*((_QWORD *)v26 + 1);
              }
              v35[1] = v37;
            }
            else if ( v36 == (__int64 *)v26 )
            {
              *v35 = *(__int64 **)v26;
            }
            v38 = *(__int64 **)v26;
            --*((_QWORD *)v34 + 4);
            **((_QWORD **)v26 + 1) = v38;
            v38[1] = *((_QWORD *)v26 + 1);
            InputSiteHierarchyManager::InputSiteHierarchyEntry::~InputSiteHierarchyEntry((InputSiteHierarchyManager::InputSiteHierarchyEntry *)(v26 + 24));
            std::_Deallocate<16>(v26, 64LL);
            InputSiteManager = ISMStatics::GetInputSiteManager();
            HIDWORD(v65) = 0;
            v40 = v59;
            v41 = (__int64 *)*((_QWORD *)InputSiteManager + 7);
            for ( j = (__int64 *)*((_QWORD *)InputSiteManager + 8); v41 != j; ++v41 )
            {
              v43 = *v41;
              v44 = *(__m128i **)(*v41 + 24);
              v45 = *(__m128i **)(*v41 + 16);
              v46 = v45;
              if ( v45 != v44 )
              {
                while ( v46->m128i_i32[0] )
                {
                  if ( ++v46 == v44 )
                    goto LABEL_57;
                }
                if ( v46->m128i_i64[1] == v40 )
                {
                  do
                  {
                    if ( !v45->m128i_i32[0] )
                      break;
                    ++v45;
                  }
                  while ( v45 != v44 );
                  if ( v45 != v44 )
                  {
                    for ( k = v45 + 1; k != v44; ++k )
                    {
                      if ( _mm_cvtsi128_si32(*k) )
                        *v45++ = *k;
                    }
                    if ( v45 != v44 )
                      *(_QWORD *)(v43 + 24) = std::_Copy_memmove<enum _Button *,enum _Button *>(v44);
                  }
                  std::_Optional_destruct_base<LegacyInputSinkData,0>::reset(v43 + 48);
                }
              }
LABEL_57:
              ;
            }
            v5 = v58;
            goto LABEL_26;
          }
          std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find(
            (char *)v1 + 16,
            &v69,
            &v59);
          if ( v69 != *((_QWORD *)v1 + 3) )
          {
            InputSiteHierarchyManager::RemoveInputSinkFromParentList(v1, v8, *(_QWORD *)(v69 + 32));
            v9 = v62;
          }
          *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                   (char *)v1 + 16,
                                   v77,
                                   &v59)
                    + 32LL) = v9;
          v55 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                  (char *)v1 + 16,
                  v78,
                  &v62);
          v53 = *(_QWORD *)v55 + 40LL;
          v54 = *(__int64 **)(*(_QWORD *)v55 + 48LL);
          if ( v54 == *(__int64 **)(*(_QWORD *)v55 + 56LL) )
            goto LABEL_87;
          *v54 = v59;
          *(_QWORD *)(v53 + 8) += 8LL;
        }
        else
        {
          ISMStatics::GetInputSiteManager();
          std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(
            v82,
            v5 + 16);
          v82[20] = 0;
          v82[25] = 0;
          v82[36] = 0;
          v82[96] = 0;
          v82[160] = 0;
          v82[224] = 0;
          v82[288] = 0;
          v82[352] = 0;
          v82[424] = 0;
          InputSiteManager::GetInputSiteFromInputSinkData(v48, &v61, v82, 1);
          v56 |= 3u;
          std::_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>((__int64)v82);
          v49 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                  (char *)v1 + 16,
                  v79,
                  &v59);
          Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(*(_QWORD *)v49 + 24LL), (char *)&v61);
          v50 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v50 + 16LL))(v50);
          }
          v51 = v62;
          *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                   (char *)v1 + 16,
                                   v80,
                                   &v59)
                    + 32LL) = v51;
          v52 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                  (char *)v1 + 16,
                  v81,
                  &v62);
          v53 = *(_QWORD *)v52 + 40LL;
          v54 = *(__int64 **)(*(_QWORD *)v52 + 48LL);
          if ( v54 == *(__int64 **)(*(_QWORD *)v52 + 56LL) )
          {
LABEL_87:
            std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(v53, v54, &v59);
            goto LABEL_27;
          }
          *v54 = v59;
          *(_QWORD *)(v53 + 8) += 8LL;
        }
LABEL_27:
        v5 += 96LL;
        v58 = v5;
        if ( !v5 )
        {
          v4 = v71;
          v2 = v72;
          goto LABEL_4;
        }
      }
      std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find(
        (char *)v1 + 16,
        &v70,
        &v59);
      if ( v70 == *((_QWORD *)v1 + 3) )
        goto LABEL_27;
      v11 = *(_QWORD *)(v70 + 24);
      v12 = *(_OWORD *)(v5 + 32);
      v83 = v12;
      v84 = *(_OWORD *)(v5 + 48);
      v85 = *(_OWORD *)(v5 + 64);
      v86 = *(_OWORD *)(v5 + 80);
      if ( !*(_BYTE *)(v11 + 480) )
        goto LABEL_27;
      *(_OWORD *)(v11 + 408) = v12;
      *(_OWORD *)(v11 + 424) = v84;
      *(_OWORD *)(v11 + 440) = v85;
      *(_OWORD *)(v11 + 456) = v86;
      if ( !*(_BYTE *)(v11 + 472) )
        *(_BYTE *)(v11 + 472) = 1;
      v63 = 0LL;
      v64 = 0LL;
      v57 = v56 | 4;
      LODWORD(v65) = v57;
      v58 = 0LL;
      v13 = *(_QWORD *)(v11 + 488);
      for ( m = *(_QWORD *)(v11 + 496); v13 != m; v13 += 16LL )
      {
        v15 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v13 + 8);
        v16 = **v15;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
        if ( v16(v15, &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5, &v58) >= 0 )
        {
          if ( *((_QWORD *)&v63 + 1) == v64 )
          {
            std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate> const &>(
              &v63,
              *((_QWORD *)&v63 + 1),
              &v58);
          }
          else
          {
            **((_QWORD **)&v63 + 1) = v58;
            if ( v58 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
            *((_QWORD *)&v63 + 1) += 8LL;
          }
        }
      }
      v17 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v19 = (__int64 *)*((_QWORD *)&v63 + 1);
      v18 = (__int64 *)v63;
      if ( (_QWORD)v63 != *((_QWORD *)&v63 + 1) )
      {
        do
        {
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v18 + 24LL))(*v18, &v83);
          ++v18;
        }
        while ( v18 != v19 );
        v18 = (__int64 *)v63;
      }
      v56 = v57 & 0xFFFFFFFB;
      if ( v18 )
      {
        v20 = (__int64 *)*((_QWORD *)&v63 + 1);
        if ( v18 != *((__int64 **)&v63 + 1) )
        {
          do
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18++);
          while ( v18 != v20 );
          v18 = (__int64 *)v63;
        }
        std::_Deallocate<16>(v18, (v64 - (_QWORD)v18) & 0xFFFFFFFFFFFFFFF8uLL);
      }
LABEL_26:
      v1 = v60;
      goto LABEL_27;
    }
  }
  v5 = v4;
  v58 = v4;
  if ( v4 )
    goto LABEL_10;
LABEL_4:
  if ( v4 )
  {
    for ( n = v4; n != v3; n += 96LL )
    {
      v22 = *(_QWORD *)(n + 16);
      if ( v22 )
      {
        if ( v22 != -1 )
          NtCloseCompositionInputSink(v22);
      }
    }
    std::_Deallocate<16>(v4, 32 * ((v2 - v4) >> 5));
  }
}
