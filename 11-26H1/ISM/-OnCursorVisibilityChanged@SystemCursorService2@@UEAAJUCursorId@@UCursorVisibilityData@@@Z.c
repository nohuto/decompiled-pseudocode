/*
 * XREFs of ?OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800FC3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB28 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800FA1CC (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??A?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEA_K$$QEA_K@Z @ 0x1800FABE4 (--A-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x1800FB9D8 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 *     ?GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ @ 0x1800FBD20 (-GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ.c)
 *     ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1800FCBC4 (-SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorService2::OnCursorVisibilityChanged(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  SystemCursor2 *v10; // rcx
  char EffectiveVisibiltyState; // al
  SystemCursor2 *v12; // rcx
  char v13; // dl
  int v14; // eax
  int v15[2]; // [rsp+20h] [rbp-38h] BYREF
  SystemCursor2 *v16; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v17; // [rsp+30h] [rbp-28h]
  _BYTE v18[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v20; // [rsp+6Ch] [rbp+14h]
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v20 = HIDWORD(a2);
  v5 = (unsigned int)a2;
  if ( !SystemCursorService2::CursorManagerCursorIdExists((SystemCursorService2 *)a1, (unsigned int)a2) )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)0x8000FFFFLL);
    return v6;
  }
  v21 = v5;
  *(_QWORD *)v15 = *(_QWORD *)std::unordered_map<unsigned __int64,unsigned __int64>::operator[](
                                (_QWORD *)(a1 + 184),
                                (unsigned __int8 *)&v21);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 112LL))(a1 + 8) )
  {
    v8 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
           (float *)(a1 + 56),
           (__int64)v18,
           (unsigned __int8 *)v15);
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
      &v16,
      (_QWORD *)(*(_QWORD *)v8 + 24LL));
    if ( *((_QWORD *)v16 + 23) != v20 )
    {
      v6 = -2147024891;
      v9 = 304LL;
      goto LABEL_7;
    }
    SystemCursor2::GetEffectiveVisibiltyState(v16);
    *((_BYTE *)v10 + 177) = a3;
    EffectiveVisibiltyState = SystemCursor2::GetEffectiveVisibiltyState(v10);
    if ( v13 != EffectiveVisibiltyState )
    {
      v14 = SystemCursor2::SetEffectiveVisibility(v12, EffectiveVisibiltyState);
      v6 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x22E,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)(unsigned int)v14);
        v9 = 305LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)v6);
        if ( v17 )
          std::_Ref_count_base::_Decref(v17);
        return v6;
      }
    }
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
  }
  return 0LL;
}
