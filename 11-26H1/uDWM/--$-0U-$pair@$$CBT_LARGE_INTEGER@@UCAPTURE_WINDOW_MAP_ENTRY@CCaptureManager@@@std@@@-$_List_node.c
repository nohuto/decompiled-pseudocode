/*
 * XREFs of ??$?0U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@1@@Z @ 0x18009C760
 * Callers:
 *     ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@1@@Z @ 0x18009DCB4 (--$emplace@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@-$_Has.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v5 = operator new(0x40uLL);
  a1[1] = v5;
  v5[2] = *(_QWORD *)a3;
  v5[3] = *(_QWORD *)(a3 + 8);
  v6 = (_QWORD *)(a3 + 16);
  v5[4] = 0LL;
  if ( v5 + 4 != (_QWORD *)(a3 + 16) )
  {
    v5[4] = *v6;
    *v6 = 0LL;
  }
  v5[5] = *(_QWORD *)(a3 + 24);
  v7 = (_QWORD *)(a3 + 32);
  v5[6] = 0LL;
  if ( v5 + 6 != (_QWORD *)(a3 + 32) )
  {
    v5[6] = *v7;
    *v7 = 0LL;
  }
  *((_BYTE *)v5 + 56) = *(_BYTE *)(a3 + 40);
  *((_BYTE *)v5 + 57) = *(_BYTE *)(a3 + 41);
  return a1;
}
