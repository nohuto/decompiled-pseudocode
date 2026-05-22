/*
 * XREFs of ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x1800278E4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ce1e1834a59fbc5c61c846d3c2759dd5__void__tagActivationObjectNotification_const___::_Do_call @ 0x1800278D0 (std--_Func_impl_no_alloc__lambda_ce1e1834a59fbc5c61c846d3c2759dd5__void__tagActivationObjectNoti.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x180026BC0 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIV-$unordered_set@_KU-.c)
 *     ??$emplace@AEB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180026C5C (--$emplace@AEB_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180026E04 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@.c)
 *     ?AddActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJ_KU_LUID@@0IIW4ACTIVATION_OBJECT_STATE@@@Z @ 0x180026FA8 (-AddActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJ_KU_LUID@@0IIW4ACTIVATION_OBJECT_STAT.c)
 *     ?OnActivationObjectNotification@ForegroundManagerServer@InputTraceLogging@@SAXAEBU_tagActivationObjectNotification@@@Z @ 0x180027BE8 (-OnActivationObjectNotification@ForegroundManagerServer@InputTraceLogging@@SAXAEBU_tagActivation.c)
 *     ?find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180027F0C (-find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV-$function@$$A6A_NPEAVActivatableEntit.c)
 *     ?GetItemAt@?$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_ActivatableEntityPrincipal_Stub@3456@$00$0A@$0A@@Bamo@Microsoft@@QEAAPEAVBamoActivatableEntityPrincipal@@I@Z @ 0x180028078 (-GetItemAt@-$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPr.c)
 *     ??$_Erase@_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x180028828 (--$_Erase@_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std.c)
 *     ?HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z @ 0x18004A31C (-HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x180070498 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800AEA5C (-find@-$_Hash@V-$_Umap_traits@IV-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800AF248 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@AEBU_LUID@@@Z @ 0x1800AFC40 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActivatableEntityB.c)
 *     ?OnForegroundChange@WinKeyScenarioTelemetry@@SAX_K@Z @ 0x18010DA68 (-OnForegroundChange@WinKeyScenarioTelemetry@@SAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ForegroundManager::OnActivationObjectNotification(
        ForegroundManager *this,
        const struct _tagActivationObjectNotification *a2)
{
  __int64 v4; // rsi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int i; // ebx
  __int64 v15; // r15
  int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  unsigned __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-89h]
  int v21; // [rsp+20h] [rbp-89h]
  __int128 v22; // [rsp+40h] [rbp-69h]
  unsigned int v23[4]; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v24[2]; // [rsp+60h] [rbp-49h]
  struct _LUID v25[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v26; // [rsp+78h] [rbp-31h] BYREF
  int v27; // [rsp+80h] [rbp-29h]
  _QWORD v28[8]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v29[56]; // [rsp+C8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  __int64 v31; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+120h] [rbp+77h] BYREF

  v22 = *(_OWORD *)a2;
  *(_OWORD *)v23 = *((_OWORD *)a2 + 1);
  *(_QWORD *)v24 = *((_QWORD *)a2 + 4);
  v4 = *((unsigned int *)a2 + 2);
  v31 = v4;
  *(_OWORD *)&v25[0].LowPart = *(_OWORD *)((char *)a2 + 44);
  v26 = *(_QWORD *)((char *)a2 + 60);
  v27 = *((_DWORD *)a2 + 17);
  InputTraceLogging::ForegroundManagerServer::OnActivationObjectNotification(a2);
  if ( *((_DWORD *)a2 + 10) == 2 )
    WinKeyScenarioTelemetry::OnForegroundChange(v4);
  v5 = *((_DWORD *)a2 + 10);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v9 = v6 - 1;
      if ( v9 && (v10 = v9 - 1) != 0 )
      {
        if ( v10 == 1 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 67) + 8LL) + 32LL))(*((_QWORD *)this + 67) + 8LL);
          for ( i = 0; i < (unsigned int)((__int64)(*(_QWORD *)(v13 + 64) - *(_QWORD *)(v13 + 56)) >> 3); ++i )
          {
            v15 = Microsoft::Bamo::ListPrincipalDetails<BamoActivatableEntityPrincipal,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,1,0,0>::GetItemAt(
                    v13,
                    i)
                + 8;
            if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15) == v4 )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 48LL))(v15, 0LL);
          }
          ActivationWatcherBamoPrincipal::TryFindActivatableEntity(*((_QWORD *)this + 67), &v31, (char *)&v26 + 4);
          if ( v31 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v31 + 8) + 48LL))(v31 + 8, v4);
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v31);
        }
      }
      else
      {
        v16 = ActivationWatcherBamoPrincipal::HandleActivationChange(
                *((ActivationWatcherBamoPrincipal **)this + 67),
                (const struct _LUID *)&v25[1].HighPart,
                (const struct _LUID *)&v25[0].HighPart);
        if ( v16 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xA8,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
            (const char *)(unsigned int)v16,
            v20);
        v31 = 0LL;
        if ( (unsigned __int8)operator==(&v25[1].HighPart, &v31) )
        {
          v17 = 0;
          v18 = 0;
          v19 = 0LL;
        }
        else
        {
          v17 = v24[0];
          v18 = v23[3];
          v19 = v4;
        }
        ForegroundManager::HandleForegroundChangeNotification(this, v19, v18, v17);
      }
    }
    else
    {
      v32 = v22;
      v28[0] = off_1801DF890;
      v28[1] = &v32;
      v28[7] = v28;
      v7 = ActivationWatcherBamoPrincipal::find_and_remove_if(*((_QWORD *)this + 67), v28);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x97,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          (const char *)(unsigned int)v7,
          v20);
      std::_Hash<std::_Umap_traits<unsigned int,std::unordered_set<unsigned __int64>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>,0>>::find(
        (char *)this + 24,
        &v32,
        &v23[3]);
      v8 = v32;
      if ( v32 != *((_QWORD *)this + 4) )
      {
        std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Erase<unsigned __int64>(
          v32 + 24,
          &v31);
        if ( !*(_QWORD *)(v8 + 40) )
          std::_Hash<std::_Umap_traits<unsigned int,std::unordered_set<unsigned __int64>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>>>,0>(
            (_QWORD *)this + 3,
            &v31,
            v8);
      }
    }
  }
  else
  {
    v11 = ActivationWatcherBamoPrincipal::AddActivatableEntity(
            *((ActivationWatcherBamoPrincipal **)this + 67),
            v4,
            (struct _LUID)v22,
            *(unsigned __int64 *)v23,
            v23[3],
            v24[0],
            v23[2]);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        (const char *)(unsigned int)v11,
        v21);
    if ( (v23[2] & 4) != 0 )
      ForegroundManager::HandleForegroundChangeNotification(this, v4, v23[3], v24[0]);
    v12 = std::_Hash<std::_Umap_traits<unsigned int,std::unordered_set<unsigned __int64>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>,0>>::_Try_emplace<unsigned int const &,>(
            (__int64)this + 24,
            (__int64)v29,
            (unsigned __int8 *)&v23[3]);
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::emplace<unsigned __int64 const &>(
      (float *)(*(_QWORD *)v12 + 24LL),
      (__int64)v25,
      (unsigned __int8 *)&v31);
  }
}
