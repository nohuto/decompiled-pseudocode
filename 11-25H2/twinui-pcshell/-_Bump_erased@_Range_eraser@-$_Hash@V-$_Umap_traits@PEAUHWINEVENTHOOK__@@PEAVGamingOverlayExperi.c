/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180351B00
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1803527A4 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V-$_Uhash_compare@PEA.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18055B6B0 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)a1[2];
  a1[2] = *v2;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
