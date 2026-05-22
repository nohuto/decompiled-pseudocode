/*
 * XREFs of ?OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x1800B4370
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x180025BE4 (--$_Try_emplace@AEBW4InputType@@$$V@-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800B2F00 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$ba.c)
 *     ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x1800B429C (-GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@V-.c)
 *     StubCallback @ 0x1800B5120 (StubCallback.c)
 *     ?value@?$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ @ 0x1800B59EC (-value@-$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCConstantManager::OnCallbacksChanged(
        MPCConstantManager *this,
        struct BamoMPCConstantManagerClientStub *a2)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  int *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edx
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  __int64 v20; // rdx
  __int128 v22; // [rsp+30h] [rbp-79h]
  __int128 v23; // [rsp+40h] [rbp-69h] BYREF
  __int64 v24; // [rsp+50h] [rbp-59h]
  __int128 v25; // [rsp+60h] [rbp-49h] BYREF
  __int64 v26; // [rsp+70h] [rbp-39h]
  _BYTE v27[32]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v28[32]; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v29[16]; // [rsp+C0h] [rbp+17h] BYREF
  _BYTE v30[48]; // [rsp+D0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  __int64 v32; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v33; // [rsp+120h] [rbp+77h] BYREF
  __int64 v34; // [rsp+128h] [rbp+7Fh]

  v2 = (int)a2;
  if ( a2 && (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8) )
  {
    v6 = **((_QWORD **)this + 9);
    v33 = v6;
    while ( !*(_BYTE *)(v6 + 25) )
    {
      v7 = (int *)(v6 + 32);
      v8 = **(_QWORD **)(v6 + 40);
      v32 = v8;
      while ( !*(_BYTE *)(v8 + 25) )
      {
        v9 = (_QWORD *)(v8 + 32);
        MPCConstantManager::GetPROPVARIANTFromConstantValue(v5, (__int64)v28, *(_QWORD *)(v8 + 64));
        v10 = std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
                (_QWORD *)this + 7,
                (__int64)v29,
                v7);
        v11 = std::map<std::wstring,std::variant<unsigned long,bool,float>>::_Try_emplace<std::wstring const &,>(
                (__int64 *)(*(_QWORD *)v10 + 40LL),
                (__int64)v30,
                v9);
        MPCConstantManager::GetPROPVARIANTFromConstantValue(v12, (__int64)v27, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !v28[24] || !v27[24] )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x16C,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v13);
        v15 = std::optional<tagPROPVARIANT>::value(v27);
        v22 = *(_OWORD *)v15;
        v34 = *(_QWORD *)(v15 + 16);
        v16 = std::optional<tagPROPVARIANT>::value(v28);
        if ( v9[3] > 7uLL )
          v9 = (_QWORD *)*v9;
        v17 = *v7;
        v23 = v22;
        v18 = *(_OWORD *)v16;
        v24 = v34;
        v19 = *(_QWORD *)(v16 + 16);
        v25 = v18;
        v26 = v19;
        StubCallback(v2, v17, (int)v9, (int)&v25, (__int64)&v23);
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
          &v32,
          v20);
        v8 = v32;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
        &v33,
        v4);
      v6 = v33;
    }
  }
  return 0LL;
}
