/*
 * XREFs of ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18023189C
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180342C04 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18035911C (-clear@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V-$_Uhash_.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  result = 0LL;
  v5 = a1;
  v6 = (unsigned __int64)((char *)a2 - (char *)a1 + 7) >> 3;
  if ( a1 > a2 )
    v6 = 0LL;
  if ( v6 >= 2 )
  {
    result = *a3;
    v7 = (unsigned __int64)&a1[v6 - 1];
    if ( v5 > a3 || v7 < (unsigned __int64)a3 )
    {
      v8 = 8 * (v6 & 0xFFFFFFFFFFFFFFFEuLL);
      memset64(v5, result, v8 >> 3);
      v5 = (unsigned __int64 *)((char *)v5 + v8);
    }
  }
  while ( v5 != a2 )
  {
    result = *a3;
    *v5++ = *a3;
  }
  return result;
}
