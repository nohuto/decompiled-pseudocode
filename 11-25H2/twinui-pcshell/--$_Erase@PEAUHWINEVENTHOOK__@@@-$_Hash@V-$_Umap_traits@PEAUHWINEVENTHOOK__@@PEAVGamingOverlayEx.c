/*
 * XREFs of ??$_Erase@PEAUHWINEVENTHOOK__@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x18033DD10
 * Callers:
 *     ??1?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@XZ @ 0x180340EC4 (--1-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800F2E60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@PEAUHWINEVENTHOOK__@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@1@AEBQEAUHWINEVENTHOOK__@@_K@Z @ 0x18033DF94 (--$_Find_last@PEAUHWINEVENTHOOK__@@@-$_Hash@V-$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverl.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Erase<HWINEVENTHOOK__ *>(
        __int64 a1,
        const unsigned __int8 *a2)
{
  __int64 appended; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a2, 8uLL);
  v5 = *(_QWORD **)(std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Find_last<HWINEVENTHOOK__ *>(
                      v4,
                      v12,
                      v3,
                      appended)
                  + 8);
  if ( !v5 )
    return 0LL;
  v7 = qword_18089DA78;
  v8 = 2 * (v6 & qword_18089DA90);
  if ( *(_QWORD **)(qword_18089DA78 + 16 * (v6 & qword_18089DA90) + 8) == v5 )
  {
    if ( *(_QWORD **)(qword_18089DA78 + 16 * (v6 & qword_18089DA90)) == v5 )
    {
      v9 = qword_18089DA68;
      *(_QWORD *)(qword_18089DA78 + 16 * (v6 & qword_18089DA90)) = qword_18089DA68;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(qword_18089DA78 + 16 * (v6 & qword_18089DA90)) == v5 )
  {
    *(_QWORD *)(qword_18089DA78 + 16 * (v6 & qword_18089DA90)) = *v5;
  }
  v10 = *v5;
  --qword_18089DA70;
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x20);
  return 1LL;
}
