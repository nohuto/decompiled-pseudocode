/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1802A61BC
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1802A637C (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A54CC (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@@@-$_.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rdx
  __int64 result; // rax

  v4 = (_QWORD *)a1[2];
  a1[2] = *v4;
  std::_List_node<std::pair<unsigned int const,CFlipAwayFence>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,CFlipAwayFence>,void *>>>(
    (__int64)a1,
    (__int64)v4,
    a3,
    a4);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
