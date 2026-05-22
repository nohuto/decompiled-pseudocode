/*
 * XREFs of ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800B372C
 * Callers:
 *     ?SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800B4D10 (-SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEB.c)
 *     _lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator() @ 0x1801C0010 (_lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_--operator().c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801C1A54 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ?CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180025B00 (-CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$.c)
 *     ?CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180025B7C (-CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x180025BE4 (--$_Try_emplace@AEBW4InputType@@$$V@-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@.c)
 *     ??$_Find_lower_bound@W4InputType@@@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@@1@AEBW4InputType@@@Z @ 0x18006EC78 (--$_Find_lower_bound@W4InputType@@@-$_Tree@V-$_Tmap_traits@W4InputType@@V-$map@V-$basic_string@G.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180081D18 (-clear@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$find@V?$basic_string_view@GU?$char_traits@G@std@@@std@@U?$less@X@2@$0A@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x180093E28 (--$find@V-$basic_string_view@GU-$char_traits@G@std@@@std@@U-$less@X@2@$0A@@-$_Tree@V-$_Tmap_trai.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x1800B29BC (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800B2FF0 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x1800B429C (-GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@V-.c)
 *     ?OnConstantChanged@MPCConstantManager@@QEAAXW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x1800B44F4 (-OnConstantChanged@MPCConstantManager@@QEAAXW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z.c)
 *     ?SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B5048 (-SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V-$basic_string_view@GU-$char_traits.c)
 *     ?value@?$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ @ 0x1800B59EC (-value@-$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCConstantManager::ChangeConstant(__int64 a1, __int64 a2, __m128i *a3, __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  bool v11; // al
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  const wchar_t *v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  const char *v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned int v24; // [rsp+30h] [rbp-99h] BYREF
  int v25; // [rsp+38h] [rbp-91h] BYREF
  __m128i v26; // [rsp+40h] [rbp-89h] BYREF
  __int64 v27; // [rsp+50h] [rbp-79h]
  __int64 v28[2]; // [rsp+60h] [rbp-69h] BYREF
  __m128i v29; // [rsp+70h] [rbp-59h] BYREF
  _BYTE v30[32]; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v31[32]; // [rsp+A0h] [rbp-29h] BYREF
  _QWORD v32[4]; // [rsp+C0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v24 = a2;
  v26 = *a3;
  v25 = a2;
  v29 = v26;
  if ( !MPCConstantManager::CheckConstantExistence(a1, a2, (__int64)&v29) )
    return 2147942487LL;
  v7 = (_QWORD *)std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
                   (_QWORD *)(a1 + 56),
                   (__int64)&v29,
                   &v25);
  if ( *(_BYTE *)(*std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::find<std::basic_string_view<unsigned short>,std::less<void>,0>(
                     *v7 + 40LL,
                     v28,
                     &v26)
                + 68) != BYTE4(a4) )
    return 2147942487LL;
  v8 = (_QWORD *)std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
                   (_QWORD *)(a1 + 56),
                   (__int64)&v26,
                   &v24);
  v9 = std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::find<std::basic_string_view<unsigned short>,std::less<void>,0>(
         *v8 + 40LL,
         v28,
         a3);
  v10 = *v9;
  if ( *(char *)(*v9 + 68) != (__int64)SBYTE4(a4) )
    goto LABEL_14;
  if ( SBYTE4(a4) == -1LL )
    goto LABEL_12;
  if ( BYTE4(a4) )
  {
    if ( SBYTE4(a4) != 1LL )
    {
      v11 = *(float *)(v10 + 64) == *(float *)&a4;
      goto LABEL_11;
    }
    v12 = *(_BYTE *)(v10 + 64) == (unsigned __int8)a4;
  }
  else
  {
    v12 = *(_DWORD *)(v10 + 64) == (_DWORD)a4;
  }
  v11 = v12;
LABEL_11:
  if ( !v11 )
  {
LABEL_14:
    std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::_Find_lower_bound<enum InputType>(
      (__int64 *)(a1 + 72),
      &v26,
      &v24);
    if ( *(_BYTE *)(v27 + 25) || (signed int)v24 < *(_DWORD *)(v27 + 32) || v27 == *(_QWORD *)(a1 + 72) )
    {
      v14 = std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
              (_QWORD *)(a1 + 72),
              (__int64)&v26,
              &v24);
      std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::clear((_QWORD *)(*(_QWORD *)v14 + 40LL));
    }
    v15 = *(_QWORD *)std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
                       (_QWORD *)(a1 + 72),
                       (__int64)&v26,
                       &v24);
    v16 = (const wchar_t *)std::wstring::wstring((__int64)v32, (const void **)a3);
    *(_QWORD *)(*(_QWORD *)std::map<std::wstring,std::variant<unsigned long,bool,float>>::_Try_emplace<std::wstring,>(
                             (__int64 *)(v15 + 40),
                             (__int64)&v29,
                             v16)
              + 64LL) = a4;
    std::wstring::_Tidy_deallocate(v32);
    goto LABEL_19;
  }
LABEL_12:
  v26 = *a3;
  if ( MPCConstantManager::CheckModifiedConstantExistence(a1, v24, (__int64)&v26) )
  {
    v26 = *a3;
    MPCConstantManager::SetConstantToDefault(a1, v24, &v26);
  }
LABEL_19:
  MPCConstantManager::GetPROPVARIANTFromConstantValue(v13, v31, a4);
  v17 = (_QWORD *)std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
                    (_QWORD *)(a1 + 56),
                    (__int64)&v26,
                    &v24);
  v18 = std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::find<std::basic_string_view<unsigned short>,std::less<void>,0>(
          *v17 + 40LL,
          v28,
          a3);
  MPCConstantManager::GetPROPVARIANTFromConstantValue(v19, v30, *(_QWORD *)(*v18 + 64));
  if ( !v31[24] || !v30[24] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v20);
  v21 = std::optional<tagPROPVARIANT>::value(v30);
  v22 = std::optional<tagPROPVARIANT>::value(v31);
  MPCConstantManager::OnConstantChanged(a1, v24, a3->m128i_i64[0], v22, v21);
  return 0LL;
}
