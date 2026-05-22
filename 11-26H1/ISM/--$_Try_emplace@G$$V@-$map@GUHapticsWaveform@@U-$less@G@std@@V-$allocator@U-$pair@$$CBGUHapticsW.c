/*
 * XREFs of ??$_Try_emplace@G$$V@?$map@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x18019DA0C
 * Callers:
 *     ??A?$map@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@@std@@QEAAAEAUHapticsWaveform@@$$QEAG@Z @ 0x18019DDE0 (--A-$map@GUHapticsWaveform@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGUHapticsWaveform@@@std@@@3@.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180078FC8 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CB578 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$cha_ea_1800CB578.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAG@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAG@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18019D298 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAG@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$alloc.c)
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@1@AEBG@Z @ 0x18019D90C (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GUHapticsWaveform@@U-$less@G@std@@V-$allocator@U-.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18019F198 (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@GUHapticsWaveform@@U-$less@G@std@@V-$allocator@U-$pair.c)
 */

__int64 __fastcall std::map<unsigned short,HapticsWaveform>::_Try_emplace<unsigned short,>(
        __int64 *a1,
        __int64 a2,
        _WORD *a3)
{
  _WORD *v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  _BYTE v12[16]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]
  _WORD *v15; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned short,HapticsWaveform,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,HapticsWaveform>>,0>>::_Find_lower_bound<unsigned short>(
    a1,
    &v13,
    a3);
  if ( *(_BYTE *)(v14 + 25) || *v6 < *(_WORD *)(v14 + 28) )
  {
    std::_Tree<std::_Tmap_traits<unsigned short,HapticsWaveform,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,HapticsWaveform>>,0>>::_Check_grow_by_1(a1);
    v7 = *a1;
    v15 = a3;
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,HapticsWaveform>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,HapticsWaveform>,void *>>>(
           (__int64)v12,
           (__int64)a1,
           v7,
           v8,
           &v15);
    v10 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>((__int64)v12);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>::_Insert_node(
                      a1,
                      (__int64)&v13,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
