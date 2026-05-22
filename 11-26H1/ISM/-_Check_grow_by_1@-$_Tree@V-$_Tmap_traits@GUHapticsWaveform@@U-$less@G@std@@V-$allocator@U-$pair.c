/*
 * XREFs of ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18019F198
 * Callers:
 *     ??$_Emplace@AEAEV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@?$_Tree@V?$_Tmap_traits@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@1@@Z @ 0x18019D58C (--$_Emplace@AEAEV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@@-$_Tree@V-$_Tmap_tr.c)
 *     ??$_Try_emplace@G$$V@?$map@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x18019DA0C (--$_Try_emplace@G$$V@-$map@GUHapticsWaveform@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGUHapticsW.c)
 *     ??$_Try_emplace@G$$V@?$map@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x18019DBD4 (--$_Try_emplace@G$$V@-$map@GV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@U-$less@.c)
 * Callees:
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B15CC (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short,HapticsWaveform,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,HapticsWaveform>>,0>>::_Check_grow_by_1(
        __int64 a1)
{
  __int64 result; // rax

  result = 0x555555555555555LL;
  if ( *(_QWORD *)(a1 + 8) == 0x555555555555555LL )
    std::_Throw_tree_length_error();
  return result;
}
