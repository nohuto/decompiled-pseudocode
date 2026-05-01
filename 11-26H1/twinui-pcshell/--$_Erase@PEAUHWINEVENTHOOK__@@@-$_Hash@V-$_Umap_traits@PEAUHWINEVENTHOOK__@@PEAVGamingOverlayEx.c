/*
 * XREFs of ??$_Erase@PEAUHWINEVENTHOOK__@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x18033DAA4
 * Callers:
 *     ??1?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@XZ @ 0x180341D94 (--1-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x180285E40 (--R-$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z.c)
 *     ??$_Find_last@PEAUHWINEVENTHOOK__@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@1@AEBQEAUHWINEVENTHOOK__@@_K@Z @ 0x18033DD38 (--$_Find_last@PEAUHWINEVENTHOOK__@@@-$_Hash@V-$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverl.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Erase<HWINEVENTHOOK__ *>(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r11
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = std::_Conditionally_enabled_hash<HWINEVENTHOOK__ *,1>::operator()(a2);
  v5 = *(_QWORD **)(std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Find_last<HWINEVENTHOOK__ *>(
                      v3,
                      v11,
                      v4,
                      v2)
                  + 8);
  if ( !v5 )
    return 0LL;
  v6 = qword_1808DE0D8;
  v7 = 2 * (v2 & qword_1808DE0F0);
  if ( *(_QWORD **)(qword_1808DE0D8 + 16 * (v2 & qword_1808DE0F0) + 8) == v5 )
  {
    if ( *(_QWORD **)(qword_1808DE0D8 + 16 * (v2 & qword_1808DE0F0)) == v5 )
    {
      v8 = qword_1808DE0C8;
      *(_QWORD *)(qword_1808DE0D8 + 16 * (v2 & qword_1808DE0F0)) = qword_1808DE0C8;
    }
    else
    {
      v8 = v5[1];
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(_QWORD **)(qword_1808DE0D8 + 16 * (v2 & qword_1808DE0F0)) == v5 )
  {
    *(_QWORD *)(qword_1808DE0D8 + 16 * (v2 & qword_1808DE0F0)) = *v5;
  }
  v9 = *v5;
  --qword_1808DE0D0;
  *(_QWORD *)v5[1] = v9;
  *(_QWORD *)(v9 + 8) = v5[1];
  std::_Deallocate<16>(v5, (struct std::nothrow_t *)0x20);
  return 1LL;
}
