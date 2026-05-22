/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAG@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAG@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18019D298
 * Callers:
 *     ??$_Try_emplace@G$$V@?$map@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x18019DA0C (--$_Try_emplace@G$$V@-$map@GUHapticsWaveform@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGUHapticsW.c)
 * Callees:
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@1@@Z @ 0x18019DC94 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBGUHapticsWaveform@@@std@@PEAX@.c)
 */

__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,HapticsWaveform>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,HapticsWaveform>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD **a5)
{
  __int64 v7; // r9
  __int64 v8; // rcx

  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<unsigned short const,HapticsWaveform>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<unsigned short const,HapticsWaveform>,void *>>>();
  v7 = *(_QWORD *)(a1 + 8);
  *(_WORD *)(v7 + 28) = **a5;
  v8 = 0LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_DWORD *)(v7 + 40) = 0;
  **(_QWORD **)(a1 + 8) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v8++ + 24) = 0;
  while ( v8 < 2 );
  return a1;
}
