/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@1@V21@@Z @ 0x1800DF344
 * Callers:
 *     ?UnregisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@UDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z @ 0x1800E4A74 (-UnregisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@UDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x18007868C (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<_LARGE_INTEGER const,void *>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r10
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rbx

  v5 = std::_Hash_representation<HWND__ *>(a3 + 16);
  v7 = a1[3];
  v8 = 2 * (a1[6] & v5);
  if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5) + 8) == v6 )
  {
    if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5)) == v6 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 8 * v8) = v9;
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & v5)) = *v6;
  }
  v10 = *v6;
  --a1[2];
  *(_QWORD *)v6[1] = v10;
  *(_QWORD *)(v10 + 8) = v6[1];
  std::_Deallocate<16>(v6, 0x20uLL);
  *a2 = v10;
  return a2;
}
